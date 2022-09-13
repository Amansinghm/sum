#include<stdio.h>
int main ()
{
    int a;
    printf("ENTER NUMBER YOU WANT TO FIND ITS TABLE FORM \n");
    scanf("%d",&a);

    for (int  i = 0; i <=10; i++)
    {
        printf("%d multiply %d = %d \n",a,i,a*i);
    }
    return 0;
}
