class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        for(auto it : mp) {
            if(it.second == 1) 
            return it.first;
        }
        return -1;
    }
};