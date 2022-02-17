#include "Statistics.h"
#include <iostream>

using namespace std;

double getMedian(const int double_reverse[], const int size)
{

    int copy_array[size*2];
    for(int i = 0; i < size*2; i++)
        copy_array[i] = double_reverse[i];
    //uses bubble sort algorithm to place the every "large" number at the back of the array in order to sort small to large
    for(int i=0;i<size*2;i++)
	{	
		for(int j=i+1;j<size*2;j++)
		{
			if(copy_array[i]>copy_array[j])     
			{
			    int min;
				min  = copy_array[i];
				copy_array[i] = copy_array[j];
				copy_array[j] = min;
			}
		}
	}
    //since the double_reverse array will always be even since its origrnal*2, we can take avg of the two middle values of the arry to get median    

    int firsthalf_median = copy_array[size*2/2]; //gets the first middle value
    int secondhalf_median = copy_array[size*2/2 - 1]; //gets second middle value
    double even_median = (double) (firsthalf_median + secondhalf_median) / 2; //takes avg of 2 middle vals
    return even_median; 
}
int getLargest(const int double_reverse[], const int size)
{
    //iterates over the array to check which is largest by comparing large value to each element in array
    int largest = double_reverse[0];
    for (int i = 1; i < size*2; i++)
        if (double_reverse[i] > largest)
            largest = double_reverse[i]; 
    return largest;
}