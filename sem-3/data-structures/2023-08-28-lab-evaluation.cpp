// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
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
        
        if(arr[i]<min){
            min=arr[i];
        }
    }
    
    cout<<"\nmax element: "<<max;
    cout<<"\nmin element: "<<min;


    cout<<"\nsum = "<<(max+min);
    cout<<"\nproduct = "<<(max*min);

    return 0;
}
