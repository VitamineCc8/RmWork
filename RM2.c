#include<stdio.h>                   
int main()
{   
    unsigned char stu;
    while (scanf("%hhu",&stu) != 0)
    {
        if(stu>=128)puts("girl");
        else puts("boy");
        printf("stu_ number is %d\n" ,stu&((1<<7)-1));
    }
    return 0;
}