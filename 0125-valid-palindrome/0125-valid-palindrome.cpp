class Solution {
public:
    bool isAlphanumeric(char n) {
    if((n>='a'&&n<='z')||(n>='A'&&n<='Z')||(n>='0'&&n<='9')){
            return true;
    }
    else{
            return false;}
    }
 

    bool isPalindrome(string s) {

        char* lptr = &s[0];
        char* rptr = &s[s.size() - 1];
        while (lptr < rptr) {
            while (lptr < rptr && !(isAlphanumeric(*lptr))) {
                lptr++;
            }
            while (lptr < rptr && !(isAlphanumeric(*rptr))) {
                rptr--;
            }
            if(tolower(*lptr)!=tolower(*rptr)){
                return false;
            }
            lptr++;
            rptr--;
        }
        return true;
    }
};