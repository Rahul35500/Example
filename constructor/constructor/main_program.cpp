#include"person.h"
#include<iostream>
using namespace std;
int main()
{
	person p1("Rahul", "Gupta", 123);
	person p2("Rahull", "Gupta", 456);
	/*cout << "after innermost block"<<endl;
	string name = p1.Getname();
	string name1 = p3.Getname();
	cout << name<<endl;
	cout << name1 << endl;*/
	cout << "p1 is ";
	if (!(p1 < p2))
	{
		cout << "not ";
	}
	cout << "less than p2" << endl;
	 
	cout << "p1 is";
	if (!(p1 < 300))
	{
		cout << "not";
	}
	cout << "less than 300"<<endl;

	cout << "300 ";
	if (!(300 < p1))
	{
		cout << "not";
	}
	cout << "less than p1";

	return 0;

	
}