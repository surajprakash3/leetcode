class Solution {
public:
    bool isPalindrome(string s) {
string a ="";
for(int i=0;i<s.size(); i++){
    if(s[i]>='A' && s[i]<='Z'){
        int a1 = s[i]+32;
        char temp=a1;
        a+=temp;
    }else if((s[i]>='a' && s[i]<='z')||(s[i]>='0' && s[i]<='9')){
        a+=s[i];
            }else continue;
    }
    cout<<a;
    int i = 0;
    int j = a.size()-1;
    while (i<j)
    {
        if(a[i]!=a[j]) return false;

        i++ , j--;
    }
    return true;
 }
    
};