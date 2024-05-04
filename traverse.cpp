#include <iostream>
using namespace std;

// for traversion

void display(int array[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

}

int main(){

int array[10]= {2,4,6,8};
display(array, 4);
    return 0;
}