#include <iostream>
//#include <array> //array it is a fixed container

using namespace std;

void insertionSearch(int array[],int arraySize){
   
    int i,j,key;
    for (i = 1; i < arraySize; ++i){
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j = j - 1;
        }
        array[j+1] = key;
    }
}

void printFunction(int array[],int iteration){
   
    for (int i = 0; i < iteration; ++i){
        cout << array[i] << endl;
    }
}

int main(){
    int myArray[] = {6,5,4,3,2,1};
    int myArraySize = sizeof(myArray) / sizeof(*myArray);
    printFunction(myArray,myArraySize);
    insertionSearch(myArray,myArraySize);
    cout << "result : " << endl;
    printFunction(myArray,myArraySize);
    return 0;
}
