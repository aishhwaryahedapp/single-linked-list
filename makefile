student:stud_main.o stud_add.o stud_show.o stud_del.o stud_save.o stud_readfile.o count_node.o stud_sort.o stud_delall.o stud_rev.o stud_mod.o 
         cc stud_main.o stud_add.o stud_show.o stud_del.o stud_save.o stud_readfile.o count_node.o stud_sort.o stud_delall.o stud_rev.o stud_mod.o -o student

stud_main.o:stud_main.c
        cc -c stud_main.c

stud_add.o:stud_add.c
        cc -c stud_add.c

stud_show.o:stud_show.c
        cc -c stud_show.c

stud_del.o:stud_del.c
        cc -c stud_del.c

stud_save.o:stud_save.c
        cc -c stud_save.c

stud_readfile.o:stud_readfile.c
        cc -c stud_readfile.c

count_node.o:count_node.c
        cc -c count_node.c

stud_sort.o:stud_sort.c
        cc -c stud_sort.c

stud_delall.o:stud_delall.c
        cc -c stud_delall.c

stud_rev.o:stud_rev.c
        cc -c stud_rev.c

stud_mod.o:stud_mod.c
        cc -c stud_mod.c

clear:
         @echo "cleaning up..."
        @rm -rv *.o
