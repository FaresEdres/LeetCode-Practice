class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> cMap;
        int start=0,res=0,maxi=0;
        for(int end=0; end<s.length();end++){
            cMap[s[end]]++;
            maxi=max(maxi,cMap[s[end]]);
            if(end-start+1-maxi>k){
                cMap[s[start]]--;
                start++;
            }
            else{
                res=max(res,end-start+1);
            }
        }
        return res;
    }
};


//end-start+1 -maxi