/*************************************************************************
> File Name: singleton.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Mon Aug  8 16:23:35 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class Singleton{
public:
	static Singleton* getInstance(){
		if(_instance == 0){
			_instance = new Singleton();
		}
		return _instance;
	}
private:
	static Singleton* _instance;
	Singleton(){
		cout<<"singleton..."<<endl;
	}
};
Singleton *Singleton::_instance = 0;//The C++ standard allows only static constant integral or enumeration types to be initialized inside the class
int main(){
	Singleton* sgn1 = Singleton::getInstance();
	Singleton* sgn2 = Singleton::getInstance();
	delete sgn1;
//	delete sgn2; //sgn1 share same point with sgn2, so deleting sgn2 will make error
}
