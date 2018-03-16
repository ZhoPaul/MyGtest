//============================================================================
// Name        : MyCPP_TestStudy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Base
{
public:
	virtual void say() const
	{
		cout<<"I'm Base"<<endl;
	}

	void run() const
	{
		cout<<"Base Run"<<endl;
	}

	Base(){}
	virtual ~Base(){}
};

class Derived : public Base
{
public:
	Derived(){}
	virtual ~Derived(){}

	void say() const override
	{
		cout<<"I'm Derived"<<endl;
	}

	void run() const
	{
		cout<<"Derived Run"<<endl;
	}

};


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Derived derived;
	Base &base = derived;

	derived.say();
	base.say();

	base.run();
	derived.run();

	return 0;
}
