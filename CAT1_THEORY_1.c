/***
Write a C program to divide the integer array into two halves using function
recursion. Call the user-defined “divide” function recursively, with the left half
of the split array being passed as an argument for that function. Let the
recursive function to get executed until the array size becomes one. Count the
number of iterations to reach the base condition. Explain the working
procedure of recursive function with stack structure
***/
// #include<stdio.h>
// int recur(int *arr,int size,int count)
// {
//     if(size == 0)
//     {
//         return count;
//     }
//     else
//     {
//         int new_arr[size/2];
//         for(int i = 0; i < size/2; i++)
//         {
//             new_arr[i] = arr[i];
//         }
//         recur(new_arr,size/2,count+1);
//     }
// }
// int main()
// {
//     int num;
//     printf("Enter the size of the array : ");
//     scanf("%d",&num);
//     int ele[100];
//     for(int i = 0; i < num; i++)
//     {
//         printf("Enter the number : ");
//         scanf("%d",&ele[i]);
//     }
//     int count = recur(ele,num,0);
//     printf("The array can be divided into 2 equal times %d times.",count);
// }
// Consider that you are going to analyze the characters in the given string. Write
// a C program to extract the characters in the given string and print whether the
// character is an uppercase alphabet, lowercase alphabet, digits, whitespace,
// special symbols. Print the count of each category by storing their counts in an
// array. Use appropriate looping constructs to implement this
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     // INPUT
//     printf("Enter the string : ");
//     char text[100];
//     fgets(text,100,stdin);
//     // declarations
//     int upper = 0;
//     int lower = 0;
//     int digit = 0;
//     int space = 0;
//     int special = 0;
//     for(int i = 0; i < strlen(text);i++)
//     {
//         if(97 <= text[i] && text[i] <= 122)
//         {
//             printf("%c IS A LOWERCASE CHARACTER\n",text[i]);
//             lower++;
//         }
//         else if(65 <= text[i] && text[i] <= 90)
//         {
//             printf("%c IS A UPPERCASE CHARACTER\n",text[i]);
//             upper++;
//         }
//         else if(text[i] == 32)
//         {
//             printf("SPACE CHARACTER\n");
//             space++;
//         }
//         else if(30 <= text[i] && text[i] <= 39)
//         {
//             printf("%c IS A DIGIT\n",text[i]);
//             digit++;
//         }
//         else
//         {
//             printf("%c IS A SPECIAL CHARACTER\n",text[i]);
//             special++;
//         }
//     }
//     int new_arr[5] = {lower,upper,space,digit,special};
//     printf("LOWERCASE CHARACTERS : %d",new_arr[0]);
//     printf("\nUPPERCASE CHARACTERS : %d",new_arr[1]);
//     printf("\nSPACE CHARACTERS : %d",new_arr[2]);
//     printf("\nDIGIT CHARACTERS : %d",new_arr[3]);
//     printf("\nSPECIAL CHARACTERS : %d",new_arr[4]);
// }
/***
Write a c program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 ...
n!/n by utilizing user defined recursive function? Get the value of n from the
user. Do not use any storage classes. Without returning the calculated result
from the function, display the result in main (10 marks)
***/
// #include<stdio.h>
// int fact(int n)
// {
//     if(n == 1)
//     {
//         return 1;
//     }
//     return n*fact(n-1); 
// }
// void recur(int n,int *res)
// {
//     if(n == 0)
//     {
//         return;
//     }
//     *res = *res + fact(n)/n;
//     recur(n-1,res);
// }
// int main()
// {
//     int n;
//     printf("Enter the number : ");
//     scanf("%d",&n);
//     int result = 0;
//     recur(n,&result);
//     printf("%d",result);
// }
/***
ABC car showroom sells various types of cars such as Hatchback, Sedan,
SUVs, and MUV. Due to the year-end sale, the showroom provides a 3%, 5%,
10%, and 15% discount for various car models Hatchback, Sedan, SUV, and
MUV respectively. Also applies 12% of GST for the total amount of purchase
Write a C program to implement the above scenario which will read the
type_of_the_car, price_of_the_car and extra-fitting_price_of_the_car as input
from the user and estimate the Net amount to be paid to the showroom. If the
type of car is other than Hatchback, Sedan, SUV, and MUV then display
“Invalid Type”. (Difficulty Level: Easy)
The net amount to be paid to the showroom is estimated as follows:
(For example-if the purchased car is Hatchback)
Total = price_of_the_car + extra-fitting_price_of_the_car
Discount = Total * 0.03 // 0.03 denotes 3%
wastage
gst = (Total - Discount) * 0.12 // 0.12 denotes
12% GST
net = Total – Discount + gst
***/

/***HEADER FILES***/
// #include<stdio.h>
// #include<string.h>
// /***MAIN DRIVER***/
// int main()
// {
//     /***INPUT***/
//     char type_of_the_car[100];
//     printf("Enter the type of the car : ");
//     fgets(type_of_the_car,100,stdin);
//     int price_of_car = 0;
//     printf("Enter the price : ");
//     scanf("%d",&price_of_car);
//     int extra_fitting_price_of_the_car = 0;
//     printf("Enter the extra fitting price : ");
//     scanf("%d",&extra_fitting_price_of_the_car);
//     /***CONDITIONALS***/
//     int dis = 0;
//     if(strcmp(type_of_the_car,"Hatchback"))
//     {
//         dis = 3; 
//     }
//     else if(strcmp(type_of_the_car,"Sedan"))
//     {
//         dis = 5;
//     }
//     else if(strcmp(type_of_the_car,"SUVs"))
//     {
//         dis = 10;
//     }
//     else if(strcmp(type_of_the_car,"MUV"))
//     {
//         dis = 15;
//     }
//     int total = price_of_car + extra_fitting_price_of_the_car;
//     int discount = (int)(total*dis/100);
//     int gst = (int)((total-discount)*0.12);
//     int net = total - discount + gst;
//     printf("The total price is : %d",total);
//     printf("\nThe discount is : %d",discount);
//     printf("\nThe gst is : %d",gst);
//     printf("\nThe net price is : %d",net);
// }

/***
Write a C Program that reads the input as a string from the user in main (). (1
mark)
The input should be a sentence with two words. Pass this string to a function.(1
mark)
Inside the function do the following operations:
For the first word, keep only the first character of the word to be in upper
case and the rest of the characters in lower case. (1 mark)
For the second word, convert all the characters into upper case letter. (1
mark)
Print the revised string consisting of the two words in the function itself
(1 mark)
Find the length of the entire string. Print its length in the function itself in
the next line of the revised string. Use appropriate string function to print
this result in the next line. (1 mark)
Return the length of the string, if the length is less than 20. Else return the
size of the string. (2 marks)
Consider the input string given by the user is:
“computer programming”
Revised string to be printed in the function is “Computer
PROGRAMMING”
What is the significant different between length and size of the string? What is
the value that will get returned for the input string that is considered? (2 marks)
***/

// /***HEADER FILES***/
// #include<stdio.h>
// #include<string.h>
// /***FUNCTIONS***/
// unsigned int modify_string(char text[])  // using unsigned int as size of has the type unsigned int
// {
//     char answer[100];
//     int i = 0;
//     while(i < strlen(text)-1)
//     {
//         if(i == 0)
//         {
//         answer[0] = text[0]-32;
//         }
//         if(text[i] == 32)
//         {
//             answer[i] = text[i];
//             i++;
//             break;
//         }
//         if(i !=0)
//         {
//         answer[i] = text[i];
//         }
//         i++;
//     }
//     while(i < strlen(text)-1)
//     {
//         answer[i] = text[i] - 32;
//         i++;
//     }
//     for(int i = 0; i < strlen(text)-1;i++)
//     {
//         printf("%c",answer[i]);
//     }
//     printf("\n");
//     unsigned int len = strlen(text)-1;
//     unsigned int size = sizeof(text);
//     if(len < 20)
//     {
//         return len;
//     } 
//     else
//     {
//         return size;
//     }
// }
// /***MAIN DRIVER CODE***/
// int main()
// {
//     /***INPUT***/
//     char text[100];
//     printf("Enter the string : ");
//     fgets(text,100,stdin);
//     printf("%u",modify_string(text));
// }