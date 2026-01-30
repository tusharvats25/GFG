class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int ts=0,ls=0;
        for(int i=0;i<arr.size();i++)
        {
            ts+=arr[i];
        }
        for(int i=0;i<arr.size();i++)
        {
            ts-=arr[i];
            if(ts==ls) return i;
            else ls+=arr[i];
        }
        return -1;
    }
};