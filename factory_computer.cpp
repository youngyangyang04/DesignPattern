/*************************************************************************
> File Name: factory_computer.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Sat Aug  6 20:49:31 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class Computer
{
public:
	virtual void price() = 0;
	virtual void description() = 0;
	virtual ~Computer() {};

};
class Laptop: public Computer
{
public:
	void price()
	{
		cout<<"4000$"<<endl;
	}
	void description()
	{
		cout<<"Laptops are mobile, portable and multimedia"<<endl;
	}
	virtual ~Laptop() {};
};
class Desktop: public Computer
{
public:
	void price()
	{
		cout<<"5000$"<<endl;
	}
	void description()
	{
		cout<<"Desktops are fixed"<<endl;
	}
	virtual ~Desktop(){

	}
};
class ComputerFactory
{
public:
	static Computer *NewComputer(const std::string &description)
	{
		if(description == "laptop") 
			return new Laptop;
		if(description == "desktop")
			return new Desktop;
		return NULL;
	}
};
int main()
{
	Computer *computer1 = ComputerFactory::NewComputer("laptop");
	computer1->price();
	computer1->description();
	Computer *computer2 = ComputerFactory::NewComputer("desktop");
	computer2->price();
	computer2->description();
}

