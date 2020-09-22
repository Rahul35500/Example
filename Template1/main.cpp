#include<iostream>
#include<string>
#include"person.h" 
using std::string;
using namespace std;
template <class T>
T maxed(T const& t1, T const& t2)
{
	return t1 < t2 ? t2 : t1;
}

int main()
{
	cout << "max of 33 and 44 is " << maxed(33, 44) << endl;
	string s1 = "hello ";
	string s2 = "world ";
	cout << "max of " << s1 << "and " << s2 << "is " << maxed(s1, s2) << endl;
	person p1("Rahul", "gupta", 123);
	person p2("ishika", "gupta", 456);
	cout << "max of " << p1.Getname() << "and " << p2.Getname() << "is " << maxed(p1, p2).Getname() << endl;

}