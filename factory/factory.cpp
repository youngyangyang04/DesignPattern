/*************************************************************************
> File Name: factory_computer.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Sat Aug  6 20:49:31 2016
 ************************************************************************/
/*Factory
 *Definition:A utility class that creates an instance of a class from a family of derived classes
 *The Factory Design Pattern is useful in a situation that requires the creation of many different types of objects, all derived from a common base type. The Factory Method defines a method for creating the objects, which subclasses can then override to specify the derived type that will be created. Thus, at run time, the Factory Method can be passed a description of a desired object (e.g., a string read from user input) and return a base class pointer to a new instance of that object. The pattern works best when a well-designed interface is used for the base class, so there is no need to cast the returned object.
 */
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

