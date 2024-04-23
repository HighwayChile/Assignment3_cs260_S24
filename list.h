#ifndef LIST_H
#define LIST_H

// my linked list struct
struct stack_item {
    // this is the node data
    int data;
    // this is the part that points to the next node
    stack_item* next;
    // I got this part from chat GPT, it initializes the node,
    // then it points towards a null pointer
    stack_item(int value) : data(value), next(nullptr) {}
};

// function declarations
void show_menu(void);

void push(int value);
void pop_bottom();
void pop();
void display();
void delete_all();

#endif