#include"person.h"
#include<iostream>
using namespace std;

person::person(std::string first, std::string last, int arbitrary) :firstname(first), lastname(last), arbitrarunumber(arbitrary) {
	cout << "constucting " << Getname() << endl;
}
string person::Getname() const
{
	return firstname + " " + lastname;
}
//person::person(){
//	arbitrarunumber = 0;
//	cout << "constucting: " << firstname << " " << lastname << endl;
//}
person::~person()
{
	cout << "destructing " << firstname << " " << lastname << endl;
}
bool person::operator<(person const& p) const
{
	return arbitrarunumber < p.arbitrarunumber;
}
bool person::operator<(int i) const
{
	return arbitrarunumber < i;
}
bool operator<(int i, person const& p)
{
	return i < p.Getnumber();
}