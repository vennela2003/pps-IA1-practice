#include<stdio.h>
void input(int *pa,int *pb)
{
  printf("enter two numbers\n");
  scanf("%d%d",pa,pb);
}
void add (int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("%d+%d=%d\n",a,b,sum);
}
int main()
{
  int a,b,c;
  input(&a,&b);
  add(a,b,&c);
  output(a,b,c);
  return 0;
  }
