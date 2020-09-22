#include<string>
#include<iostream>
#include"Person.h"
using namespace std;
#include"Accum.h"
int main()
{
	Accum<int> integers(0);
	integers += 3;
	integers += 7;
	cout << integers.GetTotal() << endl;

	Accum<string> string("");
	string += "hello";
	string += "world";
	cout << string.GetTotal() << endl;

	Accum<person>people(0);
	person p1("Rahul", "gupta", 123);
	person p2("ishan", "gupta", 456);
	people += p1;
	people += p2;
	cout << people.GetTotal() << endl;

	return 0;
}