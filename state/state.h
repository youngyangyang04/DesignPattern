/*************************************************************************
> File Name: state.h
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Wed Aug 10 16:54:28 2016
 ************************************************************************/
#ifndef _state_ 
#define _state_
class Work;
class State{
public:
	State();
	virtual void writeProgram(Work* w)=0;
	virtual ~State();
};
//下午工作状态
class AfternoonState : public State{
public:
	AfternoonState();
	virtual void writeProgram(Work* w);
	virtual ~AfternoonState();
};
//中午工作状态
class NoonState : public State{
public:
	NoonState();
	virtual void writeProgram(Work* w);
	virtual ~NoonState();
};
//上午工作状态 
class ForenoonState : public State{
public:
	ForenoonState();
	virtual void writeProgram(Work* w);
	virtual ~ForenoonState();
};
#endif
