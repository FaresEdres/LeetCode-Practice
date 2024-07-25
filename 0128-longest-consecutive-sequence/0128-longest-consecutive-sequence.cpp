class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {return 0;}
        unordered_set<int> set(nums.begin(),nums.end());
        int max=1;
        for(auto num:nums){
           if(set.find(num-1)==set.end()){
            int count=1;
           
            while(set.find(num+count)!=set.end()){
            
                count++;
               
            }
                if (max<count){
                    max=count;
                }
                
           
            }
           } 
              return max; 
        }

};
