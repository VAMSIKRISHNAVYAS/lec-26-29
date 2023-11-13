#include<stdio.h>
void ref1(int x);  //(array,size) in the brackets of function
main()
{
  int arr[6]={1,2,3,4,5};
  ref1(arr[0]);//function call which is having a parameter as array	
}
void ref1(int x)
{
	printf("%d",x);  
}
