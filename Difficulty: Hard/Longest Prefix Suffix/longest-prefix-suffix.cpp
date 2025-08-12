class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
        vector<int> lps(s.size(), 0);
for (int pre = 0, suf = 1; suf < s.size();)
    if (s[pre] == s[suf]) lps[suf++] = ++pre;
    else if (pre) pre = lps[pre - 1];
    else lps[suf++] = 0;
return lps[s.size() - 1];
    }
};