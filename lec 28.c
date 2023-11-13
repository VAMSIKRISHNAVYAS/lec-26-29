#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int i,loc=-1,key,n=5; //here n is the number of element	
	key=4; // this is the value which you want to search
	for(i=0;i<n;i++)
	{
		if (a[i]==key)
		{
			loc=i;
			//break;
		}
		if(loc!=-1)
		{
			printf("\n element found %d",loc+1);
		}
		else
		{
			printf("\n element not found");
		}
	}
}
