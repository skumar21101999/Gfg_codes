 #include<iostream>
 #include<string>
 #include<vector>
 #include<math.h>
 using namespace std;

 //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int res=arr[0];
        int maxi=arr[0];
        for(int i=1;i<n;i++){
            maxi=max(maxi+arr[i],arr[i]);
            res=max(maxi,res);
        }
        return res;
    }