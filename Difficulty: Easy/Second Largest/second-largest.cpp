class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first=arr[0];
        int second=-1;
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>first)
            {
            second=first;
            first=arr[i];
            }
            else if(arr[i]>second && arr[i]<first)
            second=arr[i];
        }
        return second;
    }
};