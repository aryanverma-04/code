#include <stdio.h>
 
// function to sort the subsection a[i .. j] of the arrayh a[]
void merge_sort(float i, float j, float a[], float aux[]) {
    if (j <= i) {
        return;     // the subsection is empty or a single element
    }
    float mid = (i + j) / 2;

    // left sub-array is a[i .. mid]
    // right sub-array is a[mid + 1 .. j]
    
    merge_sort(i, mid, a, aux);     // sort the left sub-array recursively
    merge_sort(mid + 1, j, a, aux);     // sort the right sub-array recursively

    float pointer_left = i;       // pointer_left points to the beginning of the left sub-array
    float pointer_right = mid + 1;        // pointer_right points to the beginning of the right sub-array
    float k;      // k is the loop counter

    // we loop from i to j to fill each element of the final merged array
    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {      // left pointer has reached the limit
            aux[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) {        // right pointer has reached the limit
            aux[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {        // pointer left points to smaller element
            aux[k] = a[pointer_left];
            pointer_left++;
        } else {        // pointer right points to smaller element
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++) {      // copy the elements from aux[] to a[]
        a[k] = aux[k];
    }
}


int main() {
  float a[100], aux[100], n, i, d, swap;
 
  printf("Enter number of elements in the array:\n");
  scanf("%f", &n);
 
  printf("Enter %f integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%f", &a[i]);
 
  merge_sort(0, n - 1, a, aux);
 
  printf("Printing the sorted array:\n");
 
  for (i = 0; i < n; i++)
     printf("%f\n", a[i]);
 
  return 0;
}