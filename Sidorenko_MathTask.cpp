#include <iostream>
#include "C:\Important\Sidorenko_IST\Sidorenko_LR5\Sidorenko_LR5_part2\Sidorenko_MathTask.h"

using namespace std;

int main()
{
    double math{0}, phys{0}, chem{0};
    EnterDigit(math, "Input math grade:");
    EnterDigit(phys, "Input physics grade:");
    EnterDigit(chem, "Input chemestry grade:");
    double m_g = middle_grade(math, phys, chem);
    cout << "Middle grade is: " << m_g << endl;
}