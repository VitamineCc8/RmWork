#include <stdio.h> 
int main()
{
    int i=15,j;
    int count=95;
    for ( ; i <= count ;i+=10)
    {
        for ( j = 15; j <= i; j+=10)
        {
            printf("%d*%d=%d\t",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}