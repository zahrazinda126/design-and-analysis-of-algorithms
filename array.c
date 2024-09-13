// pseudocode
//BEGIN
    //1. Input n (the size of the array)
   // 2. Declare an array arr of size n
    //3. For i = 0 to n-1, do:
        // a. Input arr[i] (elements of the array)
    //4. Set maxElement = arr[0] (initialize the maximum element as the first element)
    
   // 5. For i = 1 to n-1, do:
         //a. If arr[i] > maxElement, then:
               //i. Set maxElement = arr[i]
    
    //6. Output maxElement (the maximum element in the array)
//END

#include <stdio.h>

int main() {
    int n, i, maxElement;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    maxElement = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i]; 
        }
    }

    printf("The maximum element in the array is: %d\n", maxElement);

    return 0;
}
