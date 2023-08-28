#include <iostream>
using namespace std;
int main() {

    int size;
    
    cout<<"Enter array size: ";
    cin>>size;
    
    int arr[size];
    
    cout<<"Enter array elements: "<<endl;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}
