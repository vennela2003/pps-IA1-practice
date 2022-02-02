#include<stdio.h>
void input(int*a,int*b,int*c)
{
    printf("enter the first number:\n");
    scanf("%d",a);
    printf("enter the second number:\n");
    scanf("%d",b);
    printf("enter the third number:\n");
    scanf("%d",c);
}
void cmp(int a, int b, int c,int * large)
{
    if(a>b && a>c)
    {
        *large=a;
    }
    else if (b>c)
    {
        *large=b;
    }
    else
    {
        *large=c;
    }
}
void output(int a,int b,int c,int large)
{
    printf("the biggest of %d ,%d and %d is %d \n",a,b,c,large);
           }
int main()
{
    int a1,a2,a3,large;
    input(&a1,&a2,&a3);
    cmp(a1,a2,a3,& large);
    output(a1,a2,a3,large);
    return 0;
}