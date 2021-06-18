#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age"<<endl;
	cin>>age;
/*	if(age<18)
{
	cout<<"you cannot vote "<<endl;
	
	}
	else if (age==18)
	{
		cout<<"you can vote when you will be 19"<<endl;
		}
			if	(age<2)
			{
				cout<<"you are a newly born child"<<endl;
			}
		
			else 
			{
				cout<<"you can vote"<<endl;
			}
			*/
			switch(age)
	{
		case 18:
			cout<<"you have got 20 marks"<<endl;
			break;
		case 20:
			cout<<"you have got 10 marks"<<endl;
			break;
		default :
			cout<<"you are fail"<<endl;
}
			
		
	return 0;
}
