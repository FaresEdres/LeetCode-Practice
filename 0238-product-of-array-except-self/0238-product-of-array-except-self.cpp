class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
vector<int> result;
int product=1;
for(int i=0;i<nums.size();i++){
   
    result.push_back(product);
    product*=nums[i];

}
product=1;
for(int i=nums.size()-2;i>=0;i--){
product*=nums[i+1];
result[i]*=product;
    

}

return result;
    }
};
