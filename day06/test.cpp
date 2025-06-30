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
    Person(){
        cout << "这是构造函数" << endl;
    }

    /* 析构函数 */
    // 没有返回值不需要写void
    // 函数名与类名相同，需要加~
    // 没有参数，不能发生重载
    // 销毁对象时会被自动调用
    ~Person(){
        cout << "这是析构函数" << endl;
    }

};

void test1(){

    Person p1;

}

int main(){

    // test1();
    Person p2;

    system("pause");
    return 0;

}