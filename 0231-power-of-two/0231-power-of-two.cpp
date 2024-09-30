class Solution {
public:
    bool isPowerOfTwo(int n) {
       long int temp=1;
        while(temp<=n){
            if(temp==n)return true;
            else{
                temp*=2;
            }
        }
        return false;
    }
};