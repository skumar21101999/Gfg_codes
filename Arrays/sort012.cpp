#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
 
void sort012(vector<int>&v){
    int low=0;
    int mid=0;
    int high=v.size()-1;
    
    while(mid<=high) {
        if(v[mid]==0){
            swap(v[mid++],v[low++]);
        }
        else if(v[mid]==1){
            mid++;
        }
        else{
            swap(v[mid],v[high--]);
        }
    }
    return;
}