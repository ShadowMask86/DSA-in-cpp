// Write a C++ program to implement a queue using an array and perform ENQUEUE, DEQUEUE, PEEK and DISPLAY operations.

#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = 0;
int rear = -1;

// Insert an element
void enqueue(int value){
    if(rear == SIZE - 1){
        cout << "Queue Overflow\n";
    } else {
        rear++;
        queue[rear] = value;
        cout << value << " inserted into queue\n";
    }
}

// Remove am element
void dequeue(){
    if(front > rear){
        cout << "Queue Underflow\n";
    } else {
        cout << queue[front] << " removed from queue\n";
        front++;

        // Reset when queue becomes empty
        if(front > rear){
            front = 0;
            rear = -1;
        }
    }
}

// View the first element
void peek(){
    if(front > rear){
        cout << "Queue is empty!\n";
    } else {
        cout << "Front element:- " << queue[front] << endl;
    }
}

// Display queue elements
void display(){
    if(front > rear){
        cout << "Queue is empty!\n";
    } else {
        cout << "Queue elements:- ";

        for(int i = front; i <= rear; i++){
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    peek();
    dequeue();
    display();

    return 0;
}
