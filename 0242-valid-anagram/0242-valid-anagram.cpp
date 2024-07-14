class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
            }
        else{
            int charcount[26]={0};
           for(int i=0; i<s.length();i++){
 charcount[s[i]-'a']++;
  charcount[t[i]-'a']--;
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