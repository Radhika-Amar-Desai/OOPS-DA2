/****HEADER FILES****/
#include<stdio.h>
#include<string.h>

/*****STRUCTURES****/
struct date
{
    int date_day;
    int date_month;
    int date_year;
};

struct emp
{
    char emp_name[100];
    int emp_age;
    char emp_pos[100];
    struct date join_date;
};

/******FUNCTIONS*******/
void swap(struct emp* ele1,struct emp* ele2)
{
    struct emp temp;
    temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

int compare_date(struct date date1,struct date date2)
{
    // date1
    int day1   = date1.date_day;
    int month1 = date1.date_month;
    int year1  = date1.date_year;
    // date2
    int day2   =   date2.date_day;
    int month2 =   date2.date_month;
    int year2  =   date2.date_year;

    if(year1 > year2)
    {
        return 1;
    }
    else if (month1 > month2)
    {
        return 1;
    }
    else if (day1 > day2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void sort_name(struct emp array[100],int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n-1; j++)
        {
            if ((strcmp(array[i].emp_name,array[i+1].emp_name)) > 0)
            {
                swap(&array[i],&array[i+1]);
            } 
        }
    }
    for(int i = 0; i < n;i++)
    {
        printf("%s",array[i].emp_name);
        printf("%d",array[i].emp_age);
        printf("\n%s",array[i].emp_pos);
        printf("%d/%d/%d\n",array[i].join_date.date_day,array[i].join_date.date_month,array[i].join_date.date_year);
        printf("\n");
    }
}

void sort_date(struct emp array[100],int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n-1; j++)
        {
            if (compare_date(array[i].join_date,array[i+1].join_date) == 1)
            {
                swap(&array[i],&array[i+1]);
            } 
        }
    }
    for(int i = 0; i < n;i++)
    {
        printf("%s",array[i].emp_name);
    }
}

/*****MAIN CODE******/
int main()
{
    /****INPUT***/
    // declarations
    int num_emp = 0;
    char name[100];
    int age = 0;
    char pos[100];
    int day = 0;
    int month = 0;
    int year = 0;
    struct date date_of_joining;
    char rand;      // for handling unwanted input characters which are not part of any variable 
    // declaring array of structures
    struct emp emp_array[100];
    // actual input starts here
    scanf("%d\n",&num_emp);
    for(int i = 0; i < num_emp; i++)
    {
        fgets(name,100,stdin);
        scanf("\n%d\n",&age);
        fgets(pos,100,stdin);
        scanf("\n%d/%d/%d%c",&day,&month,&year,&rand);
        // extracting date 
        date_of_joining.date_day = day;
        date_of_joining.date_month = month;
        date_of_joining.date_year = year;
        // copying things in structure
        strcpy(emp_array[i].emp_name,name); 
        emp_array[i].emp_age = age;
        strcpy(emp_array[i].emp_pos,pos);
        emp_array[i].join_date = date_of_joining;
    }
    /****PROCESSING AND OUTPUT*****/
    printf("\nOUTPUT\n");
    sort_name(emp_array,num_emp);
    sort_date(emp_array,num_emp);
}