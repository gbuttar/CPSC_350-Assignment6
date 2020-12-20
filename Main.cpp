
#include <iostream>
#include "sort.h"


using namespace std;

int main(int argc, char const *argv[]){
  string filename;
  if(argc != 2){
    cout << "Enter a file name!" << endl;
  }
  else{
    filename = argv[1];
  }
  int counter = 0;
  int lineCount = 0;
  int size;
  string line;
  ifstream myfile(filename);
  if(myfile.is_open()){
    while(getline(myfile,line)){
      size = stoi(line);
      break;
    }
  }
}
