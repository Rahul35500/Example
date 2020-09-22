#include<string>
#pragma once
//using namespace std;
class person
{
private:
	int arbitrarunumber;
	std::string firstname;
	std::string lastname;
public:
	person(std::string first, std::string last, int arbitrary);
    std::string Getname() const;
	~person();
	int Getnumber() const { return arbitrarunumber; }
	void setnumber(int number) { arbitrarunumber = number; }
	bool operator <(person const& p) const;
	bool operator<(int i) const;

};
bool operator<(int i, person const& p);