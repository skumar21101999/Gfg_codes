#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
 
 int reverse(vector<int>&v){
     int l=0;
     int h=v.size()-1;
     while(l<=h){
         swap(v[l++],v[h--]);
     }
     return v;
 }