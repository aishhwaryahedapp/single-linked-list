#include<stdio.h>
#include "student.h"

void stud_show(SLL *ptr)
{
        if(ptr==0)
        {
                printf("NO RECORDS AVAILABLE\n");
                return;
        }
        SLL *t=ptr;
        while(t)
        {
                printf("%d %s %f\n",t->rollno,t->name,t->percentage);
                t=t->next;
        }
}
