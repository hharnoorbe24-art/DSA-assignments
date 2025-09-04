#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 100

int main() {
    char exp[SIZE], stack[SIZE];
    int top = -1;
    cout << "Enter expression: ";
    cin >> exp;
    int n = strlen(exp);
    for (int i = 0; i < n; i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            stack[++top] = exp[i];
        } else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (top == -1) {
                cout << "Not Balanced\n";
                return 0;
            }
            char c = stack[top--];
            if ((exp[i] == ')' && c != '(') || 
                (exp[i] == '}' && c != '{') || 
                (exp[i] == ']' && c != '[')) {
                cout << "Not Balanced\n";
                return 0;
            }
        }
    }
    if (top == -1) cout << "Balanced\n";
    else cout << "Not Balanced\n";
    return 0;
}
