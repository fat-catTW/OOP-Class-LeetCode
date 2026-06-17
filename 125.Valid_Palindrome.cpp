class Solution {
public:
    bool isPalindrome(string s) {
        string sub = "";
        int len = s.size();

        for(int i = 0 ; i < len ; i++){
            if(isalnum(s[i])){
                sub += tolower(s[i]);
            }
        }

        int left = 0, right = sub.size()-1;

        while(left < right){
            if(sub[left] != sub[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;

    }
};