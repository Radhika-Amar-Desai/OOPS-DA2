/***HEADER FILES***/
#include<stdio.h>
#include<string.h>
/***MAIN DRIVE***/
int main()
{
    char text[100];
    fgets(text,100,stdin);
    int spaces = 0;
    int words = 0;
    int vowels = 0;
    int consonants = 0;
    int special_char = 0;
    for(int i = 0; i < strlen(text);i++)   // transversing thro the string
    {
        if(text[i] == 32)    // space check using ASCII code 
        {
            spaces += 1;
        }
        else if((97 <= text[i] && text[i] <= 122 )|| (65 <= text[i] && text[i] <= 90))
        {
            printf("%d ",text[i]);
            if(text[i] == 97 || text[i] == 65 || text[i] == 101 || text[i] == 69 || text[i] == 105 || text[i] == 73 || text[i] == 111 || text[i] == 79 || text[i] == 117 || text[i] == 85)
            {
                vowels += 1;
            }
            else
            {
                consonants += 1;
            }
        }
        else
        {
            special_char += 1;
        }
    }
    words = spaces + 1;
    printf("Words = %d",words);
    printf("\nVowels = %d",vowels);
    printf("\nConsonants = %d",consonants);
    printf("\nSpace = %d",spaces);
    printf("\nSpecial Characters = %d",special_char-1); // we put -1 becoz newline is also counted by program as special character while in reailty user presses enter to end the input data
}