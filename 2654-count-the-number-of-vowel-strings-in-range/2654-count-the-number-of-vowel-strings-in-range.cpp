class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;     
        unsigned int flag=0;
        while(left<=right){
            unsigned int lastChar=words[left].size()-1;
            switch(words[left][0]){
                case 'a':
                case 'i':
                case 'o':
                case 'u':
                case 'e':
                flag++;
                break;
                default:
                break;
            }

            switch(words[left][lastChar]){
                case 'a':
                case 'i':
                case 'o':
                case 'u':
                case 'e':
                flag++;
                break;
                default:
                break;
            }
            if(flag==2){
                count++;
            }
            flag=0;
            left++;
        }
        return count;
    }
};