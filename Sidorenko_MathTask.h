#ifndef SIDORENKO_MATHTASK_H
#define SIDORENKO_MATHTASK_H

#include <string>
#include <iostream>
using namespace std;

bool UserInput(string input)
{
    char ENG [] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char eng [] = "abcdefghijklmnopqrstuvwxyz";
    for (auto i : input)
    {
        for (int h = 0;h <= 26;h++)
        {
            if(i == ENG[h]) return false;
            if(i == eng[h]) return false;
        }
    }
    if(input.empty()) return false;
    try
    {
        int number = stoi(input);
    }
    catch(...)
    {
        return false;
    }
    int number = stoi(input);
    if (number < 0) return false;
    return true;
}
void EnterDigit(double& varlink, const string& label)
{
    string raw_input;
    cout << label << " = ";
    getline(cin, raw_input);
    while(!UserInput(raw_input))
    {
        cout << label << " = ";
        getline(cin, raw_input);
    }
    varlink = stod(raw_input);
}

double middle_grade(double num1, double num2, double num3)
{
        return (num1 + num2 + num3) / 3;
}
#endif