#include<stdio.h>
#include"student.h"

void stud_readfile(SLL **ptr)
{
        SLL *new;
        FILE *fp=fopen("student.dat","r");
        if(fp==0)
        {
                printf("FILE IS NOT AVAILABLE\n");
                return;
        }
        while(1)
        {
                new=malloc(sizeof(SLL));
                if(fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->percentage)==-1)
                        break;
                new->next=0;
                if(*ptr==0)
                        *ptr=new;
                else
                {
                        SLL *last=*ptr;
                        while(last->next)
                                last=last->next;

                        last->next=new;
                }
        }
}
