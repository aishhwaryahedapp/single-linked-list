#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct student
{
        int rollno;
        char name[50];
        float percentage;
        struct student *next;
}SLL;

void stud_add(SLL **);
void stud_del(SLL **);
void stud_show(SLL *); 
void stud_mod(SLL **);
void stud_save(SLL *); 
void stud_sort(SLL *); 
void stud_delall(SLL **);
void stud_rev(SLL **);
void stud_readfile(SLL **);
int count_node(SLL *); 
