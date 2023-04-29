#include<stdio.h>
int main()
{
    /**INPUT**/
    // declaring angles to be inputted later using for loop
    int angle1;
    int angle2;
    int angle3;
    // declaring variables for counting
    int acute  = 0;
    int obtuse = 0;
    int right  = 0;
    int wrong  = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&angle1);
        scanf("%d",&angle2);
        scanf("%d",&angle3);
        if(angle1 + angle2 + angle3 == 180)
        {
            if(angle1 < 90 && angle2 < 90 && angle3 < 90)
            {
                acute++;
            }
            else if(angle1 == 90 || angle2 == 90 || angle3 == 90)
            {
                right++;
            }
            else
            {
                obtuse++;
            }
        }
        else
        {
            wrong++;
        }
    }
    printf("Acute Angled Triangle: %d",acute);
    printf("\nRight Angled Triangle: %d",right);
    printf("\nObtuse Angled Triangle: %d",obtuse);
    printf("\nWrong Enteries: %d",wrong);
}