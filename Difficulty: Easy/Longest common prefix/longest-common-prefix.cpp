class Solution {
  public:
    int longestCommonPrefix(string str1, string str2) {
        int n=str1.size();
        for(int i=n;i>=1;i--) {
            string prefix=str1.substr(0,i);
          // Slide the prefix over str2
            for(int j=0;j<=n-i;j++) {
                if (str2.substr(j,i)==prefix) {
                    return i;
                }
            }
        }
        return 0;
    }
};
