
#include <iostream>
#include <fstream>
#include "FileFunctions.h"
#include "Statistics.h"
using namespace std;
int *DoubleAndReverse(int *list, int size)
{
    int *dar = new int[2 * size]; //creates an array of size*2 in the heap for original array + reversed array
    int reverse[size]; //reverse array
    for(int i = 0; i <size; i++)
        reverse[i] = list[size-1-i]; //store elements from original array in reveresed to reverse array
    for(int i = 0; i < size; i ++)
        dar[i] = list[i]; //stores origianl elemeents 
    for(int i = size; i < size*2; i++)
        dar[i] = reverse[i-size]; //stores remaining reversed elemenets
    return dar;
}

int main()
{
    char filename[1000];
    int myArray[1000];
    int N, M;
    int size; //the size of array

    cout << "Please enter filename: "<<endl;
    cin >> filename;
    cout<<"How many integers do you want in your file"<<endl;
    cin>>N;
    cout<<"Whats the largest number"<<endl;
    cin>>M;

    WriteRandomData(N, M, filename);
    ReadData(filename, size, myArray);
    
    int *double_reverse = DoubleAndReverse(myArray, size);
    double median = getMedian(double_reverse, size);
    int largest = getLargest(double_reverse, size);
    cout << "Writing file: " << filename << endl;
    cout << "Reading file: " << filename << endl;
    cout << "Array size: " << size << endl;
    cout << "Doubled and Reversed is [";
    for (int i = 0; i <size*2-1; i++)
        cout << double_reverse[i] << " " ;
    cout << double_reverse[2 * size - 1] << "]" << endl;

    cout << "Median is: " << median << endl;
    cout << "Largest is: " << largest << endl;

    return 0;
}
