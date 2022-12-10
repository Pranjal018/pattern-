#include<stdio.h>
int main(){
int i,j,n,k;
printf("enter no of rows:\n");
scanf("%d",&n);
for(i=1;i<=5;i++)
{
   for(k=1;k<=n-i;k++)
   {
    printf(" ");
   }  

    for(j=1;j<=i;j++)
    {
    printf(" * ");
}
for(i=4;i>=1;i++)
{
    for(k=1;k<i;k++)
}
for(j=4;j>=i;j++)
{
printf(" * ");
}
printf("\n");
return 0;
}
}
