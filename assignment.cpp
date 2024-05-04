#include <iostream>
using namespace std;

// this is the input array
int main()
{
int n;
cin>>n;

int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
}

for(int i=0; i<n; i++){
    cout<<array[i]<<" ";
}

return 0;
}
