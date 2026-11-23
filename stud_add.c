#include<stdio.h>
#include<stdlib.h>
#include "student.h"

void stud_add(SLL **ptr)
{
        SLL *new=malloc(sizeof(SLL));
        printf("ENTER YOUR DETAILS:\n");
        scanf("%d %s %f",&new->rollno,new->name,&new->percentage);
        if(*ptr==0)
        {
                new->next=*ptr;
                *ptr=new;
        }
        else
        {
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
                new->next=*ptr;
                *ptr=new;
        }
}
