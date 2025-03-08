#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, result;
    char operation, userChoice;

    do {
        cout << "==== BASIC CALCULATOR ====" << endl;
        cout << "Enter the first number: ";
        cin >> firstNumber;
        cout << "Enter the second number: ";
        cin >> secondNumber;

        // Ensure the user inputs a valid operation
        // Memastikan pengguna memasukkan operasi yang valid
        do {
            cout << "Enter an operation (+, -, *, /, %): ";
            cin >> operation;
        } while (operation != '+' && operation != '-' && operation != '*' && operation != '/' && operation != '%');

        // Perform calculations based on the chosen operation
        // Melakukan perhitungan berdasarkan operasi yang dipilih
        switch (operation) {
            case '+':
                result = firstNumber + secondNumber;
                cout << firstNumber << " + " << secondNumber << " = " << result << endl;
                break;
            case '-':
                result = firstNumber - secondNumber;
                cout << firstNumber << " - " << secondNumber << " = " << result << endl;
                break;
            case '*':
                result = firstNumber * secondNumber;
                cout << firstNumber << " * " << secondNumber << " = " << result << endl;
                break;
            case '/':
                if (secondNumber == 0) {
                    cout << "Error: Division by zero is not allowed!" << endl; // Error: Pembagian oleh nol tidak diperbolehkan!
                } else {
                    cout << firstNumber << " / " << secondNumber << " = " << (double)firstNumber / secondNumber << endl;
                }
                break;
            case '%':
                if (secondNumber == 0) {
                    cout << "Error: Modulo operation with zero is invalid!" << endl; // Error: Operasi modulo dengan nol tidak valid!
                } else {
                    cout << firstNumber << " % " << secondNumber << " = " << firstNumber % secondNumber << endl;
                }
                break;
        }

        // Ask the user if they want to continue
        // Menanyakan apakah pengguna ingin melanjutkan
        cout << "Do you want to calculate again? (y/n): ";
        cin >> userChoice;

    } while (userChoice == 'y' || userChoice == 'Y');

    cout << "==== PROGRAM TERMINATED ====" << endl;
    return 0;
}

