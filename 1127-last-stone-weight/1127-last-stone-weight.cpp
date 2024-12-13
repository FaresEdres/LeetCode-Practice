class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int x,y;
        priority_queue<int> pq;
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        
        int flag=0;
        while(!pq.empty()){
            
            if(flag==0){
                x=pq.top();
                pq.pop();
                flag=1;
            }
            else if(flag==1){
                y=pq.top();
                pq.pop();
                if(y-x!=0){
                    pq.push(abs(y-x));
                }
                flag=0;
            }
        }
        if(flag==1){
            return pq.top();
        }
        else{
            return 0;
        }
    }
};