/*************************************************************************
> File Name: main.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Wed Aug 10 17:00:26 2016
 ************************************************************************/

#include<iostream>
using namespace std;
#include "work.h"
#include "state.h"
int main(){
	Work* programmer = new Work();
	programmer->setHour(10);
	programmer->writeProgram();
	programmer->setHour(12);
	programmer->writeProgram();
	programmer->setHour(15);
	programmer->writeProgram();
	programmer->setHour(18);	
	programmer->writeProgram();
	
}
