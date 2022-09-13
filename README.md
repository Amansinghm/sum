#include<stdio.h>
int main ()
{
    int m;
    printf("ENTER NUMBER YOU WANT TO REVERSE IT \n");
    scanf("%d",&m);
    for (int i = 0; i <= m; i++)
    {
        printf(" %d ",i);
    }
    printf("\n");
    for (int j = m; j >= 0; j--)
    {
        printf(" %d ",j);
    }
    printf(" \n Reverse number successfully ");
    return 0;
}
