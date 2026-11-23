#include<stdio.h>
#include"student.h"

void stud_save(SLL *ptr)
{
        if(ptr==0)
        {
                printf("NO RECORDS AVAILABLE\n");
                return;
        }
        FILE *fp=fopen("student.dat","w");
        while(ptr)
        {
                fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }
        printf("DATA SAVED IN FILE\n");
        fclose(fp);
}
