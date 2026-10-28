// C++ program: Infix to prefix

#include <iostream>
#include <ctype.h>
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
        char ch = str[i];
        if(isdigit(ch)){
            push(ch);
        } else {
            cout << ch;
        }
    }
    
    while(top != -1){
        cout << pop();
    }

    return 0;
}
