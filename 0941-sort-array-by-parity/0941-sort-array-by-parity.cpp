class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        while(start!=end){
            while((nums[start]%2==0)&&(start!=end))start++;
            while((nums[end]%2!=0)&&(start!=end))end--;
            if(start!=end){
                nums[start]=nums[start]+nums[end];
                nums[end]=nums[start]-nums[end];
                nums[start]=nums[start]-nums[end];
            }
        }
        return nums;
    }
};