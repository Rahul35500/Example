#include<iostream>
using namespace std;
#include"function.h"
int main()
{
	int total = add(2, 3);
	cout << "total are:" << total;
	double total2 = add(2.4, 3.2,4.2);
	cout << "total1 are:" << total2;
	float total3 = add(2.2, 3.3,4.4,5.2);
	cout << "total2 are:" << total3;
	return 0;
}