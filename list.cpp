#include <iostream>
#include "list.h"

using namespace std;

// initialize the stack_item node and make it point to nullptr.
stack_item* head = nullptr;

// user menu
void show_menu(void) {
    cout << "What would you like to do? \n"
    "1. Enqueue item \n"
    "2. Dequeue item \n"
    "3. Remove item from top\n"
    "4. Display queue\n"
    "5. Clear queue \n"
    "6. Quit \n"  << endl;
}

// case 4
// displays the current linked list
void display() {
    // makes a temp pointer that points at the head
    stack_item* temp = head;
    // if the temp pointer doesn't point at NULL, print the data that is being pointed to, then a space
    while (temp != nullptr) {
        cout << temp->data << " ";
        // temp shifts to pointing at next node
        temp = temp->next;
        }
    // endline
    cout << endl;
}

// case 1
// push to top
void push(int value) {
    // creates a new stack_item node with the value from user
    stack_item* new_item = new stack_item(value);
    // makes next pointer point to head of next node
    new_item->next = head;
    // the new head is now the new (added) node
    head = new_item;
}

// case 3
// pop from top
void pop() {
    // if not empty, the temp pointer is equal to the head, then the 
    // head is set as equal to the value at "next"
    if (head != nullptr) {
        stack_item* temp = head;
        head = head->next;
        // clear temp pointer
        delete temp;
    }
}

// case 2
void pop_bottom() {
    // if the list is empty or just has one node, do a normal pop
    if (head== nullptr || head->next == nullptr) {
        pop();
        return;
    }
    
    // traverse list to find the penultimate node
    // this logic was originally learned in C, but I did need some
    // help from chatGPT on this. I started from an old C program I made.
    stack_item* prev = head;
    // So, the value at the next, next pointer is the one we want.
    while (prev->next->next != nullptr) {
        // then we set that equal to the value stored at the previous node's "next"
        prev = prev->next;
    }

    // remove the last node
    stack_item* last = prev->next;
    prev->next = nullptr;
    delete last;
}

// case 5
void delete_all() {
    // while not an empty list, delete all.
    // This runs a loop to delete all items(nodes)
    while (head != nullptr) {
        pop();
    }
}