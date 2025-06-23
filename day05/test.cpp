// #include <iostream>
// #include <string>
// using namespace std;

// class Person
// {
// // 公有的方法来访问私有属性
// public:
//     void setName(string name){
//         my_name = name;
//     }

//     void setAge(int age){
//         my_age = age;
//     }

//     void setIdol(string idol){
//         my_idol = idol;
//     }

//     void show(){
//         cout << "name:" << my_name << endl;
//         cout << "age: " << my_age << endl;
//         cout << "idol:" << my_idol << endl;
//     }

// private:
//     // 属性
//     string my_name;
//     int my_age;
//     string my_idol;

// };

// int main(){

//     Person p;
//     p.setName("yuehao");
//     p.setAge(23);
//     p.setIdol("xi");

//     p.show();
//     system("pause");
//     return 0;

// }


// #include <iostream>
// #include <string>

// using namespace std;

// class Cube
// {
// public:
//     void setLenth(float lenth){
//         m_L = lenth;
//     }

//     void setWidth(float width){
//         m_W = width;
//     }

//     void setHeight(float height){
//         m_H = height;
//     }

//     float getLenth(){
//         return m_L;
//     }

//     float getWidth(){
//         return m_W;
//     }

//     float getHeight(){
//         return m_H;
//     }

//     float getArea(){
//         return (m_L*m_W + m_L*m_H + m_W*m_H)*2;
//     }

//     float getVolume(){
//         return m_L*m_W*m_H;
//     }

//     // 成员内实现判断
//     bool isSame(Cube &c){
//         if(m_L == c.getLenth() && m_W == c.getWidth() && m_H == c.getHeight()){
//             return true;
//         }else{
//             return false;
//         }
//     }

// private:
//     float m_L;
//     float m_W;
//     float m_H;

// };

// // 全局函数判断两个立方体是否相等
// bool IsSame(Cube &c1, Cube &c2){
//     if(c1.getLenth() == c2.getLenth() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()){
//         return true;
//     }else{
//         return false;
//     }
// }

// int main(){

//     Cube c1;
//     c1.setLenth(10);
//     c1.setWidth(10);
//     c1.setHeight(10);

//     Cube c2;
//     c2.setLenth(10);
//     c2.setWidth(10);
//     c2.setHeight(10);

//     bool ret = IsSame(c1, c2);
//     if(ret){
//         cout << "same" << endl;
//     }else{
//         cout << "not same" << endl;
//     }

//     bool ret1 = c2.isSame(c1);
//     if(ret1){
//         cout << "same" << endl;
//     }else{
//         cout << "not same" << endl;
//     }

//     system("pause");
//     return 0;

// }


#include <iostream>
#include <string>

using namespace std;


class Point
{
public:
    void setX(int x){
        d_x = x;
    }

    void setY(int y){
        d_y = y;
    }

    int getX(){
        return d_x;
    }

    int getY(){
        return d_y;
    }

private:
    int d_x;
    int d_y;

};

class Circle
{
public:
    void setR(int r){
        c_r = r;
    }

    int getR(){
        return c_r;
    }

    void setCenter(Point center){
        center = center;
    }

    Point getCenter(){
        return center;
    }
   
private:
    Point center;
    int c_r;

};

// check position
void check(Circle &c, Point &p){

    // 计算两点绝对差（x1 - x2）^2 + (y1 - y2)^2
    int ret = (c.getCenter().getX() - p.getX())*(c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY())*(c.getCenter().getY() - p.getY());
    if(ret == c.getR()*c.getR()){
        cout << "on the circle" << endl;
    }
    if(ret > c.getR()*c.getR()){
        cout << "out the circle" << endl;
    }
    if(ret < c.getR()*c.getR()){
        cout << "in the circle" << endl;
    }


}

int main(){

    Point cp;
    cp.setX(1);
    cp.setY(20);
    Circle c;
    c.setCenter(cp);
    c.setR(12);

    Point p;
    p.setX(5);
    p.setY(17);

    check(c, p);

    system("pause");
    return 0;

}
