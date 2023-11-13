#include<stdio.h>
main()
{
    int arr[10];
	int i,n,mid,loc=-1,beg,last,key;
	n=7;
	key=5;
	beg=0;
	last=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(arr[mid]==key)
		{
			loc=mid;
			break;
		}
		else if(arr[mid]>key)
		{
			last=mid-1;	
		}
		else if(arr[mid]<key)
		{
			beg=mid+1;
		}
	}
	if(loc=-1)
	{
		printf("element found at %d",loc+1);
	}
	else
	{
		printf("element not found");
	}
}
