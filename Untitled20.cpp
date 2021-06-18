#include<iostream>
using namespace std;
class Person
{
	private :
		char name[100],address[100];
		int age,citizenship;
	
	
	public :
		void input_data();
		void check_data();
		void display_data();
 };
 void Person::input_data()
 {
 	cout<<"Enter your name "<<endl;
 	cin>>name;
 	
 	cout<<"Enter your address"<<endl;
 	cin>>address;
 	
 	cout<<"Enter your age"<<endl;
 	cin>>age;
 	
 	cout<<"Enter your citizenship number"<<endl;
 	cin>>citizenship;
	 	 	 }
  void Person::check_data()
 {
 	if (age<16)
	 {
 	citizenship=0;
 	
 	}
 	
}

 void Person::display_data()
 {
 	cout<<"Name :"<<name<<endl;
 	cout<<"Age :"<<age<<endl;
 	cout<<"address :"<<address<<endl;
 	cout<<"citizenship :"<<citizenship<<endl;
 }
 int main()
 {
 	Person a;
 	a.input_data();
 	a.check_data();
 	a.display_data();
 }
