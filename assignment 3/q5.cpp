#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    return stack[top--];
}

int main() {
    char exp[SIZE];
    cout << "Enter Postfix: ";
    cin >> exp;
    for (int i = 0; i < strlen(exp); i++) {
        char c = exp[i];
        if (isdigit(c)) {
            push(c - '0');
        } else {
            int b = pop();
            int a = pop();
            switch (c) {
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
                case '^': push(pow(a, b)); break;
            }
        }
    }
    cout << "Result: " << pop() << "\n";
    return 0;
}
