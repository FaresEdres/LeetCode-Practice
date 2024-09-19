class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int min,max,sum;
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if (i>0&&nums[i-1]==nums[i])continue;
            min=i+1;
            max=nums.size()-1;
        while(min<max){
        sum=nums[i]+nums[min]+nums[max];
        if(sum==0){
            result.push_back({nums[i],nums[min],nums[max]});
           while(min<max &&nums[min]==nums[min+1])min++;
            while(min<max &&nums[max]==nums[max-1])max--;
            min++;
            max--;
        }
        else{
            
            if(min<max &&sum>0)max--;
             if(min<max &&sum<0)min++;
        }
        }
            
        }
        return result;
    }
};