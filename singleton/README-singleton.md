#Introduction
he Singleton pattern ensures that a class has only one instance and provides a global point of access to that instance. It is named after the singleton set, which is defined to be a set containing one element. This is useful when exactly one object is needed to coordinate actions across the system.
#介绍
简单的说就是让一个类只能实例化一个对象
#本例解析
* 将构造函数和指向Singleton实例的指针_instance设置为private
* 当客户端调用getInstance时，判断_instance是否已经指向一个实例

