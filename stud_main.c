#include<stdio.h>
#include "student.h"

int main()
{
        SLL *headptr=0;
        stud_readfile(&headptr);
        char op,ch;
        while(1)
        {
                printf("********STUDENT RECORD MENU***********\n");
                printf("a/A : ADD NEW RECORD\n");
                printf("d/D : DELETE A RECORD\n");
                printf("s/S : SHOW THE LIST\n");
                printf("m/M : MODIFY A RECORD\n");
                printf("v/V : SAVE THE RECORDS\n");
                printf("e/E : EXIT\n");
                printf("t/T : SORT THE LIST\n");
                printf("l/L : DELETE ALL THE RECORDS\n");
                printf("r/R : REVERSE THE LIST\n");
                printf("********************************************\n");

                printf("ENTER YOUR CHOICE:\n");
                scanf(" %c",&op);

                switch(op)
                {
                        case('a'):
                        case('A'):
                                stud_add(&headptr);
                                break;
                        case('d'):
                        case('D'):
                                stud_del(&headptr);
                                break;  
                        case('s'):
                        case('S'):
                                stud_show(headptr);
                                break;  
                        case('m'):
                        case('M'):
                                stud_mod(&headptr);
                                break;
 case('v'):
                        case('V'):
                                stud_save(headptr);
                                break;
                        case('e'):
                        case('E'):
                                printf("S/s: SAVE AND EXIT\n");
                                printf("E/e: EXIT WITHOUT SAVING\n");

                                printf("ENTER YOUR CHOICE:\n");
                                scanf(" %c",&ch);

                                switch(ch)
                                {
                                        case 'S':
                                        case 's':
                                                stud_save(headptr);
                                                stud_delall(&headptr);
                                                printf("DATA SAVED. EXITING.\n");
                                                return 1;
                                        case 'E':
                                        case 'e':
                                                stud_delall(&headptr);
                                                printf("EXITING WITHOUT SAVING.\n");
                                                return 1;
                                }
                                break;
                        case('t'):
                        case('T'):
                                stud_sort(headptr);
                                break;
                        case('l'):
                        case('L'):
                                stud_delall(&headptr);
                                break;
                        case('r'):
                        case('R'):
                                stud_rev(&headptr);
                                break;
                        default:printf("INVALID INPUT\n");
                }
        }
}
