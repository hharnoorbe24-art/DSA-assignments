#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}

int main() {
    char infix[SIZE], postfix[SIZE];
    cout << "Enter Infix: ";
    cin >> infix;
    int k = 0;
    for (int i = 0; i < strlen(infix); i++) {
        char c = infix[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
            postfix[k++] = c;
        } else if (c == '(') {
            push(c);
