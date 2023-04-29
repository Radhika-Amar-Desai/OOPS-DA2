/***
The temperature in Chennai exists somewhere between 280C to 330C in a particular
week. The temperature in Delhi is 80C lesser than in Chennai. Likewise, the
temperature in Haveri is 50C more than that of Chennai. Write a C program to find the
temperature of Gangtok for a particular week, which is the temperature difference
between Delhi and Haveri. Get the temperature of Chennai (0C) as input for the week
of 7 days and the temperature of Gangtok (0C) as output for the week of 7 days.
Implement the program using arrays and validate the rules.
***/
// #include<stdio.h>
// int main()
// {
//     int temp_array[7]; // declaring a temp array
//     int temp_delhi;
//     int temp_haveri;
//     int temp_gangtok;
//     for(int i = 0; i < 7; i++)
//     {
//     /***INPUT***/
//     int temp_chennai = 0;
//     printf("Please enter the temperature : ");
//     scanf("%d",&temp_chennai);
//     /***COMPUTATIONS***/
//     temp_delhi = temp_chennai - 8;
//     temp_haveri = temp_chennai + 50;
//     temp_gangtok = temp_haveri - temp_delhi;
//     // storing output in array
//     temp_array[i] = temp_gangtok;
//     }
//     for(int i = 0; i < 7;i++)
//     {
//         printf("The temperature of gangtok is : %d\n",temp_array[i]);
//     }
// }
/***
Samantha is an avid collector of lucky numbers. She believes that each number has
its own unique energy and can bring good luck if used correctly. One day, she came
across a new number that had a mysterious aura and she could not resist finding out
more about it. She heard that the number may fall within the digit combinations, so
she decided to sum up all the four-digit even numbers and then keep adding the
digits of the summation until a single digit is found to unlock its secrets. Later, she
must check again whether the single digit is odd or even. If odd, then you must say
“Odd Found” otherwise you must return “Even found”. Write a C program to help
her in finding the mysterious number.
***/
// #include<stdio.h>
// /***FUNCTIONS***/
// int generate_num()
// {
//     int ans = 1000;
//     int sum = 0;
//     while(ans < 10000)
//     {
//         if(ans%2 == 0)
//         {
//             sum += ans;
//         }
//         ans += 2;
//     }
//     return sum;
// }
// int sum_of_digits(int num)
// {
//     int sum = 0;
//     while(num > 0)
//     {
//         sum += num%10;
//         num /= 10;
//     }
//     return sum;
// }
// int final(int num)
// {
//     while((int)num/10 > 0)
//     {
//         final(sum_of_digits(num));
//         num /= 10;
//     }
//     return num;
// }
// /***MAIN DRIVER CODE***/
// int main()
// {
//     int num = generate_num();
//     int answer = final(num);
//     printf("%d",answer);
//     if(answer%2 == 0)
//     {
//         printf("\nEven found");
//     }
//     else
//     {
//         printf("\nOdd found");
//     }
// }
/***
A digital locker in the bank is protected with a security mechanism. To open the
locker a password of 9 characters is required. The input characters should be
accepted as 3x3 matrix and two diagonal characters of the matrix are concatenated
(refer to the example given below) and compared with the password already stored
in a character array for authentication. Write a C program to implement this logic
for password verification.
***/
// #include<stdio.h>
// int main()
// {
//     int n = 9;
//     char array[3][3];
//     /***INPUT***/
//     char buffer;    // to store unwanted chars like space and newspace used to seperate charcters by user in the input
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3;j++)
//         {
//             scanf("%c%c",&array[i][j],&buffer);
//         }
//     }
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3;j++)
//         {
//             if(i == j)  // condition for first diagnol
//             {
//             printf("%c ",array[i][j]);
//             }
//         }
//     }
//     for(int i = 0; i < 3; i++)
//     {
//         for(int j = 0; j < 3; j++)
//         {
//             if(i+j == 2 && i != j) // condition for 2nd diagnol and don't repeat the center diagnol element
//             {
//                 printf("%c ",array[i][j]);
//             }
//         }
//     }
// }
/***
An international school of class 7 with a class strength of 25, decided to assign
additional marks for their students in Maths subject, to increase their class average.
The additional marks were given to each student based on their month of birth. That is
she was to give that number (month of birth) as the booster marks. The teacher wants
to find the class average for the original marks as well as for the revised marks. She
10 marks
wants to decide whether to implement this revision in marks or not based on the
significant improvement in the class average.
Write a C program to help the teacher get the class average for the original marks as
well as the revised marks.
She wants to know whether to implement this revision or not. This is decided based
on the condition that the revision should bring a significant increase in the class
average of 5 marks. Else, she is not planning to implement this revision in the marks
strategy. Write the program to display this decision of “Can implement – Significant
increase in class average” or “Need not implement – No significant increase in class
average”. Keep every operation in this program separate. Get the students’ original
marks and the month of their birth as input.
***/
// #include<stdio.h>
// int main()
// {
//     // declarations of variables
//     int marks = 0;
//     int birth_month = 0;
//     int revised_marks = 0;
//     int org_class_sum = 0;
//     int revise_class_sum = 0;
//     /***INPUT + COMPUTATION***/
//     int n = 25; // total number of students
//     for(int i = 0; i < n; i++)
//     {
//         printf("Enter the original scores : ");
//         scanf("%d",&marks);
//         org_class_sum += marks;
//         printf("Enter the month of birth : ");
//         scanf("%d",&birth_month);
//         revised_marks = marks + birth_month;
//         revise_class_sum += revised_marks;
//     }
//     float org_class_avg = (float)org_class_sum/n;
//     float revise_class_avg = (float)revise_class_sum/n;
//     /***DECISION + OUTPUT***/
//     if(revise_class_avg - org_class_avg >= 5)
//     {
//         printf("\nCan implement – Significant increase in class average");
//     }
//     else
//     {
//         printf("\nNeed not implement – No significant increase in class average");
//     }
// }
/***
Paul is provided with a number “x” whose scope will remain throughout the program.
Using the concept of recursion, help Paul to write a “C program” for finding the value
of (x)n where n should be less than or equal to 5.
***/
// #include<stdio.h>
// extern int x;
// int recur(int x,int n)
// {
//     if(n < 5)
//     {
//     if(n == 1)
//     {
//         return x;
//     }
//     return x*recur(x,n-1);
//     }
//     else
//     {
//         printf("\nPlease enter n less than 5");
//         return 0;
//     }
// }
// int main()
// {   
//     int x;
//     printf("Enter x : ");
//     scanf("%d",&x);
//     int n;
//     printf("\nEnter y : ");
//     scanf("%d",&n);
//     int ans = recur(x,n);
//     if(ans != 0)
//     {
//     printf("\nThe answer is : %d",ans);
//     }
// }