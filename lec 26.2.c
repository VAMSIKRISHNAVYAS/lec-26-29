#include<stdio.h>
main()
{
	int i;
	int arr[6];
	printf("enter the elements \n");
	for (i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
    for(i=0;i<5;i++)
    {
    	printf("the elements are %d\n",arr[i]);
	}
}
