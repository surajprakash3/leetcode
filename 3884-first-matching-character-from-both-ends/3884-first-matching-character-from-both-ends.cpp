class Solution {
public:
    int firstMatchingIndex(string s) {
        int i=0;
        int j=s.length()-1;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[j]){
                return i;
            }
            j--;
    
        }

        return -1;
    }
};