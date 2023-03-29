#include<stdio.h>
int main()
{
    int i,sum=0,arr[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for(i=0;i<=2;i++)
    {
        printf("{%d %d %d}\n",arr[i][0],arr[i][1],arr[i][2]);
    }
    for(i=0;i<=2;i++)
    {
      sum=arr[i][i]+sum;

    }
   printf("sum of dia elements=%d\n",sum);
   sum=0;
   for(i=0;i<=2;i++)
   {
    sum=sum+arr[i][0]+arr[i][1]+arr[i][2];
   }
   printf("sum of all elements of matrix 3x3=%d",sum);
  return 0;
}