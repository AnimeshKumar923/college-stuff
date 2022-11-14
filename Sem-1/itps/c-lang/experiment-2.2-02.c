    #include <stdio.h>  
       
    int main()  
    {  
        int arr[]={21,45,25,25,48,75,96,96};   
          
        int length = sizeof(arr)/sizeof(arr[0]);  
        printf("length of area = %d\n", length);
          
        printf("Duplicate elements in given array: \n");  
 
        for(int i = 0; i < length; i++) 
        {  
            for(int j = i + 1; j < length; j++) 
            {  
                if(arr[i] == arr[j])  
                    printf("%d\n", arr[j]);
            }  
        }  
        return 0;  
    }  