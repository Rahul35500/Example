#pragma once
#include"Person.h"

template<class T>
class Accum
{
private:
	T total;
public:
	Accum(T start) :total(start) {};
	T operator+=(T const& t)
	{
		return total = total + t;
	}
	T GetTotal() const { return total; }
};

template<>
class Accum<person>
{
private:
	int total;
public:
	Accum(int start) :total(start) {};
	int operator+=(person const& t)
	{
		return total = total + t.Getnumber();
	}
	int GetTotal() const { return total; }
};
