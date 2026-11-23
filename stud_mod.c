#include<stdio.h>
#include<string.h>
#include "student.h"

void stud_mod(SLL **ptr)
{
        char op; 
        int roll,c=0;
        float percent;
        char name[20];
        if(*ptr==0)
        {
                printf("NO RECORDS AVAILABLE\n");
                return;
        }
        printf("SELECT YOUR CHOICE:\n");
        printf("**************CHOICES****************\n");
        printf("R/r:SEARCH BY ROLLNO:\n");
        printf("N/n:SEARCH BY NAME:\n");
        printf("P/p:SEARCH BY PERCENTAGE\n");
        printf("****************************************\n");
        scanf(" %c",&op);
        SLL *temp=*ptr,*found=0;
        switch(op)
        {
                case 'R':
                case 'r':
                        printf("ENTER THE ROLLNO:\n");
                        scanf("%d",&roll);
                        while(temp)
                        {
				if(temp->rollno==roll)
				{
					found=temp;
					break;
				}
				temp=temp->next;
			}
			break;
		case 'N':
		case 'n':
			printf("ENTER THE NAME:\n");
			scanf("%s",name);
			while(temp)
			{
				if(strcmp(temp->name,name)==0)
				{
					printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
					found=temp;
					c++;
				}
				temp=temp->next;
			}
			if(c>1)
			{
				printf("ENTER ROLL NO TO MODIFY:\n");
				scanf("%d",&roll);
				temp=*ptr;
				found=0;
			}

			while(temp)
			{
				if(temp->rollno==roll && strcmp(temp->name,name)==0)
				{
					found=temp;
					break;
				}
				temp=temp->next;
			}
			break;
		case 'P':
		case 'p':
			printf("ENTER PERCENTAGE:\n");
			scanf("%f",&percent);
			while(temp)
			{
				if(temp->percentage==percent)
				{
					printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
					found=temp;
					c++;
				}
				temp=temp->next;
			}
			if(c>1)
			{
				printf("ENTER ROLL NO TO MODIFY:\n");
				scanf("%d",&roll);
				temp=*ptr;
				found=0;
			}

			while(temp)
			{
				if(temp->rollno==roll && temp->percentage==percent)
				{
					found=temp;
					break;
				}
				temp=temp->next;
			}
			break;
		default:printf("INVALID CHOICE\n");
	}

	if(found==0)
	{
		printf("RECORD NOT FOUND\n");
		return;
	}
	printf("CURRENT DETAILS:\n");
	printf("%d %s %f\n",found->rollno,found->name,found->percentage);
	printf("ENTER UPDATED NAME AND PERCENTAGE:\n");
	scanf("%s %f",found->name,&found->percentage);

	printf("RECORD MODIFIED SUCCESFULLY\n");
}
