#include<iostream>
using namespace std;

main()
{
	int i,n;
	cout<<"Entre the value of a : ";
	cin>>n;
	int a,sum=0;
	int id=n%10;
	while(n>9)
	{
		n/=10;
	}
	cout<<"Sum of first and last digit  : "<<n+id<<" ";
}
