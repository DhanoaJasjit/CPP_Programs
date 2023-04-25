// Prime Number Program in C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<vector>

using namespace std;
// global_constants.cpp
// LNK2019 expected
/*void test(void);
const int lnktest1 = 0;

int main() {
    test();
}
// global_constants_2.cpp
// compile with: global_constants.cpp
extern int lnktest1;

void test() {
    int i = lnktest1;   // LNK2019
}*/

class Solution {
public:
    vector<double> convertTemperature(double Celsius) {
        double Kelvin = Celsius + 273.15;
        double Fahrenheit = Celsius * 1.80 + 32.00;
        vector<double> v;
        v.push_back(Kelvin);
        v.push_back(Fahrenheit);
        return v;

    }
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
