#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 100

int main() {
    char str[SIZE];
    char stack[SIZE];
    int top = -1;
    cout << "Enter a string: ";
    cin >> str;
    int n = strlen(str);
    for (int i = 0; i < n; i++) stack[++top] = str[i];
    cout << "Reversed: ";
    while (top != -1) cout << stack[top--];
    cout << "\n";
    return 0;
}
