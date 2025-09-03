class Solution {
public:
//   bool isAlphaNum (char ch){
//     if((ch>='0' && ch<='9') ||
//     (tolower(ch)>='a'&& tolower(ch)<='z')){
//         return true;
//     }
//     return false;
//   }
    bool isPalindrome(string s) {
        int st=0, end=s.length();
        while(st<end){
            if(!isalnum(s[st])){
                st++; 
            }
            else if(!isalnum(s[end])){
                end--;
        }
        else if(tolower(s[st])!=tolower(s[end])){
            return false;
        }
        else{
        st++;
         end--;
        }
    }
    return true;
    }
};