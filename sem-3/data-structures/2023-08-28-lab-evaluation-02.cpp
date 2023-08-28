#include <iostream>
using namespace std;

int max(int arr[], int size);
int min(int arr[], int size);

void sum(int max, int min);
void product(int max, int min);

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
    
    
    
    int maxim=max(arr, size);
    cout<<"\nmax element: "<<maxim;
    int minim=min(arr, size);
    cout<<"\nmin element: "<<minim;

  
    
    sum(maxim, minim);
    product(maxim, minim);
  
  
    return 0;
}

void sum(int max, int min){
    cout<<"\nsum = "<<(max+min);
}

void product(int max, int min){
    cout<<"\nproduct = "<<(max*min);
}

int max(int arr[], int size){
    
    int max=arr[0];
    
    
    for(int i=0; i<size; i++){
        
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    return max;

}

int min(int arr[], int size){
    
    int min=arr[0];
    
    for(int i=0; i<size; i++){
        
        if(arr[i]<min){
            
        min=arr[i];
        }
    }
    
    
    return min;
}
