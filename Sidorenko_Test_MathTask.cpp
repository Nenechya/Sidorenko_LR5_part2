#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "C:\Important\Sidorenko_IST\Sidorenko_LR5\Sidorenko_LR5_part2\Sidorenko_MathTask.h"

using namespace cute;
using namespace std;
void testMiddle_grade()
{
    double a = 3.5;
    double b = 4.6;
    double c = 2.7;
    double expected = 3.6;
    double actual = middle_grade(a, b, c);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Empty()
{
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Letter()
{
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_DigitLetter()
{
    string str = "5a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void testUserInput_Negative()
{
    string str = "-5";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

void test_middle_grade()
{
    double m {4.1};
    double c {4.3};
    double p {3.9};
    double expected = 4.1;
    double actual = middle_grade(m, c, p);
    ASSERT_EQUAL(expected, actual);
}

int main()
{
    suite s;
    s.push_back(CUTE(testMiddle_grade));
    s.push_back(CUTE(testUserInput_DigitLetter));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_Negative));
    s.push_back(CUTE(test_middle_grade));
    ide_listener<> listener;
    makeRunner(listener)(s, "All Tests");
    
    return 0;
}