
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

//my program takes in user input and recursively prints out a rhombas given that n is between 1-9 by squaring n = n * 10 + 1 of the row.
//for example:
//1^2   ------> 1     n=3
//11^2  ------> 121   n=2
//111^2 ------> 12321 n=1
///using this pattern I was able to increase the 1s depending on what row i am in.
///when n = 0, the recursive function would return to the base case which will print the remaining half of the rhombas.
///This done by using a global vairbale that stores n and subtracts it by one in order to get the next line to print out.
//then using a for loop it prints the remaining bottom half.

long x = (long)0;
long z = (long)1;
int y = 0;
int q = 0;
int qq = 0;
void recursion(int n)
{
    if (n == 0)
    {
        //the base case will print the bottom half of the rhombass
        int val = pow(10, y); //this will help us with extracting each digit
        for (int i = 1; i <= y; i++)
        {
            string s = "  ";
            for (int j = 1; j <= i + 2; j++) //will help with printing the spacing for the bottom half of the rhombass
                cout << s;
            long z = x % val;
            long result = z * z; //used to store z^2
            int w;
            //while loop is used to space the digits in each row.
            while (result > 0)
            {
                w = result % 10;
                cout << w << " ";
                result = result / 10;
            }
            cout << endl;
            val /= 10;
        }
    }
    else
    {
        //this recursive call prints the first half of the rhombas
        x = x * 10 + 1;
        long result_tophalf = x * x; //squares x
        int rem;
        string space = "  "; //used for spacing
        string repeat;
        for (int i = 0; i < q + 1; i++)
            repeat += space;
        cout << repeat;
        q--;
        //this while loop is used to extract each digit and add a space between that digit and the next one
        while (result_tophalf > 0)
        {
            rem = result_tophalf % 10;
            cout << rem << " ";
            result_tophalf = result_tophalf / 10;
        }
        cout << endl;
        n--;          //starts off with n and goes until n = 0
        recursion(n); //recursive function returns 1 to n.
    }
}
int main()
{
    int user_num;
    cout << "Choose a number from 1-9: " << endl;
    cin >> user_num;
    if (user_num <= 9 && user_num >= 1)
    {
        q = user_num;
        qq = user_num - 1;
        y = user_num - 1;
        recursion(user_num);
    }
    else
        cout << "Next time enter a number between 1-9!" << endl;
}