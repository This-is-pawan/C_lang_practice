// ######### Arthmatic operations ################
//  #include <stdio.h>
//  int main(){

//  int a,b;
//  a = 34;
//  b = 6;

//  printf("a + b = %d\n",a+b);
//  printf("a - b = %d\n",a-b);
//  printf("a * b = %d\n",a*b);
//  printf("a / b = %d\n",a/b);
//  printf("a modle b = %d\n",a%b);

// _____________________result__________________

//  a + b = 40
// a - b = 28
// a * b = 204
// a / b = 5
// a modle b = 4
// }

// #include <stdio.h>
// int main(){

//  int a;
//  float b;
//  a = 34;
//  b = 6.34;

//  printf("a + b = %f\n",a+b);
//  printf("a - b = %f\n",a-b);
//  printf("a * b = %f\n",a*b);
//  printf("a / b = %f\n",a/b);

// __________result_____________

// a + b = 40.340000
// a - b = 27.660000
// a * b = 215.560005
// a / b = 5.362776
// }
// ###############  realtional operations ################
// #include <stdio.h>
// int main(){

//  int a,b;
//  a = 34;
//  b = 34;

//  printf("a== b = %d\n",a!=b);
//  printf("a== b = %d\n",a==b);
//  printf("a > b = %d\n",a>b);
//  printf("a < b = %d\n",a<b);

// ___________result_____________

// a== b = 0 false
// a== b = 1 true
// a > b = 0 false
// a < b = 0 false
// }
// ############# logical operations ###############
// #include <stdio.h>
// int main(){
//  int a,b;
//  a = 34;
//  b = 34;
//  printf("a && b = %d\n",a&&b==24);
//  printf("a|| b = %d\n",a||b==34);

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
// #include <stdio.h>
// int main(){
//  int a,b;
//  a = 2;
//  b = 3;
//  printf("a && b = %d\n",a&&b==24);
//  printf("a|| b = %d\n",a|b==34);
//  printf("a^ b = %d\n",a^b==4);

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
// #include <stdio.h>

// int main()
// {
//     int count = 6;

//     for (int i = 1; i <= 10; i++)
//     {
//         printf("6 x %d = %d\n", i, i * count);
//     }

//     return 0;
// }
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

//         case 3:
//             printf("Value is 3\n");
//             break;

//         default:
//             printf("Value is default\n");
//             break;
//     }

//     return 0;
// }
