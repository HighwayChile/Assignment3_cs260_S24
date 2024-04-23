#include <iostream>
#include "list.h"
// #include "driver.cpp"

using namespace std;

stack_item* head = nullptr;

void show_menu(void) {
    cout << "What would you like to do? \n"
    "1. Inspect stack \n"
    "2. Add item to top\n"
    "3. Remove item from bottom \n"
    "4. Clear Stack \n"
    "5. Quit \n"  << endl;
}

// case 1
void display() {
    stack_item* temp = head;
    while (temp != nullptr) {
    std::cout << temp->data << " ";
    temp = temp->next;
    }
    std::cout << std::endl;
}


// case 2
void push(int value) {
    stack_item* new_item = new stack_item(value);
    new_item->next = head;
    head = new_item;
}


// case 3
void pop() {
    if (head != nullptr) {
        stack_item* temp = head;
        head = head->next;
        delete temp;
    }
}


// case 4
void delete_all() {
    while (head != nullptr) {
        pop();
    }
}