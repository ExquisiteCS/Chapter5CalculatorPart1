// Chapter5CalculatorPart1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int choice;

    double num1;
    double num2;
    double result = 1;

    do{ 

    cout << "Welcome to the Visual Studio calculator! =)" << endl;
    cout << "Enter a digit corresponding to the operation" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Power" << endl;
    cout << "7. Exit Code" << endl;

    cin >> choice;

    cout << "Please enter two numbers with a space between" << endl;
    cin >> num1 >> num2;

    switch (choice) {

    case 1: cout << "Addition";

        cin >> num1 >> num2;
        result = num1 + num2;
        break;

    case 2: cout << "Subtraction";
        cin >> num1 >> num2;
        result = num1 - num2;
        break;

    case 3: cout << "Multiplication";
        cin >> num1 >> num2;
        result = num1 * num2;
        break;

    case 4: cout << "Division";
        cin >> num1 >> num2;
        result = num1 / num2;
        break;

    case 5: cout << "Modulo";
        cin >> num1 >> num2;
        result = num1 + num2;
        break;

    case 6: cout << "Power";
        cout << "Enter your desired numbers" << endl;
        cin >> num1 >> num2;
        result = num1 + num2;
        break;

    default: cout << "Exiting Program";
        break;
    }
    cout << "It looks like your answer is..." << result << endl;
}   while (repeat);

cout << "It looks like your answer is..." << compare_three_way_result << endl;
