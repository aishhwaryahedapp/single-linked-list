#include<stdio.h>
#include"student.h"

void stud_delall(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("NO RECORDS AVAILABLE\n");
                return;
        }
        SLL *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                free(del);
                del=*ptr;
        }
        printf("ALL NODES ARE DELETED\n");
}
