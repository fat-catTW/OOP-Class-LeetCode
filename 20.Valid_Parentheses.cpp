class Solution {
public:
    bool isValid(string s) {
        stack<char> left;
        int length = s.size();

        for(int i = 0 ; i < length ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                left.push(s[i]);
            }
            else
            {
                if(!left.empty() && leftOf(s[i]) == left.top()){
                    left.pop();
                }
                else{
                    return false;
                }
            }
        }

        return left.empty();
    }

    char leftOf(char right){
        if(right == ')')
            return '(';
        else
        if(right == '}')
            return '{';
        else
            return '[';
    }
};