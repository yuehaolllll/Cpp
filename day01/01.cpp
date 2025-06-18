#include <iostream>
using namespace std;

int main(){

    // cout <<"hello C++"<< endl;
    // int a = 10;
    // cout << "a = " << a << endl;
    // cout << "a = " << a << endl;
    // int score = 0;
    // cout << "please input a score: " << endl;
    // cin >> score;

    // cout << "score: "<< score << endl;

    // if(score >= 600){
    //     cout << "congradulation!" << endl;
    // }

    // 水仙花数
    int num = 0;
    for(num = 0; num < 1000; num++){
        int ge = num % 10;
        int shi = num / 10 % 10;
        int bai = num / 100;
        if(ge*ge*ge + shi*shi*shi + bai*bai*bai == num){
            cout << "num: " << num << endl;
        } 
    }

    system("pause");

    return 0;

}

