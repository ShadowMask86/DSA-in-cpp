// Write a C program to convert a decimal number into its binary equivalent using a stack.

#include <iostream>
#include <stack>
using namespace std;

int main(){
    int n, rem;
    stack<int> s;

    cout << "Enter a decimal number:- ";
    cin >> n;
    
    if(n == 0){
        cout << "Binary equivalent:- 0";
        return 0;
    }

    while(n > 0){
        rem = n % 2;
        s.push(rem);
        n = n / 2;
    }

    cout << "Binary equivalent:- ";

    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

    return 0;
}
