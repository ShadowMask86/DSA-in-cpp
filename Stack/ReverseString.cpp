// C++ program: Reverse an array using a stack

#include <iostream>
using namespace std;

char stack[50]; 
int top = -1;

void push(char ch){
    stack[++top] = ch;
}

char pop(){
    return stack[top--];
}

int main(){
    char str[50];
    cout << "Enter expression:- ";
    cin >> str;
    
    for(int i = 0; str[i] != '\0'; i++){
        push(str[i]); 
    }
    
    while(top != -1){
        cout << pop();
    }

    return 0;
}
