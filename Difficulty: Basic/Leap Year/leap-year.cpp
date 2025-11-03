class Solution {
  public:
    bool checkYear(int N) {
        // code here
        if((N%400==0 or (N%4==0 and N%100!=0)))
        return 1;
        else
        return 0;
    }
};