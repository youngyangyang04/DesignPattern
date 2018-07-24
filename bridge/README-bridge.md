# Introduction
The Bridge Pattern is used to separate out the interface from its implementation. Doing this gives the flexibility so that both can vary independently.
# 介绍
桥接模式将抽象部门与它的实现部分分离，使他们独立地变化
继承是一种强耦合结构。父类变化子类一定变化，所以我们在使用继承的时候一定要遵循"is a"的关系，当关系不是"is a"的关系时 我们就要考虑使用对象的合成或者聚合。
# 本例解析
本例用描述两个不同手机里面的不同的两个功能，手机分别为Android和Iphone，因为大话设计模式里面的例子太老旧了那时候还没有Android，所以我就换成Android和Iphone了。两个功能分别为游戏和联系人清单


