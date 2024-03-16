//Write a Program to abstract some attributes of class Admin to prevent them to be inherited by its child classes.
//- Class Admin -> Class Manager
//- Class Manager -> Class 
//- Class Admin has the following members:
//1. company_name
//2. manager_salary
//3. employee_salary
//4. total_staff
//5. total_annual_revenue
//6. can_terminate
//
//- use all attributes accessibility in the parent class and child class properly.
//- override a method myAccess() in both child classes to display all parent class members' values accordingly.
//*
//Enter your code here. If you can not answer the question, write NA as an answer.
//10 points

#include<iostream>

using namespace std;

class Employee
{
	protected:
	int employee_salary,total_staff,total_annual_revenue;
	string company_name,can_terminate;
	int manager_salary;
 
	public:
		
		void myAccess()
		{
			cout<<"=============Employee============="<<endl;
			cout<<"Company Name : "<<company_name<<" "<<endl;
			cout<<"Total annual revenue : "<<total_annual_revenue<<" "<<endl;
			cout<<"Employee Salary  : "<<employee_salary<<" "<<endl;
		}
};
class Manager:public Employee 
{
	public:
		
		void myAccess()
		{
			cout<<"=============Manager============="<<endl;
			cout<<"Company Name : "<<company_name<<" "<<endl;
			cout<<"Total staff : "<<total_staff<<" "<<endl;
			cout<<"manager_salary  : "<<manager_salary<<" "<<endl;
			cout<<"Employee Salary  : "<<employee_salary<<" "<<endl;
			cout<<"Total annual revenue : "<<total_annual_revenue<<" "<<endl;
		}
};
class Admin:public Manager
{
	public:
		void set()
		{
			cout<<"Enter the Company Name : ";
			getline(cin,company_name);
			cout<<"Enter the Total staff : ";
			cin>>total_staff;
			cin.ignore();
			cout<<"Enter the Total annual revenue : ";
			cin>>total_annual_revenue;
			cin.ignore();
			cout<<"Enter the Employee Salary  : ";
			cin>> employee_salary;
			cin.ignore();
			cout<<"Enter the can_terminate : ";
			getline(cin,can_terminate);
			cout<<"Enter the manager salary  : ";
			cin>>manager_salary;
			cin.ignore();
		}
		void myAccess()
		{
			cout<<"=============Admin============="<<endl;
			cout<<"Company Name : "<<company_name<<" "<<endl;
			cout<<"Total staff : "<<total_staff<<" "<<endl;
			cout<<"manager_salary : "<<manager_salary<<" "<<endl;
			cout<<"Employee Salary  : "<<employee_salary<<" "<<endl;
			cout<<"Total annual revenue : "<<total_annual_revenue<<" "<<endl;
			cout<<"Company can terminate : "<<can_terminate<<" "<<endl;
		}
	
};

main()
{
 	Admin a1;
 	a1.set();
 	a1.Admin::myAccess();
 	Employee e1;
 	a1.Employee::myAccess();
 	Manager m1;
 	a1.Manager::myAccess();
 	
}

