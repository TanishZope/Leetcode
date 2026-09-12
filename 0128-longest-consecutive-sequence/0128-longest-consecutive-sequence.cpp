class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return 0;

        sort(arr.begin(), arr.end());
        int lastSmaller = INT_MIN;
        int cnt = 0;
        int longest = 1;

        for(int i = 0 ; i < n; i++) {
            if(arr[i] - 1 == lastSmaller) {
                cnt += 1;
                lastSmaller = arr[i];
            }
            else if(arr[i] != lastSmaller) {
                cnt = 1;
                lastSmaller = arr[i];
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};