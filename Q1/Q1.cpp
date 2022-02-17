#define _USE_MATH_DEFINES
#include "pa2Functions.h"
#include <iostream>
#include <cctype>
#include <ctype.h>
#include <math.h>
#include <cmath>


using namespace std;
extern const int ENTERIES = 10;

int main() {
    
    int count = 0;
    while(count != 10) 
    {
        char user_input;
        cout<<"Please enter command code: "<<endl;
        cin>>user_input;
        if (checkCode(user_input))
            {
                char command = toupper(user_input); 
                switch(command) 
                {
                    case 'F':
                        int fnum;
                        cout<<"Please enter command parameters: ";
                        cin>>fnum;
                        cout<<factorial(fnum)<<endl;
                        break;
                    case 'B':
                        int fib_num;
                        cout<<"Please enter command parameters: ";
                        cin>>fib_num;
                        cout<<fibonacci(fib_num)<<endl;
                        break;
                    case 'R': 
                        
                        double first_sq, last_sq, delta_sq;
                        cout<<"Please enter command parameters: ";
                        cin>>first_sq>>last_sq>>delta_sq;
                        if (delta_sq<= 0 || first_sq > last_sq) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"Square root of " <<findSqrtValue(first_sq)<<endl;
                            int counter_sq = 1;
                            for (int i = 1; i < last_sq ; i++) 
                            {
                                if (counter_sq  == ENTERIES)
                                {
                                    break;
                                }
                                double result_sq = (first_sq + delta_sq * i);
                                if (first_sq + delta_sq*i > last_sq)
                                {
                                    break;
                                }
                                cout<<"Square root of "<<findSqrtValue(result_sq)<<endl;
                                counter_sq++;
                            }
                        }
                        break;
                    case 'U':
                        double first_square, last_square, delta_square;
                        cout<<"Please enter command parameters: ";
                        cin>>first_square>>last_square>>delta_square;
                        if (delta_square<= 0 || first_square > last_square) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"Area of square of " <<areaSquare(first_square)<<endl;
                            int counter_square = 1;
                            for (int i = 1; i < last_square ; i++) 
                            {
                                if (counter_square  == ENTERIES)
                                {
                                    break;
                                }
                                double result_square = (first_square + delta_square * i);
                                if (first_square + delta_square*i > last_square)
                                {
                                    break;
                                }
                                cout<<"Area of square of "<<areaSquare(result_square)<<endl;
                                counter_square++;
                            }
                        }
                        break;
                    case 'C':
                        double first_circle, last_circle, delta_circle;
                        cout<<"Please enter command parameters: ";
                        cin>>first_circle>>last_circle>>delta_circle;
                        if (delta_circle<= 0 || first_circle > last_circle) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"Area of circle of " <<areaCircle(first_circle)<<endl;
                            int counter_circle = 1; 
                            for (int j = 1; j < last_circle ; j++) 
                            {
                                if (counter_circle == ENTERIES) 
                                {
                                    break;
                                }
                                double result_circle = (first_circle + delta_square * j);
                                if (first_circle + delta_circle*j > last_circle)
                                {
                                    break;
                                }
                                cout<<"Area of circle of "<<areaCircle(result_circle)<<endl;
                                counter_circle++;
                            }
                        }
                        break;
                    case 'D':
                        int first, last;
                        cout<<"Please enter command parameters: ";
                        cin>>first>>last;
                        if (first % 2 == 0) 
                        {
                            int counter_odd = 0;
                            for(int i = first; i <= last; i+=2) 
                            {
                                if (counter_odd == ENTERIES)
                                    break;
                                if (findNextOddValue(i) < last)
                                    cout<<findNextOddValue(i)<<endl;
                                counter_odd++;
                            }
                        }
                        else 
                        {
                            cout<<first<<endl;
                            int counter_odd2 = 1;
                            for(int i = first; i < last; i+=2)
                            {
                                if (counter_odd2 == ENTERIES)
                                    break;
                                if (findNextOddValue(i) < last)
                                    cout<<findNextOddValue(i)<<endl;
                                counter_odd2++;
                            }
                        }
                        break;
                    case 'E':
                        int first_d, last_d;
                        cout<<"Please enter command parameters: ";
                        cin>>first_d>>last_d;
                        if (first_d % 2 == 0) 
                        {
                            int counter_even = 1;
                            cout<<first_d<<endl;
                            for (int i = first_d; i <= last_d; i+=2 )
                            {
                                if(counter_even == ENTERIES)
                                    break;
                                if(findNextEvenValue(i) <= last_d)
                                    cout<<findNextEvenValue(i)<<endl;
                                counter_even++;
                            }
                        }
                        else {
                            int counter_even2 = 0;
                            for(int i = first_d; i < last_d; i+=2)
                            {
                                if(counter_even2 == ENTERIES)
                                    break;
                                if(findNextEvenValue(i) < last_d)
                                    cout<<findNextEvenValue(i)<<endl;
                                counter_even2++;
                            }                       
                        }
                        break;
                    case 'S':
                        double first_sin, last_sin, delta_sin; 
                        cout<<"Please enter command parameters: ";
                        cin>>first_sin>>last_sin>>delta_sin;
                        if (delta_sin<= 0 || first_sin > last_sin) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"The sin of " <<doMath(first_sin, 'S')<<endl;
                            int counter_sin = 1;

                            for (int i = 1; i < last_sin ; i++) 
                            {
                                if (counter_sin  == ENTERIES)
                                {
                                    break;
                                }
                                double result_sin = (first_sin + delta_sin * i);
                                if (first_sin + delta_sin*i > last_sin)
                                {
                                    break;
                                }
                                cout<<"The sin of "<<doMath(result_sin,'S')<<endl;
                                counter_sin++;
                            }
                        }
                        break;
                    case 'N':
                        double first_cos, last_cos, delta_cos; 
                        cout<<"Please enter command parameters: ";
                        cin>>first_cos>>last_cos>>delta_cos;
                        if (delta_cos<= 0 || first_cos > last_cos) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"The cos of " <<doMath(first_cos, 'N')<<endl;
                            int counter_cos = 1;

                            for (int i = 1; i < last_cos ; i++) 
                            {
                                if (counter_cos  == ENTERIES)
                                {
                                    break;
                                }
                                double result_cos = (first_cos + delta_cos * i);
                                if (first_cos + delta_cos*i > last_cos)
                                {
                                    break;
                                }
                                cout<<"The cos of "<<doMath(result_cos,'N')<<endl;
                                counter_cos++;
                            }
                        }
                        break;
                    case 'X':
                        double first_ex, last_ex, delta_ex; 
                        cout<<"Please enter command parameters: ";
                        cin>>first_ex>>last_ex>>delta_ex;
                        if (delta_ex<= 0 || first_ex > last_ex) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"The exponential of " <<doMath(first_ex, 'X')<<endl;
                            int counter_ex = 1;

                            for (int i = 1; i < last_ex ; i++) 
                            {
                                if (counter_ex  == ENTERIES)
                                {
                                    break;
                                }
                                double result_ex = (first_ex + delta_ex * i);
                                if (first_ex + delta_ex*i > last_ex)
                                {
                                    break;
                                }
                                cout<<"The exponential of "<<doMath(result_ex,'X')<<endl;
                                counter_ex++;
                            }
                        }
                        break;
                    case 'L':
                        double first_log, last_log, delta_log; 
                        cout<<"Please enter command parameters: ";
                        cin>>first_log>>last_log>>delta_log;
                        if (delta_log<= 0 || first_log > last_log) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"The exponential of " <<doMath(first_log, 'X')<<endl;
                            int counter_log = 1;

                            for (int i = 1; i < last_log ; i++) 
                            {
                                if (counter_log  == ENTERIES)
                                {
                                    break;
                                }
                                double result_log = (first_log + delta_log * i);
                                if (first_log + delta_log*i > last_log)
                                {
                                    break;
                                }
                                cout<<"The exponential of "<<doMath(result_log,'X')<<endl;
                                counter_log++;
                            }
                        }
                        break;
                    case 'Y':
                        double first_Ny, last_Ny, delta_Ny; 
                        cout<<"Please enter command parameters: ";
                        cin>>first_Ny>>last_Ny>>delta_Ny;
                        if (delta_Ny<= 0 || first_Ny > last_Ny) 
                        {
                            cout<<"No computation needed"<<endl; 
                        }
                        else 
                        {
                            cout<<"The NyanCatValue of " <<findNyanCatValue(first_Ny)<<endl;
                            int counter_Ny = 1;

                            for (int i = 1; i < last_Ny ; i++) 
                            {
                                if (counter_Ny  == ENTERIES)
                                {
                                    break;
                                }
                                double result_Ny = (first_Ny + delta_Ny * i);
                                if (first_Ny + delta_Ny*i > last_Ny)
                                {
                                    break;
                                }
                                cout<<"The NyanCatValue of "<<findNyanCatValue(result_Ny)<<endl;
                                counter_Ny++;
                            }
                        }
                        break;
                    

                    case 'Q':
                        cout<<"Goodbye"<<endl;
                        exit (EXIT_FAILURE);
                }
            }

        else 
        {
            cout<<"Invalid command code"<<endl;
            count+=1;
        }
    }
}

