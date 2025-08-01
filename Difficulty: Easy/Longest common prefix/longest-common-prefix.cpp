class Solution {
  public:
    int longestCommonPrefix(string str1, string str2) {
        int n = str1.size();
        
        for (int len = n; len >= 1; len--) {
            string prefix = str1.substr(0, len);
            
            // Slide the prefix over str2
            for (int i = 0; i <= n - len; i++) {
                if (str2.substr(i, len) == prefix) {
                    return len;
                }
            }
        }
        return 0;
    }
};
