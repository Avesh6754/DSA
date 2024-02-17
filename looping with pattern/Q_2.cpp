#include<iostream>

using namespace std;

main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(int k=i;k<5;k++)
		{
			cout<<"  ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<" *";
		}
		for(j=2;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	
} 
