class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        // for(int i=0;i<arr.size();i++)
        // {
        //     if(arr[i]<arr[i+1])
        //     {
        //         swap(arr[i],arr[i+1]);
        //     }
        //     i++;
        // }
        int i=0;
        while(i<arr.size()-1)
        {
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
    }
};