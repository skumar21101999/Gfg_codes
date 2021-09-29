 #include<iostream>
 int countBitsFlip(int a, int b){
        //a=10100 
        //b=01010
        //answer = 4 bits are different
        
        int n=a^b;
        int count=0;
        //now count set bits
        while(n>0){
            n=n&(n-1);
            count++;
        }
        return count;
    }