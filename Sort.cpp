#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include "Sort.h"
using namespace std;

Sort::Sort(){
}

Sort::~Sort(){
}

//bubble Sort
void Sort::bubbleSort(double array[], int size){
  clock_t t;
  t = clock();
  cout<<"Bubble Sort"<<endl;
  for(int i =0; i < size; ++i){
    int temp = 0;
    for(int j =0; j < size -1; ++j){
      if(array[j] > array[j+1]){
        temp = array[j+1];
        array[j+1] = array[j];
        array[j] = temp;
      }
    }
  }
  t = clock() - t;
  cout<<"Time took to Sort: "<< t <<endl;
}


//insertionSort
void Sort::insertionSort(double array[], int size){
  clock_t t;
  t = clock();
  cout<<"Insertion Sort"<<endl;
  for(int i = 0; i < size; ++i){
    int temp = array[i];
    int k = i; //shifting
    while(k > 0 && array[k-1] >= temp){
      array[k] = array[k-1];
      --k;
    }
    array[k]=temp;
  }
  t = clock() - t;
  cout<<"Time took to Sort: "<< t <<endl;
}

//quick Sort
void Sort:: quickSort(double array[], int a, int b){
  clock_t t;
  t = clock();
  cout<<"Quick Sort"<<endl;
  if(a >= b){
    return;
  }
  int pivot = array[b]; //using pivots with left and rights scans
  int left = a;
  int right = b-1;
  while(left <= right){
    while(left <= right && array[left] <= pivot){
      left++;
    }
    while(right >= left && array[left] >= pivot){
      right--;
    } //swapping
    if(left < right){
      int temp1 = array[right];
      int temp2 = array[left];
      array[right] = temp1;
      array[left] = temp2;
    }
  } //swapping
  int x = array[left];
  int y = array[b];
  array[left] = x;
  array[b] = y;
  quickSort(array, a, left-1);
  quickSort(array, left+1, b);
  t = clock() - t;
  cout<<"Time took to Sort: "<< t <<endl;
}

//selection Sort
void Sort::selectionSort(double array[], int size){
  int i,j, minIdx, temp;
  clock_t t;
  t = clock();
  cout<< "Selection Sort"<< endl;
  for(i = 0; i < size - 1; ++i){
    minIdx = i;
    for (j = i + 1; j < size; ++j){
      if(array[j] < array[minIdx]){
        minIdx = j;
      }
    }
    if(minIdx != i){
      temp = array[i];
      array[i] = array[minIdx];
      array[minIdx] = temp;
    }
  }
  t = clock()-t;
  cout<<"Time took to Sort: "<< t <<endl;
}

//print array
void Sort::printArray(int array[], int size){
  for(int i = 0; i < size; ++i){
    cout<< array[i] << endl;
  }
}

//print
void Sort::print(){
}
