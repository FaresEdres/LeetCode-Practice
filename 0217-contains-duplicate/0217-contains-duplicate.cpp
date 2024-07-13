using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,bool> numMap;
        for( int &num:nums){
            if(numMap.find(num)!=numMap.end()){
                return true;
            }
            else{numMap[num]=true;}
        }
        return false;
    }
};