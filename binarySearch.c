#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int x) 
{  
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
  
        
        if (arr[mid] == x)  
	return mid; 
  
        
        if (arr[mid] > x)
	return binarySearch(arr, l, mid-1, x); 
  
        
        return binarySearch(arr, mid+1, r, x); 
   } 
  
   
   return -1; 
} 


int main() 
{ 
   int n,x;
   printf("enter no of elements & key to be searched\n");
	scanf("%d %d",&n,&x);
   int arr[n]; 
   printf("Enter array elements in sorted order\n");
   for(int i =0;i<n;i++)
	scanf("%d",&arr[i]);
   int result = binarySearch(arr, 0, n-1, x); 
   if(result == -1) 
      	   printf("Element is not present in array using binary search\n"); 
   else
	   printf("Element is present at index %d  using binary search\n", result); 
   
 
   return 0; 
} 
