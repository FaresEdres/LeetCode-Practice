class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     
        int arraySize=nums.size();
        int rightValue=1;
        vector<int> result(arraySize);
        result[0]=1;
        for(int i=1;i<arraySize;i++){
        result[i]=nums[i-1]*result[i-1];
        } 

        for(int i=arraySize-1;i>=0;i--){
            result[i]*= rightValue;
            rightValue*=nums[i];
        }
        return result;
    }
};