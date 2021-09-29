#include<iostream>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
 
	vector<string> AllPossibleStrings(string s){
		   int n=s.length();
		   int size=pow(2,n);
		   vector<string>v;
		   string curr="";
		   for(int i=0;i<size;i++){
		       curr="";
		       for(int j=0;j<n;j++){
		           if((i&(1<<j))!=0){
		               curr+=s[j];
		           }
		       }
		       if(curr!="")
		       v.push_back(curr);
		   }
		   sort(v.begin(),v.end());
		   return v;
		}