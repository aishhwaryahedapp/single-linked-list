#include<stdio.h>
#include<stdlib.h>
#include "student.h"

void stud_add(SLL **ptr)
{
	SLL *new=malloc(sizeof(SLL));
	printf("ENTER YOUR DETAILS:\n");
	scanf("%d %s %f",&new->rollno,new->name,&new->percentage);
	SLL *t=*ptr;
	while(t)
	{
		if(new->rollno==t->rollno)
		{
			printf("DUPLICATE ROLLNO IS NOT ALLOWED\n");
			return;
		}
		if(new->percentage<0.00 || new->percentage>100.00)
		{
			printf("PERCENTAGE IS OUT OF RANGE\n");
			return;
		}
		t=t->next;
	}
	if((*ptr==0)||((*ptr)->rollno>1))
	{
		new->rollno=1;
		new->next=*ptr;
		*ptr=new;
		return;
	}
	t=*ptr;
	while(t->next)
	{
		if(((t->next->rollno)-(t->rollno))>1)
			break;
		t=t->next;
	}
	new->rollno=t->rollno+1;

	if(new->rollno<(*ptr)->rollno)
	{
		new->next=*ptr;
		*ptr=new;
	}
	else
	{
		SLL *pos=*ptr;
		while(pos->next!=0 && (new->rollno)>(pos->next->rollno))
			pos=pos->next;
		new->next=pos->next;
		pos->next=new;
	}
}
