#include <stdio.h> // pre-processor statement

int main()
{
    int a,b;

    printf("Enter number a\n");
    scanf("%d",&a);

    printf("Enter number b\n");
    scanf("%d",&b);

    printf("The sum of a and b is: %d\n", a+b);

    return 0;
}
//compiling:- preprocessing,compilation,assembly,linking
// gcc -Wall -save-temps any filename
// 1)preprocessing :- in it remove the comment in programme,expend macro ,hash_inculdes_file contents  pikced up and save in one file #include <stdio.h>
// it is store in .i files main.i 
// next in compiling process convert into assembly line instructions .i file these file save in .s files next is linking .o file the licker converts all the .o file into silent executables all the files in which variable functions are written can be run at one place .static and dynamic linking.