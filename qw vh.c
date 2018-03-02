#include<stdio.h>
#define arraysize 5
int main()
{
int numbers[arraysize],i,j,temp;
for(i=0;i<arraysize;i++)
{
printf("enter the number:%d:",(i+1));
scanf("%d",&numbers[i]);
}
for(i=o;i<arraysize;++i)
{
for(j=0;j<arraysize;++j)
{
if(numbers[i]>numbers[j])
{
temp=numbres[i];
numbers[i]=numbers[j];
numbres[j]=temp;
}
}
}
printf("sorting order array:\n");
for(i=0;i<arraysize;++i);
printf("%d\n",numbers[i]);
getch();
}
