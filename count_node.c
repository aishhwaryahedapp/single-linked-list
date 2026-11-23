#include<stdio.h>
#include "student.h"

int count_node(SLL *ptr)
{
        int c=0;
        SLL *t=ptr;
        while(t)
        {
                c++;
                t=t->next;
        }
        return c;
}
