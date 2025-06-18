#include "contact.h"

int main(){

    int select = 0;
    Contact con;
    con.count = 0;

    while(true){

        showMenu();
        cin >> select;
        switch(select){

            case 1:         //add
                add(&con);
                break;
            case 2:         //show
                show(&con);
                break;
            case 3:         //delete
                del(&con);
                break;
            case 4:         //search
                search(&con);
                break;
            case 5:         //modify
                modify(&con);
                break;
            case 6:         //empty
                empty(&con);
                break;
            case 0:         //exit
                cout << "Thanks for your use!" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "error input" << endl;
                break;

        }

    }
    
    

    system("pause");
    return 0;

}

