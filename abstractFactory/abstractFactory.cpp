/*************************************************************************
> File Name: abstractFactory_DB.cpp
> Author: CarlSun
> Mail:sunxiuyang04@gmail.com 
> Created Time: Sun Aug  7 17:14:02 2016
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;
class IUser{
public:
	virtual void insert() = 0;
	virtual void getUser() = 0;
	virtual ~IUser(){

	}
};
class SqlserverUser : public IUser{
public:
	virtual void insert(){
		cout<<"Insert user data into sqlserver"<<endl;
	}
	virtual void getUser(){
		cout<<"Get user information from sqlserver"<<endl;
	}
	virtual ~SqlserverUser(){

	}
};
class MysqlUser : public IUser{
public:
	virtual void insert(){
		cout<<"Insert user data into mysql"<<endl;
	}
	virtual void getUser(){
		cout<<"Get user information from mysql"<<endl;
	}
	virtual ~MysqlUser(){

	}
};

class IDepartment{
public:
	virtual void insert() = 0;
	virtual void getDepartment() = 0;
	virtual ~IDepartment(){

	}
};
class SqlserverDepartment : public IDepartment{
public:
	virtual void insert(){
		cout<<"Insert department information into sqlserver"<<endl;
	}
	virtual void getDepartment(){
		cout<<"Get department information from sqlserver"<<endl;
	}
	virtual ~SqlserverDepartment(){

	}
};
class MysqlDepartment : public IDepartment{
public:
	virtual void insert(){
		cout<<"Insert department information into mysql"<<endl;
	}
	virtual void getDepartment(){
		cout<<"Get department information from mysql"<<endl;
	}
	virtual ~MysqlDepartment(){

	}
};
// Abstract Factory 
class Factory{
public:
	void factoryPrint(){
		cout<<"factory"<<endl;
	}
	virtual IUser* createUser() = 0;
	virtual IDepartment* createDepartment() = 0;
	virtual ~Factory(){

	}
};
class SqlserverFactory : public Factory{
public:
	virtual IUser* createUser(){
		return new SqlserverUser();
	}
	virtual IDepartment* createDepartment(){
		return new SqlserverDepartment();
	}
	virtual ~SqlserverFactory(){

	}
};
class MysqlFactory : public Factory{
public:
	virtual IUser* createUser(){
		return new MysqlUser();
	}
	virtual IDepartment* createDepartment(){
		return new MysqlDepartment();
	}
	virtual ~MysqlFactory(){

	}
};
int main(){
	Factory* factory = new SqlserverFactory();
//	Factory* factory = new MysqlFactory();
	IUser* iu = factory->createUser();
	iu->insert();
	iu->getUser();

	IDepartment* id = factory->createDepartment();
	id->insert();
	id->getDepartment();
	delete iu;
	delete factory;
	delete id;
}
