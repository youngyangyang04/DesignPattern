# Introduction
A prototype pattern is used in software development when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. This pattern is used, for example, when the inherent cost of creating a new object in the standard way (e.g., using the new keyword) is prohibitively expensive for a given application.
# 介绍
原型模式是对一个类的拷贝，也许有人说那这和拷贝构造函数有什么区别呢？
区别在于原型模式里，你可以保存基类指针，最后生成的是这个指针真正指向的子类，而拷贝构造函数你必须搞一个具体的类进去，生成的object也是固定的。通俗来说就是如何想考拷贝一个基类指针指向一个派生类对象的时候就要用原型模式
# 本例解析
* 定义一个Prototype基类
* 这里我们拷贝了Prototype的派生类ConcretePrototype

