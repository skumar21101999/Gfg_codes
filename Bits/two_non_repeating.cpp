 #include<bits/stdc++.h>
 using namespace std;
 vector<int> singleNumber(vector<int> nums) 
    {   // nums ={1,1,2,3,4,4};
        int x=0;
        for(int i=0;i<nums.size();i++){
            x^=nums[i];
        }
        
        x=x&(~(x-1)); //finding rightmost common bit
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){
            if((x&nums[i])==0){
                a=a^nums[i];
            }
            else{
                b=b^nums[i];
            }
        }
        if(a<b){
            return {a,b};
        }
        return {b,a}; 
        //return {2,3}
    }