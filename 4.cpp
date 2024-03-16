//Write a Program to create a Message class with a constructor that takes a 
//single string with a default value. Create a private member of the typed string, 
//and in the constructor simply assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message stored in the variable and one that takes a string argument, 
//which it prints in addition to the internal message.
#include<iostream>

using namespace std;

class Message
{
	
	string Name;
	public:
		Message(string name)
		{
			this->Name=name;
				
		}
		void print()
		{
			cout<<"First name : "<<Name<<endl;
		}
		void print(string name)
		{
			cout<<"Second name : "<<Name<<" "<<name;
		}
		
		
};

main()
{
 string name;
 cout<<"Enter the your name : ";
 getline(cin,name);
 string sname;
 cout<<"Enter the Surname : ";
 getline(cin,sname);
 Message m1(name);
 m1.print();
 m1.print(sname);
 
 
	
}
