#include<stdio.h>
void ref1(int x[],int s);  //(array,size) in the brackets of function
main()
{
  int arr[6]={1,2,3,4,5};
  ref1(arr,5);   //function call which is having a parameter as array	
}
void ref1(int x[],int s)
{
	printf("%d",x[0]);  
}
