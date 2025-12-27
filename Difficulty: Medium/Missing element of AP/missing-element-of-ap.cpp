// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int n=arr.size();
        int diff;
        int diff1=arr[1]-arr[0];
        int diff2=arr[n-1]-arr[n-2];
        int diff3=(arr[n-1]-arr[0])/n;
        if(diff1==diff2)
        diff=diff1;
        else if(diff1==diff3)
        diff=diff1;
        else
        diff=diff2;
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]!=arr[i]+diff)
            return arr[i]+diff;
        }
        
        return arr[n-1]+diff;
    }
};