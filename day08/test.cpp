#include <iostream>

using namespace std;

// 深拷贝与浅拷贝
// 浅拷贝：简单的幅值拷贝操作
// 深拷贝：在堆区申请空间，进行拷贝操作

class Person
{
public:
    // 默认构造函数
    Person(){
        cout << "默认构造函数调用" << endl;
    }

    // 有参构造函数
    Person(int age, int height){
        cout << "有参构造函数调用" << endl;
        m_age = age;
        *m_height = height;
    }

    // 拷贝构造函数
    Person(const Person &p){
        cout << "拷贝构造函数调用" << endl;
        m_age = p.m_age;
        // 深拷贝
        m_height = new int(*p.m_height);
    }

    int m_age;
    int* m_height;

    // 析构函数
    ~Person(){
        if(m_height != NULL){
            delete m_height;
            m_height = NULL;
        }

        cout << "析构函数调用" << endl;
    }

};

void test(){

    Person p1(20, 160);
    cout << "p1的年龄: " << p1.m_age << "  p1的身高: " << *p1.m_height << endl;

    Person p2(p1);
    cout << "p2的年龄: " << p2.m_age << "  p2的身高: " << *p2.m_height << endl;

}

int main(){

    test();

    system("pause");
    return 0;

}