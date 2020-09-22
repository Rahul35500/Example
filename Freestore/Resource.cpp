#include"Resource.h"
#include<iostream>
using namespace std;

Resource::Resource(string n) :name(n)
{
	cout << "constructing: " << name << endl;
}
Resource::~Resource(void)
{
	cout << "destructing: " << name << endl;
}