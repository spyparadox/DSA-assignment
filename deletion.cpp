#include <iostream>
using namespace std;

// this code is for deletion

void display(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

int indDeletion(int array[], int size, int index)
{
    for (int i= index; i< size-1; i++)
    {
        array[i] = array[i +1];
    }
}

int main()
{
    int array[25] = {1, 3, 5, 7, 9};
    int size = 5, index = 2;
    indDeletion(array, size, index);
    size -= 1;
    display(array, size);

    return 0;
}