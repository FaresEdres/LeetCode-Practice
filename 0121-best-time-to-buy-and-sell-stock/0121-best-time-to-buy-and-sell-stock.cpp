class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0;
        int right=left+1;
        int profit=0,maxprofit=0;
        while(right<prices.size()){
            if(prices[left]<prices[right]){
                profit=prices[right]-prices[left];
                maxprofit=max(profit,maxprofit);
               
            }
            else if(prices[left]>=prices[right]){
             left=right;
           
            }
             right++;
        }
        return maxprofit;
    }
};