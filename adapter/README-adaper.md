# Introduction
Convert the interface of a class into another interface that clients expect. Adapter lets classes work together that could not otherwise because of incompatible interfaces.
# 介绍
适配器模式就是讲一个类的接口转换成客户端需要的接口，这种模式将接口不相同的类协调在一起工作
# 本例解析
这例子描述NBA，姚明一开始去NBA的时候英语不好，打球的时候需要一个翻译人员进行翻译，才能和其他球员一起协调工作，此时这个翻译人员就是适配器
* 构造一个球员基础类Player
* 派生类前锋Forwards和中锋Center实现基础类接口attack和defense
* 一个外籍球员类ForeignCenter它的攻击和防守实现函数和Player函数实现不一样，如果想用这个外籍球员yaoming我们需要一个翻译官也就是适配器Translator类
* Translator类充当适配器的角色将ForeignCenter进行封装使之可以在客户端和一起球员使用一样的攻击方法
