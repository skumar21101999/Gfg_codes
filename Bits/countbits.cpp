 
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        if(n<=1){
                if(n==1)
                return 1;
            return 0;
        }
        else{
            int x= log2(n);
            int p=pow(2,x);
            //(2^x)*x/2  +  (n-(2^x)+1) + countbits(n-(2^x))
            return ((p*x/2) + (n-p+1)+ countSetBits(n-p));
        }
    }