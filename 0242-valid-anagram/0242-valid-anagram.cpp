class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> charMap;
        if(s.length()!=t.length()){
            return false;
            }
        else{

           for(int i=0; i<s.length();i++){
                charMap[s[i]]++;
}

           for(int i=0; i<t.length();i++){
                if(charMap.count(t[i])&&charMap[t[i]]>0){
                charMap[t[i]]--;
                }
                else{
                    return false;
                }
}
            }
            return true;
        }    
        
    
};