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
// 1)---- libary functions ----  functions included in c headers files e.g printf("the is a value")
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

// #include <stdio.h>

// void table(int num)
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }
// }

// int main()
// {
//     int num;

//     printf("Enter the number you want multiplication table of:\n");
//     scanf("%d", &num);

//     printf("Multiplication table of %d is as follows:\n", num);

//     table(num);   // function call

//     return 0;
// }
// n! factorial
// #include <stdio.h>

// Function to calculate factorial using recursion
// int factorial(int number)
// {
//     if (number == 0 || number == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return number * factorial(number - 1);
//     }
// }

// int main()
// {
//     int num;
//     printf("Enter the number you want the factorial of: ");
//     scanf("%d", &num);
//     printf("The factorial of %d is %d\n", num, factorial(num));
//     return 0;
// }
// #include <stdio.h>

// int factorial(int operations_number)
// {

//     {
//         if (operations_number == 0 || operations_number == 1)
//         {
//             return 1;
//         }
//         else
//         {
//             return operations_number * factorial(operations_number - 1);
//         }
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the input here and get value ");
//     scanf("%d",&num);
//      printf("The factorial of %d is=> %d\n", num, factorial(num));
//         return 0;
// }
// ________________________________________________
// | Unit    | Conversion   |
// | ------- | ------------ |
// | 1 km    | 0.621 miles  |
// | 1 mile  | 1.609 km     |
// | 1 inch  | 2.54 cm      |
// | 1 foot  | 12 inches    |
// | 1 pound | 0.453 kg     |
// | 1 kg    | 2.204 pounds |

// #include <stdio.h>

// float kiometer(float km){
// if (km==0)
// {
//     return 0;
// }else{
//     return 0.6231*km;
// }

// }
// int main()
// {
//     float val;
//     printf("Enter the value");
//     scanf("%f",&val);
//     printf("%.2f km = %.3f miles\n", val, kiometer(val));

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int marks[4];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the value of %d element of the array\n",i);
//         scanf("%d",&marks[i]);
//     }

//     marks[0]=34;
//     printf("marks of student 4 is %d\n ",marks[0]);
//     marks[0]=90;
//     printf("marks of student 4 is %d\n ",marks[0]);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int marks[5] = {45, 234, 23, 5,90};

//     for (int i = 0; i < 5; i++)
//     {
//         printf("The value of %d element of the array is %d\n", i, marks[i]);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int marks[2][5] = {
//         {405, 24, 2, 4, 0},
//         {45, 234, 23, 5, 90}};

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("The value of marks[%d][%d] is %d\n", i, j, marks[i][j]);
//         }
//     }
//     return 0;
// }
// ########
// #include <stdio.h>
// int main()
// {
//     char input;
//     float value, result;
//     float kmsToMils = 0.621371;
//     float inchesToFoot = 0.0833333;
//     float cmsToInches = 0.393701;
//     float poundTokgs = 0.453592;
//     float inchesToMeters = 0.0254;

//     while (1)
//           {
//         printf("\nEnter the input character (q to quit)\n");
//         printf("1. km to miles\n");
//         printf("2. inches to foot\n");
//         printf("3. cms to inches\n");
//         printf("4. pound to kgs\n");
//         printf("5. inches to meters\n");

//         scanf(" %c", &input);

//         if (input == 'q')
//         {
//             break;
//         }

//         printf("Enter the value you want to convert: ");
//         scanf("%f", &value);

//         switch (input)
//         {
//         case '1':
//             result = value * kmsToMils;
//             printf("%.2f km = %.3f miles\n", value, result);
//             break;

//         case '2':
//             result = value * inchesToFoot;
//             printf("%.2f inches = %.3f foot\n", value, result);
//             break;

//         case '3':
//             result = value * cmsToInches;
//             printf("%.2f cms = %.2f inches\n", value, result);
//             break;

//         case '4':
//             result = value * poundTokgs;
//             printf("%.2f pounds = %.2f kgs\n", value, result);
//             break;

//         case '5':
//             result = value * inchesToMeters;
//             printf("%.2f inches = %.2f meters\n", value, result);
//             break;

//         default:
//             printf("Invalid input!\n");
//         }
//     }

//     return 0;
// }

// ###### pointer #####

// Dynamic memory allocation
// Arrays,functions and sturctures
// Return multiple values from a function
// pointer reduces the code and improves the performance
// #include <stdio.h>
// int main()
// {
//     int a=34;
//     int*ptra=&a;
// printf("%d\n",*ptra); * print value and ptra print address
// arr[i]==*(arr+i) both are same
//     printf("%d",*ptra+2);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int arr[]={10,20,30,40,50,60};
//     printf("value at position 3 of the array is %d\n",arr[3]);
//     printf("The address of first element of the array is %d\n",&arr[0]);
//     printf("The address of second element of the array is %d\n",&arr[1]);
//     printf("The address of second element of the array is %d\n",arr+1);

//     //
//     printf("The value at address of first element of the array is %d\n",arr[0]);
//     printf("The value at address of first element of the array is %d\n",*(&arr[0]));
//     printf("The value at address of second element of the array is %d\n",*(arr));
//     printf("The value at address of second element of the array is %d\n",arr[1]);
//     printf("The value at address of second element of the array is %d\n",*(arr+1));

//     return 0;
// }

// #include <stdio.h>

// int fib_iterative(int n)
// {
//     int a = 0, b = 1, c;

//     if (n == 0)
//         return 0;

//     for (int i = 2; i <= n; i++)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// int fib_recursive(int n)
// {
//     if (n == 0)
//         return 0;
//     else if (n == 1)
//         return 1;
//     else
//         return fib_recursive(n - 1) + fib_recursive(n - 2);
// }

// int main()
// {
//     int number;

//     printf("Enter a number to find fibonacci number\n");
//     scanf("%d", &number);

//     printf("The fibonacci number at %d using iterative is %d\n", number, fib_iterative(number));
//     printf("The fibonacci number at %d using recursive is %d\n", number, fib_recursive(number));

//     return 0;
// }

// _________  actual and formal parameters
/*
1) when a function is called ,the values (expressions) that are passed in the call are called the arguments or  actual parameters
formal parameters are local variables which are assigned values from the arguments when the function is called.
*/
// call by reference
// #include <stdio.h>
// void add(int *a, int *b)
// {
//     *a = 90;
//     *b = 80;

//     printf("Sum = %d\n", (*a + *b));
// }

// int main()
// {
//     int x = 10;
//     int y = 2;

//     add(&x, &y);

//     printf("New value of x = %d\n", x);
//     printf("New value of y = %d\n", y);

//     return 0;
// }

// call by value
// #include <stdio.h>

// void add(int a, int b)
// {
//     a = 90;
//     b = 80;

//     printf("Sum = %d\n", a + b);
// }

// int main()
// {
//     int x = 10;
//     int y = 2;

//     add(x, y);

//     printf("Value of x = %d\n", x);
//     printf("Value of y = %d\n", y);

//     return 0;
// }
// ###### function reference and value  #######

// #include <stdio.h>
// int func1(int array[])
// {

//     for (int i = 0; i < 3; i++)
//     {
//         printf("The value at %d is %d\n", i, array[i]);
//     }
//     array[0] = 129087; // Very important point that if you change any value here,it gets reflected in main()

// return 0;
// }
// void func2(int* ptr){
//     for (int i = 0; i < 3; i++)
//     {
//         printf("The value at %d is %d\n",i,*(ptr+i));
//     }

// }
// int main()
// {
//     int arr[] = {23, 45, 56};
//     printf("The value at index 0 is %d\n", arr[0]);
//     func1(arr);
//     func2(arr);
//     printf("The value at index 0 is %d\n", arr[0]);
//     return 0;
// }

// #############  Strings in c     ############
/*
1) string is not a data type in c lang
2) we have char ,int ,float and other data types but no 'string' data type in C
3) srtring is not a supported data type in C but it is a very useful concept used to model real world entities like name, city etc.
we express strings using an array of charachters terminated by a null character ('\0').The null character itself indicates that the string has been end here. e.g char name={'s','h','a','m','\0'};OR char name={"sham"}; automatic detected by compilar


*/
// problem
// #include <stdio.h>
// int main()
// {
// char str[5];
// str="hellow";
// printf("%s",str)
//     return 0;
// }

// #include <stdio.h>

// void printStr(char str[])
// {
//     int i = 0; // initialize i

//     while (str[i] != '\0')
//     {
//         printf("%c", str[i]);
//         i++;
//     }
// }

// int main()
// {
// char str[] = {'h','a','r','r','y','\0'};
// char str[] = "Harry";
//     char str[34];
//     gets(str);
//     printf("using:- %s",str);
//   /  // printStr("using %s",str);
//     return 0;
// }
// ___________ string functions in c (#include<string.h>) ___________
// C libaray:<string.h> multiple libaray in c
// strcat()This function is used to concatenate or combine two given strings.
// strien() This function is used to show length of a string
// strrev() This function is used to show reverse of string
// strcpy() This functions is used to copy one string into another
// strcmp() This function is used to compare two given strings.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s1[]="Happy";
//     char s2[]="Harry";
//     char s3[54];
//     printf("The strcmp for s1,s2 returned %d",strcmp(s1,s2));

//     printf("The length of s1 %d\n",strlen(s1));
//     printf("The length of s2 %d\n",strlen(s2));
//     printf("The reverse string s1 is:");
//     puts(strrev(s1));
//  strcpy(s3,strcat(s1,s2));
//  puts(s3);

//     return 0;
// }
// problem
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int arr[]={1,2,3,4,5};
// for (int i = 4; i >=0; i--)
// {
// printf("%d",arr[i]);
// }

//     return 0;
// }
// ##########   structure in c    ###########
/*
(mean mutiple types of in one array ,object like js)
infomation store
1)structures are user defined data types in C.
2)using structures allows us to combine data of different types together.
3)it is used to create a complex data type which contains diverse infomation.
4) they are very similar to arrays but structure can store data of any type, which is practically more usefull.

*/
// ##### declarating a structure
/*
1)array elements are accessed using the subscript variable.
2)in a similar fashion,structure memebers are accessed using dot[.] operator.
3)(.) is called as "structure member operator".

4) To access the member of the structure ,we use this operator in between "structure name " & "member name"

 */

// #include <stdio.h>

// struct Employee{
//     int id;
//     char name[53];
//     float marks;
// };

// struct Employee e1,e2;   // global variables

// int main()
// {
//     struct Employee e1;  // local variable
//     e1.id = 12;
//     e1.marks = 34.12;

//     return 0;
// }
// #include <stdio.h>

// struct Employee{
//     int id;
//     char name[53];
//     float marks;
// } e1, e2;

// int main()
// {
//     return 0;
// }
// best practice
// #include <stdio.h>

// struct Employee{
//     int id;
//     char name[53];
//     float marks;
// };

// int main()
// {
//     struct Employee e1;

//     e1.id = 12;
//     e1.marks = 34.12;

//     return 0;
// }
// ###################

// #include <stdio.h>
// #include <string.h>

// struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[];
// };

// int main()
// {
//     struct Student harry, ravi, shubham;

//     harry.id = 1;
//     ravi.id = 2;
//     shubham.id = 3;

//     harry.marks = 406;
//     ravi.marks = 246;
//     shubham.marks = 736;

//     harry.fav_char = 'p';
//     ravi.fav_char = 'p';
//     shubham.fav_char = 'p';

//     strcpy(harry.name, "Harry");
//     strcpy(ravi.name, "Ravi");
//     strcpy(shubham.name, "Shubham");

//     printf("%s got %d marks\n", harry.name, harry.marks);
//     printf("%s got %d marks\n", ravi.name, ravi.marks);
//     printf("%s got %d marks\n", shubham.name, shubham.marks);

//     return 0;
// }
// ################### type def ###################
// #include <stdio.h>

// int main()
// {
//     // typedef <existing_type> <alias_name>;

//     typedef unsigned long ul;
//     typedef int integer;

//     ul l1, l2, l3;
//     integer a = 4;

//     printf("value of a is %d", a);

//     return 0;
// }
// #include <stdio.h>

// typedef structure
// typedef struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// } std;

// typedef unsigned long ul;
// typedef int integer;

// int main()
// {
// int *a,b;
// typedef int *intPointer;
// intPointer a, b;
// int c = 89;
// a = &c;
// // b=c;
// b = &c;
// using alias name
// std s1, s2;

// s1.id = 34;
// s2.id = 89;

// ul l1, l2, l3;
// integer a = 4;

// printf("value of a is %d\n", a);
// printf("s1 id = %d\n", s1.id);
// printf("s2 id = %d\n", s2.id);

//     return 0;
// }
// ####### UNION in c###########
/*
1)union is a user defined data type (very similar to structures)
2) the difference b/w structures and unions lies in the fact that in structure ,each member has its own storage location,whereas members of a union uses a single shared memory location.
3) This single shared memory location is equal to the size of its largest data member.
_____ declaring and accessing union members  ____
1)like structure ,we access any member by using the member access operator(.) in unions.
2) we use keyword unit to define a union.
3) syntax is very similar to that of structure.

 */
// #include <stdio.h>

// union test{
//     int a;
//     float b;
//     char c;
// };

// int main()
// {
//     union test un;

//     un.a = 5;
//     printf("a = %d\n", un.a);

//     un.b = 9.1;
//     printf("b = %.2f\n", un.b);

//     return 0;
// }
// ###### parser (html) #######

// #include <stdio.h>
// void parser(char str[])
// {
//     int i = 0;
//     int insideTag = 0;
//     while (str[i] != '\0')
//     {
//         if (str[i] == '<')
//         {
//             insideTag = 1;   // start ignoring
//         }
//         else if (str[i] == '>')
//         {
//             insideTag = 0;   // stop ignoring
//         }
//         else if (insideTag == 0)
//         {
//             printf("%c", str[i]);  // print only text
//         }

//         i++;
//     }
// }

// int main()
// {
//     char string[] = "<h1>this is a heading</h1>";

//     parser(string);

//     return 0;
// }

//_______ variables local & global scope  (formal arguments inside the function parameter)______
// 1)scope is a region of the program where a defined variable can exist and beyond which it cannot be accessed.
// 2)variable which are accessed inside a function or a block are called local variables.
// 3)they can only be accessed by the function they are declared in!
// 4) they are inaccessible to the functions outside the function they are declared in!
// ##### static variable
// 1)static variable are variable which have a property of preserving their values even when they go out of scope.
// 2)They preserve their value from the previous scope and are not initialized again.
// 3) static variable remains in memory throughtout the span of the program.
// 4) static variable are initialized to 0 if not initialized explicitly.
// 5) in C,static variable can only be intialized using constant literals.

// #include <stdio.h>
// int func1(int b)
// {
//     static int myvar=0;// only allow the constant value not any function call etc.
//     printf("The value of my var is %d\n",myvar);   // fixed semicolon
//     myvar++;                                     // moved before return
// printf("line 1129 The address of b inside func1 is %p\n", &b);
//     return b + myvar;
// }

// int main()
// {
//     int b = 34;
// printf("line 1136 The address of b inside main is %p\n", &b); // fixed
//     int val = func1(b);
//      val = func1(b);

// int *ptr = &val;

// printf("line 1141 The value of func1 is %d\n", val);

//     return 0;
// }
//  _______solve problem _____
// you manage a travel agency and you want n drivers to input their following details:
// 1) Name
// 2) Driving License No
// 3) Route
// 4) Kms
// your programe  should be able to taken n as inut and your drivers will start inputting theirs details one by one.
// user structure

// #include <stdio.h>

// struct Driver
// {
//     char name[50];
//     char licenseNo[30];
//     char route[50];
//     int kms;
// };

// int main()
// {
//     int n;

// printf("Enter number of drivers: ");
// scanf("%d", &n);

// struct Driver d[n];   // array of structures

// // Input details
// for(int i = 0; i < n; i++)
// {
//     printf("\nEnter details of Driver %d\n", i+1);

//     printf("Name: ");
//     scanf("%s", d[i].name);

//     printf("License No: ");
//     scanf("%s", d[i].licenseNo);

//     printf("Route: ");
//     scanf("%s", d[i].route);

//         printf("Kms Driven: ");
//         scanf("%d", &d[i].kms);
//     }

//     // Display details
//     printf("\n----- Driver Details -----\n");

//     for(int i = 0; i < n; i++)
//     {
//         printf("\nDriver %d Details:\n", i+1);
//         printf("Name: %s\n", d[i].name);
//         printf("License No: %s\n", d[i].licenseNo);
//         printf("Route: %s\n", d[i].route);
//         printf("Kms Driven: %d\n", d[i].kms);
//     }

//     return 0;
// }
// ############## Dynamic memory allocation ########
// four function (malloc,calloc , realloc,free)
// 1) malloc()stands for memory allocation
// #)it reserves a block of memory with the given    amount of bytes.
// #) the return value is a void pointer to the allocated space
// #) therefore the void pointer needs to be casted to the approprate type as per the requirements
// #) However,if the space is insufficient ,allocation of memory fails and it retruns a NULL pointer.
// #) All the values at allocated memory are initialized to garbage values.
// syntax:
// ptr=(ptr-type*) malloc(size_in_bytes)

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int *ptr;

//     ptr = (int *)malloc(3 * sizeof(int));

//     for (int i = 0; i < 3; i++)
//     {
//         printf("Enter the value no %d of this array:\n", i);
//         scanf("%d", &ptr[i]);
//     }

//     // printing values
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Value at index %d is %d\n", i, ptr[i]);
//     }

//     free(ptr); // free allocated memory

//     return 0;
// }
// other is pending
// $$$$$$$$$$$ storage class in c $$$$$$$$$$$

// A storage  calss define scope ,default initial value & lifetime of a variable.
// in previous lectures,we saw that dynamic memory allocation is a way in which the size of a data structure can be changed during the runtime.
// memory assigned to a program in a typical architectrue can be broken down into four segments:
// 1) Code
// 2) Static/global variable
// 3) Stack
// 4) Heap
// in C language  ,storage classes most oftenly used:
// 1)Automatic variable
// 2)External variable
// 3) Static variable
// 4) Register variable
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int generateRandomNumber(int n)
// {
//     return rand() % n;
// }

// int main()
// {
//     srand(time(NULL));  // seed only once

//     printf("The random number between 0 to 4 is %d\n", generateRandomNumber(15));

//     return 0;
// }
// ##########  void ponter  ############
// A void pointer is a pointer that has no data type associated with it.
// A void pointer can be easily typecasted to any pointer type
// In  simple language it is a general purpose pointer variable.

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int a = 345;
//     float b = 5.4;
//     void *ptr;

//     ptr = &a;
//     printf("The value of a is %d\n", *((int *)ptr));

//     ptr = &b;
//     printf("The value of b is %f\n", *((float *)ptr));

//     return 0;
// }
// $$$$$$$$$$$$$  NULL pointer     $$$$$$$$$$$
// NULL pointer is a pointer has a value reserved for indicating that the pointer or reference does not refer to a valid object.
// a null pointer is guaranted to compare unequal to any pointer that pointer to a valid object.
//
// Dereferencing a null pointer is undefined behavior in C ,and a conforming implementations is allowed to assume that any pointer that is dereferenced is not null.
//
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int* ptr=NULL;
//    printf("the %d ",ptr);

//     return 0;
// }

// ######## Dangling pointer  ########
// A pointer to a freed memory location or the location whose content has been deleted is called a dangling pointer.
// Dangling pointers arise during object destruction when an object that has an incoming reference is deleted or deallocated ,without modifying the value of the pointer, so that the pointer to the memory location of the deallocated meomory.
//
// //
// #include <stdio.h>
// #include <stdlib.h>

// int* functionDangling() {
//     int a, b;
//     int *sum = (int*)malloc(sizeof(int));   // dynamic memory

//     a = 34;
//     b = 364;

//     *sum = a + b;   // store value in allocated memory
//     return sum;     // return pointer
// }

// int main()
// {
//     int *ptr = (int*) malloc(7 * sizeof(int));   // allocate memory for 7 integers

//     ptr[0] = 34;
//     ptr[1] = 36;
//     ptr[2] = 64;
//     ptr[3] = 5;

//     printf("First value: %d\n", ptr[0]);

//     free(ptr);   // free allocated memory
//     ptr = NULL;  // avoid dangling pointer

//     int *result = functionDangling();
//     printf("Sum is %d\n", *result);
//     free(result);

//     return 0;
// }
// ######what is a wild pointer ?###########
// 1)uninitialized pointers are Know a  wild pointers
// 2)These pointers point to some arbitraray location in memory and may casue a program to crash or behave badly.
// 3)Dereferencing  wild pointer can cause nasty bugs
// it is suggested to always initialize unsaved pointers to NULL.
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a=334;
//     int *ptr;// This is a wild pointer
//     *ptr-34; // This is a not a good thing to do
//     printf("The value of a is %d\n",*ptr);
//     return 0;
// }
// ______preprocessor in c_______
//  quick recap
// compiler conver textual form of a C program into an executalble.                               There are four phaseed for a C program to become an executable.
// preprocessing (removal of comments,expansion of macros,expansion of include,expansion of files) compilation (assembly,level,instructions,are generated),assembly(.o,.exe,print are not concerted,ALI are concerted to machine code) linking (the function implementation)
//  ---NOW PREPROCESSOR OF C ----
/* 
C preprocessor comes under action before the actual compilation process
C preprocessor is not a part of the of the c compiler.
it is a text substitution tool
All preprocessor commands begin wih a hash symbol(#).#include <stdio.h> etc
 preproocessor cmd e.g #define,#include etc
The #include directive
the #

*/
// ####### default macors   #####
#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("File name is %s",__FILE__);
    printf("%n",__DATE__);
    printf("%d",__LINE__);
    printf("%d",__STDC__);
    return 0;
}