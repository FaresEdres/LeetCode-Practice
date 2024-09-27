class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())return false;
        vector<int> s1_count(26,0);
        vector<int> s2_count(26,0);
        int match=0;
        for(int i=0;i<s1.length();i++){
            s1_count[s1[i]-'a']++;
            s2_count[s2[i]-'a']++;
        }  
       for(char i='a';i<='z';i++){
            if(s1_count[i-'a']==s2_count[i-'a'])match++;
        }         
        for(int i=s1.length();i<s2.length();i++){
            if(match==26)return true;
            int start=s2[i-s1.length()]-'a';
            int end=s2[i]-'a';
    
            //Sliding Window
            //remove first element
            
            if(s1_count[start]==s2_count[start])match--;
            else if(s1_count[start]+1==s2_count[start])match++;
            s2_count[start]--;
            //add last element
            
            if(s1_count[end]==s2_count[end])match--;
            else if (s1_count[end]==s2_count[end]+1)match++;
            s2_count[end]++;
        } 
        return match==26;

    }
};