// ######### Arthmatic operations ################
 #include <stdio.h>
int main(){

 int a,b;
 a = 34;
 b = 6;

 printf("a + b = %d\n",a+b);
  printf("a - b = %d\n",a-b);
printf("a * b = %d\n",a*b);
 printf("a / b = %d\n",a/b);
printf("a modle b = %d\n",a%b);

// _____________________result__________________

// a + b = 40
//  a - b = 28
// a * b = 204
// a / b = 5
//  a modle b = 4
//  }

 #include <stdio.h>
int main(){

 int a;
 float b;
 a = 34;
 b = 6.34;

 printf("a + b = %f\n",a+b);
 printf("a - b = %f\n",a-b);
 printf("a * b = %f\n",a*b);
 printf("a / b = %f\n",a/b);

// __________result_____________

// a + b = 40.340000
// a - b = 27.660000
// a * b = 215.560005
// a / b = 5.362776
// }
// ###############  realtional operations ################
#include <stdio.h>
int main(){

 int a,b;
 a = 34;
 b = 34;

 printf("a== b = %d\n",a!=b);
 printf("a== b = %d\n",a==b);
 printf("a > b = %d\n",a>b);
 printf("a < b = %d\n",a<b);

// ___________result_____________

// a== b = 0 false
// a== b = 1 true
// a > b = 0 false
// a < b = 0 false
// }
// ############# logical operations ###############
#include <stdio.h>
int main(){
 int a,b;
 a = 34;
 b = 34;
 printf("a && b = %d\n",a&&b==24);
 printf("a|| b = %d\n",a||b==34);

//  __________result___________

// a && b = 0
// a|| b = 1
// a ! b = 0
// }
// ################# Bitwise operators ###########
// 0=>00 in binary system
// 1=>01
// 2=>10
// 3=>11
#include <stdio.h>
int main(){
 int a,b;
 a = 2;
 b = 3;
 printf("a && b = %d\n",a&&b==24);
 printf("a|| b = %d\n",a|b==34);
 printf("a^ b = %d\n",a^b==4);

// __________result___________

// a && b = 0 and
// a| b = 2 or
// a^ b = 2 exlusive one false and one true (xOR operator)
// }

// #######  assignment operator ########
// =,+=,-=,*=,/=
// ######### miscellanceous operators #######
// sizeof(),&,*,?:
//  ####### operator precedence in c########
// Category                 Operator             Associativity
// 1) postfix               0 []-> . ++ --        Left to right
// 2) Unary                 +-!~++ --(type)* & sizeof Right to left
// 3) Multiplicative
// 4) Additive
// 5) Shift
// 6) Relational
// 7) Equailty
// 8) Bitwise AND
// 9) Bitwise XOR
// 10) Bitwise OR
// 11) Logical AND
// 12) Logical OR
// 13) Conditional
// 14) Assigment
// 15) Comma
// #################### table of 6 #########
#include <stdio.h>

int main()
{
    int count = 6;

    for (int i = 1; i <= 10; i++)
    {
        printf("6 x %d = %d\n", i, i * count);
    }

    return 0;
}
/*
###### format specifier in c mostly use ########
%c =>character
%d =>integer
%f =>float
%lf =>long
%Lf =>double
%Lf =>long double
*/

/*
##########   constant in c   ##########
a constant is a value or variable that can't be changed in the program, for e.g 15,23,'a',3.4 'pk' etc
there are two ways to define constant in C programming.
const keyword
#define preprocessor


int main()
{
   const  int count = 6;
      count=4;  cannot do this since PI is a constant
    for (int i = 1; i <= 10; i++)
    {
        printf("6 x %d = %d\n", i, i * count);
    }

    return 0;
}
    #include <stdio.h>
    #define PI 3.14
int main()
{
   const  int count = 6;
   PI=2.3;int = 6; cannot do this since PI is a constant
     printf("%d",PI)
    for (int i = 1; i <= 10; i++)
    {
        printf("6 x %d = %d\n", i, i * count);
    }

    return 0;
}
#### scape sequences list in C lang ####
printf("tab character \t\t my backslash \n %f",PI);
printf("tab character \t\t my backslash \a %f",PI); window sound


*/

// #include <stdio.h>
// int main(){
//  int age;
//  printf("enter your age\n");
//  scanf("%d",&age);
//  printf("you have entered %d as your age\n",age);
//  if (age>=18)
//  {
//   printf("you can drive");
//   /* code */
//  }else if (age>10)
//  {
//   /* code */
//   printf("you cannot drive ");
//  }

//  return 0;
// }
// #include <stdio.h>

// int main()
// {
//     int a ;
//    printf("Enter your age\n")
// scanf("%d",&a)
//     switch (a)
//     {
//         case 2:
//             printf("Value is 2\n");
//             break;
// swith() nested condition
//         case 3:
//             printf("Value is 3\n");
//             break;

//         default:
//             printf("Value is default\n");
//
//     }

//     return 0;
// }
// ###################  Loops in c       ####################
// ############ do while ##########
// #include <stdio.h>

// int main()
// {
//     int val, index = 0;
//     printf("Enter the value\n");
//     scanf("%d", &val);
//     do
//     {
//         index += 1;
//         printf("%d\n", index);
//     } while (index < val);

//     return 0;
// }
// ########### while loop ##########
// #include <stdio.h>

// int main()
// {
//     int val, index = 0;
//     printf("Enter the value\n");
//     scanf("%d", &val);
//     while (index<=val)
//     {
//         index +=1;
//     printf("%d => %d\n",index-1,index);
//     }
    

//     return 0;
// }

// ########### for loop ###########
// #include <stdio.h>
// int main()
// {
// // char a = 'A';        // correct
// // char a = "A";        // wrong
// // char name[] = "A";   // correct

//     char count[] = "Happysingh"; 
//     int val;

//      printf("Enter the value:\n");
//      scanf("%d", &val);

//     for (int i = 0; i < val; i++)
//     {
//         if (i==4)
//         {
//             continue;
//         }
//         printf("%c", count[i]);   // print character one by one
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     label:printf("we are inside label");
//     goto end;
//     printf("hello world");
//     goto label;
//     end:printf("we are at end");
//     return 0;
// }
// #############  GOTO in c lang   #######################
// Note:For e.g in Nested loops, we can exist from one loop using break, but in c lang ,we can exist from all loops using goto
// #include <stdio.h>
// int main()
// {
//     int num;
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",i);
//         for (int j = 0; j < 5; j++){
// printf("Enter the number\n");
// scanf("%d",&num);
// if (num==0){
//     // break;
//     goto end;
// }
// {
   
// }

//         }
//     }
// end:printf("both loops end using the goto");
//     return 0;
// }

// _________________type casting syntax___________________

// #include <stdio.h>

// int main()
// {
//     int a = 3;
//     float b = (float)54 / 4;

//     printf("The value of b is %f\n", b);      // 13.500000
//     printf("The value of b as int is %d\n", (int)b); // 13

//     return 0;
// }

// ___________function in c lang____________

// declaration e.g int print(),definition { block},call print();
// #include <stdio.h>

// int print();   // declaration

// int main()
// {
//     print();   // function call
//     return 0;
// }

// int print()    // definition
// {
//     printf("Hello Pawan bro!");
//     return 0;
// }
// #### types of functions #####
//1)---- libary functions ----  functions included in c headers files e.g printf("the is a value")
// In C language, header files contain the declaration of library functions.
// When you use any built-in function like printf() or scanf(), you must include its header file at the top of the program.

// Syntax:
// #include <header_file_name>
//  What is a Header File?

// A header file is a file with .h extension that contains:

// Function declarations

// Macros

// Constants

// Example:

//------ include <stdio.h> ------
// 2)user defined functions:- functions created by c programmer to reduce complexity of a porgram


// e.gs of functions
// #include <stdio.h>

// // Function declaration
// int print(int a, int b);

// int main()
// {
//     int a = 6;
//     int b = 5;

//     print(a, b);   // function call

//     return 0;
// }

// // Function definition
// int print(int a, int b)
// {
//     printf("%d", a + b);
//     return 0;
// }
// e.g
// #include <stdio.h>
// int sum(int a,int b){
//     return a+b;
// }
// void printstar(int n){
//     for (int i = 0; i < n; i++)
//     {
//      printf("%c %d",'*',i);
//     }
    
//     printf("%c",'*');
// }

// int takenumber(){
//     int i;
//     printf("Enter a number");
//     scanf("%d",&i);
//     return i;
// } 


// int main()
// {
//     int a,b,c;
//     a=9;
//     b=90;
//     c=sum(a,b);
//     printf("the sum is %d\n",c);
//    c= takenumber();
//    printf("the number enter %d",c);
//     printstar(3);

    
//     return 0;
// }

#include <stdio.h>

void table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main()
{
    int num;

    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n", num);

    table(num);   // function call

    return 0;
}







