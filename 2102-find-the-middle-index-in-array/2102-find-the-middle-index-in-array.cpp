class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        vector<int>left_sum(nums.size());
        vector<int>right_sum(nums.size());
     
        int sum=0;
        for(int i=0;i<nums.size();i++){
            left_sum[i]=sum;
            sum+=nums[i];
        }
        sum=0;
            for(int i=nums.size()-1;i>=0;i--){
            right_sum[i]+=sum;
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(left_sum[i]==right_sum[i]){
                return i;
            }
        }
        return -1;



    }
};



