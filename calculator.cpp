#include <bits/stdc++.h>
using namespace std;

// Helper function for input
void input(int &a, int &b) {
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

// Operations
void add() {
    int a, b;
    input(a, b);
    cout << "Result = " << a + b << endl;
}

void subtract() {
    int a, b;
    input(a, b);
    cout << "Result = " << a - b << endl;
}

void multiply() {
    int a, b;
    input(a, b);
    cout << "Result = " << a * b << endl;
}

void divide() {
    int a, b;
    input(a, b);

    if (b != 0)
        cout << "Result = " << (double)a / b << endl;
    else
        cout << "Error: Cannot divide by zero!" << endl;
}

void largest() {
    int a, b;
    input(a, b);

    cout << "Largest = " << max(a, b) << endl;
}

void smallest() {
    int a, b;
    input(a, b);

    cout << "Smallest = " << min(a, b) << endl;
}


int main() {

    int ch;
    char cont;

    do {
        cout << "\n===== CALCULATOR MENU =====\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Largest\n";
        cout << "6. Smallest\n";
        cout << "7. Exit\n";

        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1: add(); break;
            case 2: subtract(); break;
            case 3: multiply(); break;
            case 4: divide(); break;
            case 5: largest(); break;
            case 6: smallest(); break;

            case 7:
                cout << "Exiting program...\n";
                return 0;

            default:
                cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "Program ended.\n";

    return 0;
}