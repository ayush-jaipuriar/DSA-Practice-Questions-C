#include<stdio.h>
int RecursiveBsearch(int A[], int start, int end, int element) {
   if(start>end) return -1;
      int mid = (start+end)/2;
   if( A[mid] == element ) return mid;
   else if( element < A[mid] )
     return  RecursiveBsearch(A, start, mid-1, element);
   else
     return  RecursiveBsearch(A, mid+1, end, element);
}
int main() {
   int arr[] = {1,2,3,4,5};
   int searchElement=5;
   int min=0;
   int max= sizeof(arr)/ sizeof(int);
   int result  = RecursiveBsearch(arr,min,max,searchElement);
   (result!=-1)? printf("%d is found at Index %d \n",searchElement,result) : printf("Element not found\n");
   return 0;
}