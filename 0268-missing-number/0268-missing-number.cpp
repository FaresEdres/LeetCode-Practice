class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len=nums.size();
   
        int miss=(len*(len+1))/2;
      
       
        for (auto& num:nums){
            miss-=num;
        }
        return miss;

    }
};