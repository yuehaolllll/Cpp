#include <iostream>

using namespace std;

/* 对象的初始化与清理 */
/* 构造函数与析构函数 */
class Person
{

public:
    /* 构造函数 */
    // 没有返回值不需要写void
    // 函数名与类名相同
    // 可以有参数，可以发生重载
    // 创建对象时会被自动调用，而且只调用一次

    /* 构造函数的分类： 普通构造函数与拷贝构造函数 */
    Person(){
        cout << "这是无参构造函数" << endl;
    }
    Person(int a){
        age = a;
        cout << "这是有参构造函数" << endl;
    }
    Person(const Person &p){
        age = p.age;
        cout << "这是拷贝构造函数" << endl;
    }

    /* 析构函数 */
    // 没有返回值不需要写void
    // 函数名与类名相同，需要加~
    // 没有参数，不能发生重载
    // 销毁对象时会被自动调用
    ~Person(){
        cout << "这是析构函数" << endl;
    }

    int age;

};

void test1(){

    // 1、括号法
    // Person p1;          /* 默认构造函数调用 */
    // Person p2(10);      /* 有参构造函数调用 */
    // Person p3(p2);      /* 拷贝构造函数调用 */

    // cout << "p2的年龄-> " << p2.age << endl;
    // cout << "p3的年龄-> " << p3.age << endl;
    

    // 2、显示法
    Person p1;
    Person p2 = Person(10);
    Person p3 = Person(p2);
}

int main(){

    test1();
    

    system("pause");
    return 0;

}

