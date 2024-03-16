//Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2

#include<iostream>

using namespace std;

void Sum(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<"Sum of array : "<<sum;
}
main()
{
	int n;
	cout<<"Entre the size of array : ";
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the element of array : ["<<i<<"]" ;
		cin>>a[i];
	}	
	Sum(a,n);
}
