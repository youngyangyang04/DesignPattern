/*************************************************************************
> File Name: prototype.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Mon Aug  8 18:27:05 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class Prototype{
public:
	virtual ~Prototype(){

	}
	virtual Prototype* Clone() const = 0;
protected:
	Prototype(){

	}
};
class ConcretePrototype:public Prototype{
public:
	ConcretePrototype(){

	}
	ConcretePrototype(const ConcretePrototype& cp){
		*this = cp;	
		cout<<"ConcretePrototype copy ..."<<endl;
	}
	~ConcretePrototype(){

	}
	virtual Prototype* Clone() const{
		return new ConcretePrototype(*this);
	}
};
int main(){
	Prototype* p = new ConcretePrototype();
	Prototype* p1 = p->Clone();
	Prototype* p2 = p->Clone();
}
