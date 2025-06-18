#include <iostream>
#include <string>

using namespace std;

#define MAX 10

typedef struct Peo
{
    string name;
    string gender;
    int age;
    string telnum;
    string address;
}Peo;

typedef struct Contact
{
    struct Peo person[MAX];
    int count;
}Contact;


void showMenu();
void add(Contact* ps);
void show(Contact* ps);
void del(Contact* ps);
int checkExist(Contact* ps, string name);
void del(Contact* ps);
void search(Contact* ps);
void modify(Contact* ps);
void empty(Contact* ps);



