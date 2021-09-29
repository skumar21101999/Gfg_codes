
/*Given a number N having only one ‘1’ and all other ’0’s in its binary representation,
find position of the only set bit. If there are 0 or more than 1 set
bit the answer should be -1
*/  
    int findPosition(int n) {

        if(n==0 || (n&(n-1))!=0){
            return -1;
        }
        return (log2(n)+1);
    }