class Solution {
public:
    bool isPalindrome(string s) {
        string help="";
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                help+=tolower(s[i]);
            }
            else{
                continue;
            }
        }
        string ans=help;
        std::reverse(help.begin(),help.end());
        if(ans==help){
            return true;
        }
        return false;
    }
};
