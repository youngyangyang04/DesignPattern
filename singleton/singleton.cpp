/*************************************************************************
> File Name: singleton.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Mon Aug  8 15:26:06 2016
 ************************************************************************/

#include<iostream>
using namespace std;
class Singleton{
public:
//	static Singleton* _instance = 0;
	static Singleton* Instance(){
		if(_instance == 0){
			_instance = new Singleton();
		}
		return _instance;
	}
private:
	Singleton(){
		cout<<"Singleton...."<<endl;
	};
	static Singleton* _instance;
};
Singleton *Singleton::_instance = 0;//The C++ standard allows only static constant integral or enumeration types to be initialized inside the class.
int main(){
	Singleton* sgn1 = Singleton::Instance();
	Singleton* sgn2 = Singleton::Instance();
	delete sgn1;
//	delete sgn2; sgn2 is same with sgn1, so deleting two times will make error
}
