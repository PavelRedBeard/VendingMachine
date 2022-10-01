#pragma once
#include <string>
using namespace std;

class Snack
{
public:
	
	Snack(const string& name);
	Snack() = default;
	~Snack() = default;
	
	Snack(const Snack& other);

	string& getName();
	void setName(const string& name);

	
private:
	string _name;
};

