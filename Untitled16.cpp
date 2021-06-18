#include<iostream>
using namespace std;
int sum(int a,int b);

int main()
{
	int x,y;
	cout<<"Enter the number"<<endl;
	cin>>x;
	
	cout<<"Enter the number"<<endl;
	cin>>y;
	
	cout<<"The sum is "<<sum(x,y)<<endl;
}

     int sum (int a, int b)
{
	int c= a+b;
	return c;
}
