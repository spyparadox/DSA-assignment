#include <iostream>
using namespace std;

// for INSERTION


void display(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}


int indInsertion(int array[], int size, int element, int index)
{
    for (int i= size-1; i>=index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
}

int main()
{
    int array[25] = {1, 3, 5, 7, 9};
    int size = 5, element = 50, index = 2;
    indInsertion(array, size, element, index);
    size += 1;
    display(array, size);

    return 0;
}