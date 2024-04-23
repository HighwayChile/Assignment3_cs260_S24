#include <iostream>
#include <limits>
// I learned that I can add list.cpp and then just compile the driver file
#include "list.cpp"
#include "list.h"

// I am seeing this form of namespace declaration 
// all over the web
using namespace std;

// driving function
int main() {
    // introduction
    cout << "Stack stuff &" << endl;
    cout << "Linked list stuff" << endl;
    cout << "\nThis linked list takes a struct and makes a new node each time you tell it to queue" << endl;
    cout << "\nINTEGERS ONLY!" << endl;

    while (true) {
        // this menu is from assignment 1
        int menu1;
        // added these to avoid magic numbers
        int menu_start = 1;
        int menu_end = 6;
        // newline helps with readability during runtime
        cout << "\n" << endl;

        // all functions located in list.cpp
        show_menu();

        if (cin >> menu1 && menu1 >= menu_start && menu1 <= menu_end) {
            switch (menu1) {
            case 1:
                // init var and accept input (this is the stack item)
                int value;
                cout << "Enter value to add: ";
                cin >> value;
                // calls function and pushes value
                push(value);
                break;
            // the rest of this code is much of the same
            case 2:
                cout << "Removing item from bottom..." << endl;
                pop_bottom();
                break;
            case 3:
                cout << "Removing item from top..." << endl;
                pop();
                break;
            case 4:
                cout << "Current queue: ";
                display();
                break;
            case 5:
                cout << "Clearing queue..." << endl;
                delete_all();
                break;
            case 6:
                cout << "Quitting..." << endl;
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
