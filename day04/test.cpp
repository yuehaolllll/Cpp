#include <iostream>
#include <string>

using namespace std;


// // 函数重载
// // 1、函数作用域相同
// // 2、函数名相同
// // 3、函数的参数类型不同、或个数不同、或顺序不同
// void func(){
//         cout << "func()函数" << endl;
// }

// void func(int a){
//     cout << "func(int a)函数" << endl;
// }

// void func(double a){
//     cout << "func(double a)函数" << endl;
// }

// void func(int a, double b){
//     cout << "func(int a, double b)函数" << endl;
// }

// void func(double a, int b){
//     cout << "func(double a, int b)函数" << endl;
// }

// int main()
// {

//     func();
//     func(10);
//     func(3.14);
//     func(10, 3.14);
//     func(3.14, 10);

//     system("pause");
//     return 0;

// }


// double PI = 3.14;
// // 设计一个圆类
// class Circle
// {
//     // 访问权限
//     // 公有权限
// public:

//     // 属性
//     int r;

//     // 行为
//     double calculate(){
//         return 2 * PI * r;
//     }


// };

// int main(){

//     // 创建圆类实例化
//     Circle c1;
//     // 实例属性赋值
//     c1.r = 10;
//     // 实例行为
//     cout << "圆的周长为: " << c1.calculate() << endl;

//     system("pause");
//     return 0;

// }

// // 设计一个学生类，属性有姓名和学号，可以给姓名学号赋值，可以显示学生的姓名和学号

// class Stu{

// public:

//     // 属性
//     string stu_name;
//     string stu_id;

//     // 行为
//     void input(){
//         cout << "please input student's name: " << endl;
//         cin >> stu_name;
//         cout << "please input student's id: " << endl;
//         cin >> stu_id;
//     }

//     void output(){
//         cout << "name : " << stu_name << endl;
//         cout << "id : " << stu_id << endl;
//     }

// };

// int main(){

//     Stu s1;
//     s1.input();
//     s1.output();

//     system("pause");
//     return 0;

// }


// 三种访问权限
// 公有权限------类内类外均可访问
// 保护权限------类内可以访问，类外不可访问（子类可以访问父类的保护内容）
// 私有权限------类内可以访问，类外不可访问（子类无法访问父类私有内容）

