#include<iostream>
using namespace std;

class complex2;
class Complex1
{
    int a, b;

public:
    Complex1(int x, int y); 

    void printNumber()
    {
        cout << " The distance between two points is"<< a - b <<endl;
    }
};

Complex1 ::Complex1(int x, int y)
{
    a = x;
    b = y;
    
}
class complex2
{
	int a,b;
	friend class complex1;
	public:
		Complex2(int x, int y)
		{
		  a = x; b = y;
		 } 
    

    void printNumber()
    {
        cout << " The distance between two points is"<< a - b <<endl;
    }
};

int main()
{
	complex1,2;
    Complex1 (4, 6);
    a.printNumber();
    Complex2 (5, 7);
    a.printNumber();

    return 0;
}

