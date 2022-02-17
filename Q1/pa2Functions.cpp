#define _USE_MATH_DEFINES
#include "pa2Functions.h"
#include <iostream>
#include <ctype.h>
#include <math.h>
#include <cmath>

extern const int ENTERIES;
using namespace std;
void initialize()
{
    cout << "EC327: Introduction to Software Engineering" << endl;
    cout << "Fall 2021" << endl;
    cout << "Programming Assignment 2" << endl;
    cout << "Value of Entries is: 10" << endl;
}
bool checkCode(char x)
{
    if (isalpha(x))
    { //checks if user_input is a letter or not
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

int factorial(int number)
{
    int x = 1;
    for (int i = 1; i <= number; i++)
    {
        x *= i; //takes 1 and mutliples by n + 1 until n
    }
    return x;
}

int fibonacci(int index)
{
    int first = 0;
    int second = 1;
    int fib = 0;
    if (index < 2)
    {
        return fib;
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            fib = first + second;
            first = second;
            second = fib;
        }
        return fib;
    }
}
double findSqrtValue(double number)
{
    return sqrt(number);

}
double naturalLog(double number)
{
    
    return log(number);
}
double areaCircle(double radius)
{
    double area = M_PI * pow(radius, 2);
    return area;
}
double areaSquare(double side)
{
    double area = side * side;
    return area;
}

int findNextOddValue(int num)
{
    if (num % 2 == 0)
    {
        num = num + 1;
    }
    else
    {
        num = num + 2;
    }
    return num;
}
int findNextEvenValue(int num)
{

    if (num % 2 == 0)
    {
        num = num + 2;
    }
    else
    {
        num = num + 1;
    }
    return num;
}
double findNyanCatValue(double myNum)
{
    double val = pow((4 * myNum), myNum) + myNum + 10;
    return val;
}
double doMath(double number, char user){
    if (user == 'S')
        return sin(number);
    else if (user == 'N')
        return cos(number);
    else
        return exp(number);
}


