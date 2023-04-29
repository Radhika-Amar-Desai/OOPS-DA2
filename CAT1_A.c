/****HEADER FILES****/
#include<stdio.h>
#include<string.h>
/******FUNCTIONS*****/
int word_freq_cal(char text[100])
{
    int freq = 0;
    for(int i = 0; i < strlen(text)-1; i++)
    {
        for(int j = i+1; j < strlen(text)-1;j++)
        {
            if(text[i] == text[i+1])
            {
                freq++;
                break;
            }
        }
    }
    return strlen(text)-1-freq;
}

void repeat_char_cal(char text[100])
{
    for(int i = 0; i < strlen(text)-1;i++)
    {
        for(int j = i+1; j < strlen(text)-1;j++)
        {
            if(text[i] == text[j])
            {
                printf("\nFirst repeated character is: %c",text[i]);
                return;
            }
        }
    }
    printf("\nNo repeated characters found in the string.");
    return;
}

void non_repeat_char_cal(char text[100])
{
    int flag = 0;
    for(int i = 0; i < strlen(text)-1;i++)
    {
        for(int j = i+1; j < strlen(text)-1;j++)
        {
            if(text[i] == text[j])
            {
            flag = 1;
            break;
            }
        }
        if(flag == 0)
        {
            printf("\nFirst non-repeated character is: %c",text[i]);
            return;
        }
    }
    printf("\nNo non-repeated character.");
    return;
}

int main()
{
    /*****INPUT****/
    char name[100];
    fgets(name,100,stdin);
    /*****PROCESSING*****/
    int len = strlen(name)-1;
    int word_freq = word_freq_cal(name);
    /*****OUTPUT*****/
    printf("Length of the string is: %d",len);
    printf("\nWord frequency is: %d",word_freq);
    repeat_char_cal(name);
    non_repeat_char_cal(name);
}