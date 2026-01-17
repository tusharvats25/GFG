
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
         unordered_map<int,int>mp;
    int repeating ,missing;
    int n = arr.size();
    for(int i = 0; i<n;i++){
        mp[arr[i]]++;
    }
    for (int i =1 ;i<=n ; i++){
        if(!mp[i]){
            missing = i;
        }
         else if(mp[i]==2){
            repeating =i;
        }
    }
    
    return {repeating,missing};
    }
};

