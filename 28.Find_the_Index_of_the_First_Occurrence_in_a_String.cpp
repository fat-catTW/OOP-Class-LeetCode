class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int haystackLen = haystack.size();
        int needleLen = needle.size();
        long Q = 1658598167;
        long topMinus = 1;
        long needleHash = 0;
        long haystackHash = 0;

        for(int i = 0 ; i < needleLen - 1; i++){
            topMinus = (topMinus*26)%Q;
        }

        for(int i = 0 ; i < needleLen ; i++){
            needleHash = needleHash*26 + (needle[i] - 'a');
            needleHash %= Q;
        }

        int left = 0, right = 0;

        while(right < haystackLen){
            haystackHash = haystackHash*26 + (haystack[right] - 'a');
            haystackHash %= Q;
            right++;
            while(right - left == needleLen){
                if(haystackHash == needleHash){
                    if(needle.compare(haystack.substr(left, needleLen)) == 0){
                        return left;
                    }
                }
                haystackHash = (haystackHash - topMinus*(haystack[left] - 'a')%Q + Q)%Q;
                left++;
            }
        }

        return -1;

    }
};