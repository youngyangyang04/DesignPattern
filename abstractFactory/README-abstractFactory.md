# Introduction
Abstract Factory patterns work around a super-factory which creates other factories. This factory is also called as factory of factories. This type of design pattern comes under creational pattern as this pattern provides one of the best ways to create an object.In Abstract Factory pattern an interface is responsible for creating a factory of related objects without explicitly specifying their classes. Each generated factory can give the objects as per the Factory pattern.

# 介绍
AbstractFactory 模式是为创建一组(有多类)**相关或依赖的对象**提供创建接口,而 Factory 模式正如在相应的[factory](https://github.com/youngyangyang04/DesignPattern/blob/master/factory/README-factory.md)中分析的是为一类对象提供创建接口。并且可以看到,AbstractFactory 模式通常都是使用 Factory 模式实现
通俗来讲，如果在[factory](https://github.com/youngyangyang04/DesignPattern/blob/master/factory/README-factory.md)不仅仅买电脑，还买相机的话而且相机操作和电脑有依赖关系 我们就考虑抽象工厂模式了
# 本例解析
本例通过后台切换数据库来展示工厂模式
因为在使用是数据库时，应该会因为需求而切换不同的数据库，例子中是后台对sqlserver和mysql数据库的切换
* 抽象出所有操作的基础类IUser,IDepartment
* 针对基础类定义接口。
* 基础类IUser的接口函数insert()，getUser()。
* 基础类IDepartment的接口函数insert()，getDepartment()
* 数据库MysqlUser，SqlserverUser继承基础类IUser，数据库MysqlDepartment，SqlserverDeparment继承基础类IDepartment来实现接口
* 基础类抽象工厂类Factory来定义接口来实例化不同的数据库
* SqlserverFactory和MysqlFactory继承Factory实现接口
* 这样就可以通过声明一个指向基类Factory的指针来指向实际的子类SqlserverFactory和MysqlFactory实现,达到自由切换数据库的目的
