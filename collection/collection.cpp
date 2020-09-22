#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include "collection.h"
using namespace std;
int main()
{
	vector<int>num;
	for (int i = 0; i < 10; i++)
	{
		num.push_back(i);
	}
	for (auto item : num)
	{
		cout << item << " ";
	}
	cout << "\n";
	vector<string>word;
	cout << "Enter three words:";
	for (int i = 0; i < 3; i++)
	{
		string s;
		cin >> s;
		word.push_back(s);
	}
	for (auto item : word)
	{
		cout << item << " ";
	}
	cout << "\n";
	cout<<"int vector num has "<<num.size()<<"elements" <<"\n";
	num[5] = 99;
	num[3] = -1;
	num[6] = 3;
	for (auto item : num)
	{
		cout << item << " ";

	}
	cout << "\n";
	for (unsigned int i = 0; i < num.size(); i++)
	{
		cout << num[i] << " ";

	}
	cout << "\n";
	for (auto i = begin(num); i != end(num); i++)
	{
		cout << *i<<" ";

	}
	cout << "\n";
	sort(begin(word), end(word));
	for (auto item : word)
	{
		cout << item << " ";

	}
	cout << "\n";
	int three = count(begin(num), end(num), 3);
	cout << "vector element has " << three << "elements are 3" << "\n";




}