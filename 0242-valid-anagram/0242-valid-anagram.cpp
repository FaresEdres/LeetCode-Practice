class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
            }
        else{
            int charcount[26]={0};
            for(const auto &ch:s){
                charcount[ch-'a']++;
            }
            for(const auto &ch:t){
                charcount[ch-'a']--;
            }
            for(auto &count : charcount){
                if(count!=0){
                    return false;
                }
            }
            return true;
        }    
        
    }
};