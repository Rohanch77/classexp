#include<iostream>
using namespace std;
class employee
{
	private :
		char name [100];
		int age,salary;
		
	public :
		void getdata();
		void putdata();	
};

void employee :: getdata()
{
	cout<<"Enter your name"<<endl;
	cin>>name;
	cout<<"Enter your age"<<endl;
	cin>>age;
	cout<<"Enter your salary"<<endl;
	cin>>salary;
	
}
void employee :: putdata()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Salary : "<<salary<<endl;
}
int main()
{
	employee A[2];
	for (int i=0;i<2;i++)
	{
		A[i].getdata();
		A[i].putdata();
	}
	cout<<endl;
	
}
