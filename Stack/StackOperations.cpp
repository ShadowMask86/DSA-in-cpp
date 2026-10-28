// Write a C++ program to implement a stack using an array and perform PUSH, POP, PEEK and DISPLAY operations.

#include <iostream>
using namespace std;

#define SIZE 5

int stack[SIZE];
int top = -1;

// Insert an element
void push(int value){
    if(top == SIZE - 1){
        cout << "Stack Overflow!\n";
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed into stack\n";
    }
}

// Remove the top element
void pop(){
    if(top == -1){
        cout << "Stack Underflow!\n";
    } else {
        cout << stack[top] << " popped from stack\n";
        top--;
    }
}

// View the top element
void peek(){
    if(top == -1){
        cout << "Stack is empty\n";
    } else{
        cout <<"Top element:- " << stack[top] << endl;
    }
}

// Display all elements
void display() {
    if(top == -1){
        cout << "Stack is empty!\n";
    } else {
        cout << "Stack elements (top to bottom):- ";

        for (int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }

        cout << endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);

    display();
    peek();
    pop();
    display();

    return 0;
}  
