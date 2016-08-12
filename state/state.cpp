/*************************************************************************
> File Name: state.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Fri Aug 12 20:41:27 2016
 ************************************************************************/

#include<iostream>
#include"work.h"
#include"state.h"
using namespace std;
State::State(){

}
State::~State(){
	
}
AfternoonState::AfternoonState(){

}
AfternoonState::~AfternoonState(){

}
void AfternoonState::writeProgram(Work* w){
		if(w->getHour() < 17){
			cout<<"It is "<<w->getHour()<<" now, "<<"Carl want to go home"<<endl;
		}
}
NoonState::NoonState(){

}
NoonState::~NoonState(){
	
}
void NoonState::writeProgram(Work* w){
		if(w->getHour() < 13){
			cout<<"It is "<<w->getHour()<<" now, "<<"Carl after lunch feel sleepy"<<endl;
		}
		else{
			w->setState(new AfternoonState());
			w->writeProgram();
		}

}
ForenoonState::ForenoonState(){

}
ForenoonState::~ForenoonState(){

}
void ForenoonState::writeProgram(Work* w){
		if(w->getHour() < 12){
			cout<<"It is "<<w->getHour()<<" now, "<<"Carl work excitely"<<endl;
		}
		else{
			w->setState(new NoonState());
			w->writeProgram();
		}
	
}
