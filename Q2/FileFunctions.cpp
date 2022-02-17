#include <iostream>
#include <fstream>
#include <stdlib.h>  
#include <time.h>  
#include "FileFunctions.h"
using namespace std;
void WriteRandomData(int N, int M, const char *filename)
{

    ofstream file;
    file.open(filename); //opens users file
    srand(time(NULL));   //sync with time
    for (int i = 0; i < N; i++)
    {
        int random = rand() % M; //pick a random number from 0 to M
        file << random << " ";
    }
    file.close(); //close users file
}

//read data and find size
void ReadData(const char *filename, int &size, int myArray[])
{
    size = 0;
    ifstream file;
    file.open(filename); //opens users file
    while (!file.eof())  //file is read until end of the line of file
        file >> myArray[size++];
    size--;
}

