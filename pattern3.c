#include<stdio.h>
int main(){
int i,j,n;
printf("enter the number of rows:\n");
scanf("%d",&n);
char p=65;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
printf("%c",p);
p++;
printf("\n");
}
return 0;
}