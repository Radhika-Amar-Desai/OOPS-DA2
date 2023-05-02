/****HEADER FILES****/
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
/****FUNCTIONS****/
bool prime(int num)
{
    bool flag = 1;
    for(int i = 2; i < num; i++)
    {
        if(num%i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int size(int n)
{
    int count = 0;
    while(n>0)
    {
        count++;
        n = n/10;
    }
    return count;
}
bool armstrong(int num)
{
    int cpy = num; // storing a copy later used for comparision
    int sum = 0;
    int len = size(num);
    while(num > 0)
    {
        sum += pow(num%10,len);
        num /= 10;
    }
    if(sum == cpy)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool perfect(int num)
{
    int sum = 0;
    for(int i = 1; i < num; i++)
    {
        if(num%i == 0)
        {
            sum += i;
        }
    }
    if(sum == 2*num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
/***MAIN DRIVER CODE***/
int main()
{
    int num = 0;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(prime(num))
    {
        printf("%d is a prime number\n",num);
    }
    else
    {
        printf("%d is not a prime number\n",num);
    }
    if(armstrong(num))
    {
        printf("%d is an armstrong number\n",num);
    }
    else
    {
        printf("%d is not an armstrong number\n",num);
    }
    if(perfect(num))
    {
        printf("%d is a perfect number\n",num);
    }
    else
    {
        printf("%d is not a perfect number\n",num);
    }
}
