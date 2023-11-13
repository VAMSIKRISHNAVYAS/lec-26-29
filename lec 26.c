#include<stdio.h>
Nmain()
{
	int arr[6]={3,4,5,6,7,8};
	int i;
	int sum_1=0;
	int sum_2=0;
	for (i=0;i<6;i++)
	{
			printf("%d",arr[i]);
	}
	for (i=0;i<6;i++)
	
	 if (arr[i]%2==0)
	    {
		 printf("\neven");
		}
	else
	    {
		 printf("\nodd");
	    }
	}
	for (i=0;i<6;i++)
	{
		
		if (arr[i]%2==0)
		{
			for (i=0;i<6;i++)
			{
				sum_1+=arr[i];
			}
			print("sum of all the even no is%d",sum_1);
		}
		else
		{
			
				sum_2+=arr[i];
		
			print("sum of all the odd no is%d",sum_2);
		}
	}
}
