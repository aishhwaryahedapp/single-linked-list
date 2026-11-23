#include<stdio.h>
#include<stdlib.h>
#include"student.h"

void stud_rev(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("NO RECORDS AVAILABLE\n");
                return;
        }
        int i,c=count_node(*ptr);
        if(c>1)
        {
                SLL **a=malloc(sizeof(SLL *)*c);
                SLL *t=*ptr;

                for(i=0;i<c;i++)
                {
                        a[i]=t;
                        t=t->next;
                }

                for(i=c-1;i>0;i--)
                {
                        a[i]->next=a[i-1];
                        a[0]->next=0;
                        *ptr=a[c-1];
                }
        }
}
