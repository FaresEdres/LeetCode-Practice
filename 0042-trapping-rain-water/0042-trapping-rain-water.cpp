class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right = height.size()-1;
        int maxL=height[0];
        int maxR=height[height.size()-1];
        int count = 0;
        while(left<right){
            if (maxL<maxR){
                left++;
                maxL=max(maxL,height[left]);
                count+=maxL-height[left];
            }
            else{
                right--;
                maxR=max(maxR,height[right]);
                count+=maxR-height[right];

            }

        }

        return count;
    }
};