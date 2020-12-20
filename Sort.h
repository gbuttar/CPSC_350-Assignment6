
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Sort {
public:
    Sort();
    ~Sort();

    void bubbleSort(double array[], int size);
    void insertionSort(double array[], int size);
    void quickSort(double array[], int a, int b);
    void selectionSort(double array[], int size);
    void printArray(int array[], int size);
    void print();

};
