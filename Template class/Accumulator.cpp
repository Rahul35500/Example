#include<string>
#include<iostream>
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
	cout << string.GetTotal()<<endl;

}