// Fibonaccci Series in C++ without Recursion.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*Fibonacci Series in C++: In case of fibonacci series, next number is the sum of previous two numbers for example
0, 1, 1, 2, 3, 5, 8, 13, 21 etc. The first two numbers of fibonacci series are 0 and 1.*/

#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3, i, number;
    cout << "Enter Number Of Elements In The Fibonacci Series" << endl;
    cin >> number;
    cout << "Enter First Number :" << endl;
    cin >> n1;
    cout << "Enter Second Number :" << endl;
    cin >> n2;
    cout << n1 << " " << n2 << " "; //printing n1 and n2 in starting of the series    

        for (i = 1; i <= number; i++) {
            n3 = n1 + n2;
            cout << n3 << " ";
            n1 = n2;
            n2 = n3;

    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
