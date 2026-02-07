class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        for(int i=0; i<n; i++){
            if(s[i]>='A' && s[i]<='Z'){
                int temp= s[i]+32;
                s[i]=temp;
            }
        }
        return s;
    }
};