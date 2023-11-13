#include<stdio.h>
main()
{
	int sum=0;
	int arr[6];
	int i;
	printf(" enter the elemets \n");
for(i=0;i<5;i++)
   { 
       scanf("%d",&arr[i]) ;    
	 } 	
		printf(" \n show the elemets \n");
	for (i=0; i<5;i++)
	{
	    printf("\n%d",arr[i]);
         sum=sum+arr[i];
	}
printf("\n the sum is %d",sum );
int s=0;
int e=0;
for (i=0;i<5;i++)
{
	    if(arr[i]%2==0)
	        {
	    
	    	  printf(" \n the even number is %d",arr[i]);
	         e=e+arr[i];
			}
			
	else
	{
		printf("\n The odd number is  %d", arr[i]);
	   s=s+arr[i];
	}
	printf("\n The sum of odd numbers is  %d", s);
		printf("\n The sum of even numbers is  %d", e);

}

int smallest;
smallest =arr[0];





}
