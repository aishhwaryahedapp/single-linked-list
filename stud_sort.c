#include<stdio.h>
#include"student.h"

void stud_sort(SLL *ptr)
{
	char op; 
	float percent;
	char name[20];
	if(ptr==0)
	{
		printf("NO RECORDS AVAILABLE\n");
		return;
	}
	printf("SELECT YOUR CHOICE:\n");
	printf("*************CHOICES*****************\n");
	printf("N/n:SORT WITH NAME\n");
	printf("P/p:SORT WITH PERCENTAGE\n");
	printf("**************************************\n");
	scanf(" %c",&op);
	int i,j,c=count_node(ptr);
	SLL *p1=ptr,*p2,t;
	switch(op)
	{
		case 'N':
		case 'n':
			for(i=0;i<c-1;i++)
			{
				p2=p1->next;
				for(j=0;j<c-1-i;j++)
				{
					if(strcmp(p1->name,p2->name)>0)
					{
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.percentage=p1->percentage;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->percentage=p2->percentage;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
						p2->percentage=t.percentage;
					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			break;
		case 'P':
		case 'p':
			for(i=0;i<c-1;i++)
			{
				p2=p1->next;
				for(j=0;j<c-1-i;j++)
				{
					if(p1->percentage<p2->percentage)
					{
						t.rollno=p1->rollno;
						strcpy(t.name,p1->name);
						t.percentage=p1->percentage;

						p1->rollno=p2->rollno;
						strcpy(p1->name,p2->name);
						p1->percentage=p2->percentage;

						p2->rollno=t.rollno;
						strcpy(p2->name,t.name);
						p2->percentage=t.percentage;
					}
					p2=p2->next;
				}
				p1=p1->next;
			}
			break;
	}
}

