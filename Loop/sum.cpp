#include<iostream>
using namespace std;

main()
{
	int i,n;
	cout<<"Entre the value of a : ";
	cin>>n;
	int a,sum=0;
	while(n>0)
	{
		a=n%10;
		n/=10;
		sum=sum+a;
	}
	cout<<"enter the sum : "<<sum<<" ";
}
