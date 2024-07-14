using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> numMap;
        for(  auto &num:nums){
            if(numMap.count(num)){
                return true;
            }
            else{numMap[num]=true;}
        }
        return false;
    }
};