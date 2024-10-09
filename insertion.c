#include<stdio.h>
void main()
{
int i=0,j,n,a[50],temp;
printf("enter the limit");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0&&temp<a[j])
{
	a[j+1]=a[j];
	j--;
}
a[j+1]=temp;
}
printf("the sorted elements is \t");
for(i=0;i<n;i++)
{
printf("\t%d",a[i]);
}
}	
