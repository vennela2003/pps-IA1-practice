#include<stdio.h>
int input()
{
  int a;
  printf("enter array size\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter the elements no %d of the array\n",i);
    scanf("%d",&a[i]);

  }
 
}
int array_sum(int n,int a[n])
{
  int sum=0;
  for (int i=0;i<n;i++)
  sum +=a[i];
  return sum;
}
void output(int n,int a[n],int sum)
{
  int i;
  printf("the sum of ");
 for(i=0;i<n-1;i++)
 {
   printf("%d+",a[i]);
 }
  printf("%d=%d\n",a[i],sum);
}
int main()
{
int n,sum;
n=input();
int a[n];
input_array(n,a);
sum=array_sum(n,a);
output(n,a,sum);
}