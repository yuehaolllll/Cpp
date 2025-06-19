#include <iostream>

using namespace std;

// int main(){

//     // new 的使用
//     // new开辟一个整数
//     int* p = new int(10);
//     cout << "p 的地址为:" << p << endl;
//     cout << "p中存放的值为:" << *p << endl;
//     //释放
//     delete p;

//     // new开辟一个数组
//     int* pa = new int[10];
//     for(int i = 0; i < 10; i++){
//         *(pa+i) = i;
//     }
//     for(int i = 0; i < 10; i++){
//         cout << "pa中各元素值为:" << *(pa+i) << endl;
//     }
//     // 释放
//     delete[] pa; 

//     system("pause");
//     return 0;

// }


// int main(){

//     // 引用的用法
//     // 1.引用必须初始化
//     // 2.引用在初始化后，不可变更

//     int a = 10;
//     int &b = a;

//     cout << "a = " <<  a << endl;
//     cout << "b = " <<  b << endl;

//     b = 20;
//     cout << "a = " <<  a << endl;
//     cout << "b = " <<  b << endl;

//     system("pause");
//     return 0;

// }


// //值传递
// void swap1(int a, int b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }

// //地址传递
// void swap2(int* a, int* b){
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }

// //引用作为做函数传参
// //引用传递
// void swap3(int &a, int &b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }


// int main(){

//     int a = 10;
//     int b = 20;
//     swap1(a, b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     swap2(&a, &b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     swap3(a, b);
//     cout << "a = " << a << endl;
//     cout << "b = " << b << endl;

//     system("pause");
//     return 0;

// }


// // 引用做函数返回值
// int& test(){

//     static int a = 10;
//     return a;

// }

// int main(){

//     int &ret = test();
//     cout << "ret = " << ret << endl;

//     system("pause");
//     return 0;

// }


// 函数默认参数
int func(int a, int b = 10, int c = 20){
    return a + b + c;
}

// 函数的占位参数
int func1(int a, int){
    cout << "this is a function" << endl;
}

int main(){

    cout << func(10,10,10) << endl;

    system("pause");
    return 0;

}