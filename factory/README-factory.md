# Introduction
The Factory Design Pattern is useful in a situation that requires the creation of many different types of objects, all derived from a common base type. The Factory Method defines a method for creating the objects, which subclasses can then override to specify the derived type that will be created. Thus, at run time, the Factory Method can be passed a description of a desired object (e.g., a string read from user input) and return a base class pointer to a new instance of that object. The pattern works best when a well-designed interface is used for the base class, so there is no need to cast the returned object.

# 介绍
为了提高内聚(Cohesion)和松耦合(Coupling),我们经常会抽象出一些类的公共 接口以形成抽象基类或者接口。这样我们可以通过声明一个指向基类的指针来指向实际的子 类实现,达到了多态的目的。

# 本例解析
本例通过买电脑来展示工厂模式
* 抽象出所有电脑的基础类Computer
* 针对基础类设计接口price，description
* 不同的电脑型号集成基础类来实现接口price，description
* 通过工厂CompputerFactory来判断此时客户端需要什么样的实体对象
* 这样我们可以通过声明一个指向基类的指针来指向实际的子 类实现,达到了多态的目的
