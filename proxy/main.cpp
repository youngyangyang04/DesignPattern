/*************************************************************************
> File Name: main.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Sat Aug 13 20:53:15 2016
 ************************************************************************/

#include<iostream>
#include"proxy.h"
using namespace std;
int main(){
	SchoolGirl* girl = new SchoolGirl();
	girl->setName("jiaojiao");
	Proxy* proxy = new Proxy(girl);
	proxy->GiveDolls();
	proxy->GiveFlowers();
}

