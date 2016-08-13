/*************************************************************************
> File Name: proxy.h
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Sat Aug 13 20:28:47 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class SchoolGirl{
public:
	string getName();
	void setName(string name);
private:
	string name;
};
class IGiveGift{
public:
	IGiveGift();
	virtual ~IGiveGift();
	virtual void GiveDolls()=0;
	virtual void GiveFlowers()=0;
};
class Pursuit: public IGiveGift{
public:
	Pursuit(SchoolGirl* mm);
	virtual ~Pursuit();
	virtual void GiveDolls();
	virtual void GiveFlowers();
private:
	SchoolGirl* mm;
};
class Proxy: public IGiveGift{
public:
	Proxy(SchoolGirl* mm);
	virtual ~Proxy();
	virtual void GiveDolls();
	virtual void GiveFlowers();
private:
	Pursuit* gg;
};
