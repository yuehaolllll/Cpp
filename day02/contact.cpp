#include "contact.h"

void showMenu(){

    cout << "*************************" << endl;
    cout << "*****    1、add    *****" << endl;
    cout << "*****    2、show   *****" << endl;
    cout << "*****    3、delete *****" << endl; 
    cout << "*****    4、search *****" << endl; 
    cout << "*****    5、modify *****" << endl; 
    cout << "*****    6、empty  *****" << endl; 
    cout << "*****    0、exit   *****" << endl; 
    cout << "*************************" << endl;

}

void add(Contact* ps){

    cout << "please input name:" << endl;
    cin >> ps->person[ps->count].name;
    cout << "please input gneder:" << endl;
    cin >> ps->person[ps->count].gender;
    cout << "please input age:" << endl;
    cin >> ps->person[ps->count].age;
    cout << "please input telephone number:" << endl;
    cin >> ps->person[ps->count].telnum;
    cout << "please input address:" << endl;
    cin >> ps->person[ps->count].address;

    ps->count++;

    system("pause");
    system("cls");

}

void show(Contact* ps){

    if(ps->count == 0){
        cout << "contact is empty" << endl;
    }

    int i = 0;
    for(i = 0; i < ps->count; i++){
        cout << ps->person[i].name << "\t";
        cout << ps->person[i].gender << "\t";
        cout << ps->person[i].age << "\t";
        cout << ps->person[i].telnum << "\t";
        cout << ps->person[i].address << endl;
    }

    system("pause");
    system("cls");

}

int checkExist(Contact* ps, string name){

    
    for(int i = 0; i < ps->count; i++){
        if(ps->person[i].name == name){
            return i;
        }
    }

    return -1;

}

void del(Contact* ps){

    // 检查是否存在
    string name;
    cout << "please input name which you want delete:" << endl;
    cin >> name;
    int ret = checkExist(ps, name);
    if(ret == -1){

        cout << "can't find this person!" << endl;
        
    }else{
        cout << "fint he/she!" << endl;
        // 删除：找到此人的位置，将其后边的往前边覆盖
        for(int i = ret; i < ps->count - 1; i++){

            ps->person[i] = ps->person[i+1];

        }
        ps->count--;

        cout << "delete success!" << endl;

    }

    system("pause");
    system("cls");

}

void search(Contact* ps){

    // 检查是否存在
    string name;
    cout << "please input name which you want search:" << endl;
    cin >> name;
    int ret = checkExist(ps, name);
    if(ret == -1){
        cout << "can't find this person!" << endl;
    }else{

        //输出此人信息
        cout << ps->person[ret].name << "\t";
        cout << ps->person[ret].gender << "\t";
        cout << ps->person[ret].age << "\t";
        cout << ps->person[ret].telnum << "\t";
        cout << ps->person[ret].address << endl;

    }

    system("pause");
    system("cls");

}

void modify(Contact* ps){

    // 检查是否存在
    string name;
    cout << "please input name which you want modify:" << endl;
    cin >> name;
    int ret = checkExist(ps, name);
    if(ret == -1){
        cout << "can't find this person!" << endl;
    }else{

        cout << "please modify name:" << endl;
        cin >> ps->person[ret].name;
        cout << "please modify gneder:" << endl;
        cin >> ps->person[ret].gender;
        cout << "please modify age:" << endl;
        cin >> ps->person[ret].age;
        cout << "please modify telephone number:" << endl;
        cin >> ps->person[ret].telnum;
        cout << "please modify address:" << endl;
        cin >> ps->person[ret].address;

        cout << "modify success!" << endl;

    }

    system("pause");
    system("cls");

}

void empty(Contact* ps){

    ps->count = 0;

    cout << "empty success!" << endl;
    system("pause");
    system("cls");

}

