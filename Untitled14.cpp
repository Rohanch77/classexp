#include<iostream>
using namespace std;
int main()
{
	int marks[]={98,88,85,100};
	int i=0;
	int *p=marks;

	{
	
		cout<<"The marks of student "<<marks[0]<<" is "<<*p<<endl;
		cout<<"The marks of student "<<marks[1]<<" is "<<*(p+1)<<endl;
		cout<<"The marks of student "<<marks[2]<<" is "<<*(p+2)<<endl;
		cout<<"The marks of student "<<marks[3]<<" is "<<*(p+3)<<endl;
	}
		

}
