
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
    
    int max=arr[0];
    int min=arr[0];
    
    for(int i=0; i<size; i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
        
        if(arr[i]<max){
            min=arr[i];
        }
    }
    
    cout<<"max element: "<<max;
    cout<<"min element: "<<min;

    return 0;
}
