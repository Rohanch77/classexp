#include<iostream>
using namespace std;
inline int product(int a,int b)
{
	static int c=0;
	c=c+1;
	return a*b+c;
}
int main()
{ int x,y;
cout<<"Enter the number x and y "<<endl;
cin>>x>>y;
	cout<<"The product is "<< product(x,y)<<endl;
	cout<<"The product is "<< product(x,y)<<endl;
	cout<<"The product is "<< product(x,y)<<endl;
	cout<<"The product is "<< product(x,y);
}
