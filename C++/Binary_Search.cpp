//Binary Search

//only logic part

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
      //this is linear search O(n)
//         for(int i=0;i<n;i++){
//             if(arr[i] == k){
//                 return i;
//             }
//         }
//         return -1;
      //this is binary search O(logn)
      int low=0,high=n-1;
      while(low<high)
      { int mid=(low+high)/2;
        if(arr[mid]==k)return mid;
       if(arr[mid]>k)low=mid+1;
       else high=mid-1;
      }
      return -1; //if element not found
    }
};
