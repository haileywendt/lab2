// p2dash1.cpp : This file contains the main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    cout << "Hello, my name is Hal!" << endl;
    cout << "What would you like me to do?" << endl;
    string user_input;
    getline(cin, user_input);
    cout << "I am sorry, I cannot do that.";

    cout << "Hello, my name is Hal!" << endl;
    cout << "What is your name?" << endl;
    string user_name;
    getline(cin, user_name);
    cout << "Hello, " << user_name << ". I am glad to meet you!" << endl;

    double userNumber = 0;
    cout << "Enter measurement in meters: " << endl;
    cin >> userNumber;
    double inchesNumber = (userNumber * 39.37);
    cout << "Converted to inches: " << inchesNumber << endl;
    double feetNumber = (userNumber * 3.281);
    cout << "Converted to feet: " << feetNumber << endl;
    double milesNumber = (userNumber / 1609);
    cout << "Converted to miles: " << milesNumber << endl;
    
    int length = 0;
    int width = 0;
    cout << "Enter length: " << endl << "Enter width: " << endl;
    cin >> length >> width;
    int area = (length * width);
    cout << "Area: " << area << endl;
    int perimeter = ((length * 2) + (width * 2));
    cout << "Perimeter: " << perimeter << endl;
    int diagonal = (sqrt(length * length + width * width));
    cout << "Diagonal: " << diagonal << endl;
}

