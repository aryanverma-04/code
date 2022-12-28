#include <stdio.h>
// Insertion 
int insertion(int arr[], int size, int index, int element, int capacity)
{
    //    5 >=  20  
    if (size>=capacity)
    {
       return -1; 
    }
    //       0 = 5 - 1  ; 4 >= 1   ; 4--  
    for (int i = size -1; i >=index; i--)
    {
    //    arr[5] = arr[4]
        arr[i+1] = arr[i];
    }
    //arr[2]  =  element
    arr[index]= element;
    return 1;
    
    
}

// Traversal 
void display(int arr[] , int n ){
    for (int  i = 0; i < n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    
}

// Deletion

void deletion(int arr[], int size, int index,int capacity) {
    if (index > capacity){
        printf("Index is not present ");
    }
    for (int i = index; i < size -1; i++)
    {
        arr[i] = arr[i+1];
    }
    

    
}

int main(){
   /* printf("Enter the no of elements : ");
    int e;
    scanf("%d",&e);
    int ar[e];
    for (int i = 0; i < e; i++)
    {
        scanf("%d",&ar[i]);
    }
    display(ar,e);*/
    int arr[20] = {10, 30, 40, 50};
    int size = 4; int capacity = 20,element = 20;
    display(arr, size);
    size +=1;
    insertion(arr, size,1, element, capacity);
    display(arr,size);
    size +=1;
    insertion(arr,size,5,60,20 );
    display(arr,size);
    
    deletion(arr,size,5 ,capacity);
    size-=1;
    display(arr,size);
    

}