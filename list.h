#ifndef LIST_H
#define LIST_H

struct stack_item {
    int data;
    stack_item* next;

    stack_item(int value) : data(value), next(nullptr) {}
};





void show_menu(void);
void push(int value);
void pop();
void display();
void delete_all();


#endif