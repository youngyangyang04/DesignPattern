/*************************************************************************
> File Name: stategy.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Mon Aug 15 16:45:38 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class Strategy{
public:
	Strategy(){

	}
	virtual ~Strategy(){

	}
	virtual void algorithmInterface(){

	}
};
class ConcreteStrategyA: public Strategy{
public:
	ConcreteStrategyA():Strategy(){

	}
	virtual ~ConcreteStrategyA(){

	}
	virtual void algorithmInterface(){
		cout<<"algorithmInterfaceA"<<endl;
	}
};
class ConcreteStrategyB: public Strategy{
public:
	ConcreteStrategyB(): Strategy(){

	}
	virtual ~ConcreteStrategyB(){

	}
	virtual void algorithmInterface(){
		cout<<"algorithmInterfaceB"<<endl;

	}
};
// 上下文
class Context{
public:
	Context(Strategy* strategy){
		this->strategy = strategy;
	}
	void contextInterface(){
		this->strategy->algorithmInterface();
	}
private:
	Strategy* strategy;
};
int main(){
	Context* context;
	context = new Context(new ConcreteStrategyA());
	context->contextInterface();
	context = new Context(new ConcreteStrategyB());
	context->contextInterface();
}
