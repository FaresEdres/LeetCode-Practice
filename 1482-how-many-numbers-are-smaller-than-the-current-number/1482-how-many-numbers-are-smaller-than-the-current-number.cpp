class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> result;
        vector<int> numsTrack=nums;
        sort(numsTrack.begin(),numsTrack.end());
        unordered_map<int,int> location;

        for(int i=0;i<numsTrack.size();i++){
            if(!location.count(numsTrack[i])){
            location[numsTrack[i]]=i;
           
            }
        }
        for(int i=0;i<nums.size();i++){
           result.push_back(location[nums[i]]) ;
        }
        return result;

    }
};