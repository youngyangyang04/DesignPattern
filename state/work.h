/*************************************************************************
> File Name: work.h
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Wed Aug 10 16:55:04 2016
 ************************************************************************/
#ifndef _work_
#define _work_
class State;
class Work{
public:
	Work();
	void setHour(double hour);
	void setState(State* s);
	double getHour();
	void writeProgram();
private:
	State* current;
	double hour;
};
#endif
