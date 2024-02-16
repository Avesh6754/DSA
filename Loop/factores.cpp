#include<iostream>

using namespace std;

main()
{
	int a;
	cout<<"Entervthe value of a : ";
	cin>>a;
	int i=1;
	while(i<=a)
	{
		if(a%i==0)
		{
			cout<<"Factores :  " <<i<<"  ";
		}
		i++;
	}
}
