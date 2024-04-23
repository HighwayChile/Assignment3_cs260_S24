#include <iostream>
#include <limits>
// #include "list.cpp"
#include "list.h"

using namespace std;


int main() {

    // intro
    cout << "Stack stuff &" << endl;
    cout << "Linked list stuff" << endl;

    while (true) {
        // stack_item *head;
        int menu1;
        int menu_start = 1;
        int menu_end = 5;

        cout << "\n" << endl;

        show_menu();

        if (cin >> menu1 && menu1 >= menu_start && menu1 <= menu_end) {
            switch (menu1) {
            case 1:
                cout << "Current stack: ";
                display();
                break;
            case 2:
                int value;
                cout << "Enter value to add: ";
                cin >> value;
                push(value);
                break;
            case 3:
                cout << "Removing item from top" << endl;
                pop();
                break;
            case 4:
                cout << "Clearing stack" << endl;
                delete_all();
                break;
            case 5:
                cout << "Quitting" << endl;
                system("pause");
                return 0;
            default:
                break;
            }
        } else {
            cout << "Please choose a valid menu choice" << endl;
            cin.clear();
            // this prevents string input
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
    return 0;
}
