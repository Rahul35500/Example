#pragma once
#include<string>

class Resource
{
private:
	std::string name;
public:
	Resource(std::string n);
	~Resource(void);
	std::string Getname() const { return name; }
};