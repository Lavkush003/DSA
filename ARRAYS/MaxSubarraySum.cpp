// #include<iostream>
// #include<climits>

// using namespace std;

// void maxSubarraySum(int *arr, int n){
//     int maxSum=INT_MIN;
//     for(int start=0;start<n;start++){
//         int currSum=0;
//         for(int end=start;end<n;end++){
//             currSum+=arr[end];
//             maxSum=max(maxSum, currSum);
//         }

//     }
//     cout<<"maximum subarray sum ="<<maxSum<<endl;

// }
// int main(){
//     int arr[6]={2,-3,6,-5,4,2};
//     int n=sizeof(arr)/sizeof(int);
//     maxSubarraySum(arr,n);

//     return 0;
// }






//Kadane's Subarray Sum

#include<iostream>
#include<climits>
using namespace std;
void kadanealgo(int *arr, int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
        
    }
  cout<<"maximu subarray sum ="<<maxSum<<endl;
    

}

int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(int);
     kadanealgo(arr, n);
    return 0;
}