#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "student.h"

void stud_del(SLL **ptr)
{
	char op; 
	int roll;
	char name[20];
	if(*ptr==0)
	{
		printf("NO RECORDS AVAILABLE\n");
		return;
	}
	printf("SELECT YOUR CHOICE:\n");
	printf("**************CHOICES****************\n");
	printf("R/r:ENTER ROLLNO TO DELETE:\n");
	printf("N/n:ENTER NAME TO DELETE:\n");
	printf("****************************************\n");
	scanf(" %c",&op);
	SLL *del=*ptr,*prev,*temp=*ptr;
	int c=0;
	switch(op)
	{
		case 'R':
		case 'r':
			printf("ENTER THE ROLLNO TO DELETE:\n");
			scanf("%d",&roll);
			while(del)
			{
				if(del->rollno==roll)
				{
					if(del==*ptr)
						*ptr=del->next;
					else
						prev->next=del->next;

					free(del);
					printf("DELETED SUCCESSFULLY\n");
					return;
				}
				prev=del;
				del=del->next;
			}
			printf("ROLLNO NOT FOUND\n");
			break;

		case 'N':
		case 'n':
			printf("ENTER THE NAME TO DELETE:\n");
			scanf("%s",name);
			while(temp)
			{
				if(strcmp(temp->name,name)==0)
				{
					printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
					c++;
				}
				temp=temp->next;
			}
			if(c==0)
			{
				printf("NO SUCH NAME IS AVAILABLE\n");
				return;
			}
			if(c>1)
			{
				printf("ENTER ROLLNO TO DELETE:\n");
				scanf("%d",&roll);
			}
			while(del)
			{
				if(strcmp(del->name,name)==0&&(c==1||del->rollno==roll))
				{
					if(del==*ptr)
						*ptr=del->next;
					else
						prev->next=del->next;

					free(del);
					printf("DELETED SUCCESSFULLY\n");
					return;
				}
				prev=del;
				del=del->next;
			}
			if(c>1)
				printf("ROLLNO NOT FOUND FOR THIS NAME\n");
			break;
		default:printf("INVALID CHOICE\n");
	}
}
