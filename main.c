#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Password();
void Name_search();

struct employee_data
{
    char name[20];
    int salary;
    int id;
};

struct employee_data employ[5] = {{"Ahmed" , 1600, 1 } , {"Mostafa" , 1650, 2} , {"Talaat" , 1800, 3} ,
    {"Mariam" , 2000, 4} , {"Abdelaziz" , 1850, 5}};

int main(void)
{

    Password();
    return 0;
}

void Password()
{
    unsigned char i;
    int password;

    for(i = 0; i < 3; i++)
    {
        printf("please enter your password\n");
        scanf("%d" , &password);
        if(password == 1234)
        {
            Name_search();
        }
        else
            printf("wrong password! try again\n\n");

    }
}

void Name_search()
{
    while(1)
            {
                char name_s[15];
                int i , test , index = -1;
                printf("please the name of the employee\n ");
                scanf("%s" , name_s);
                for(i = 0; i < strlen(employ); i++)
                {
                    test = strcmp(name_s , employ[i].name);
                    if(test == 0)
                    {
                        index = i;
                        break;
                    }
                }
                if(index == -1)
                    printf( "Error ! incorrect name \n\n");
                else
                    printf("The Salary of %s and his ID %d is %d  \n" , employ[index].name ,employ[index].id ,employ[index].salary);
            }
}
