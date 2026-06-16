class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int p = 0;
        int len = strs[0].size();
        int rows = strs.size();

        while(p < len)
        {
            for(int i = 1 ; i < rows ; i++){
                string preStr = strs[i-1];
                string currStr = strs[i];
                if(p >= preStr.size() || p >= currStr.size() || preStr[p] != currStr[p])
                {
                    return preStr.substr(0, p);
                }
            }
            p++;
        }

        return strs[0];
    }
};