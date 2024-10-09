#include<stdio.h>
void main()
{
int n,i,x,count=0,time=0;
time++;
time ++;
	printf("enter the no of elements");
	time ++;
	scanf("%d",&n);
	time ++;
	int a[n];
	printf("enter the numbers");
	time++;
	time++;
	for(i=0;i<n;i++)
	{
	time++;
	scanf("%d",&a[i]);
	time++;
	}
	printf("the element to be searched is\n");
	time++;
	scanf("%d",&x);
	time++;
	for(i=0;i<n;i++)
	{
	time++;
	if(a[i]==x)
	{
	  time++;
	  count++;
	  printf("element is found at =%d\n",i+1);
	  time++;
	 }
	} 
  	if(count>0)
  	{
  	time++;
 	 printf("the element is found %d times\n",count);
 	 time++;
 	 }
 	 else
 	 {
 	 time++;
 	 printf("elemnt not found");
 	 time++;
 	 }
 	 printf("space complexity =%d\n",20+(4*n));
 	 time++;
 	 printf("time complexit = %d\n",time);
 	 time++;
  }
  
