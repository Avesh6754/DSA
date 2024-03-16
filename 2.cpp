//Write a Program to find cubes of all elements from a given 2D array of NxN using Pointer with UDF.
//For example,
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//9   4
//25 64
//*
//Enter your code here. If you can not answer the question, write NA as an answer.
//10 points
#include<iostream>

using namespace std;

void Sum(int n)
{
	int a[n][n];
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
		cout<<"Enter the element of array : ["<<i<<"]["<<j<<"]" ;
		cin>>a[i][j];
		}
	}
	int *ptr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ptr[i][j]=&a[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			*ptr[i][j]=(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<*ptr[i][j];
		}
		cout<<""<<endl;
	}	
	
}
main()
{
	int n;
	cout<<"Entre the size of array : ";
	cin>>n;
	Sum(n);
	
	
}
