class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        multiset<int> st;
        int tot = 0;
        for(int v : nums) {
            st.emplace(v);
            tot += v;
        }
        int maxv = -10000;
        for(int v: nums){
            st.erase(st.find(v));
            // cout << tot - v << "\n";
            if( (tot - v) % 2 == 0 && st.find((tot - v) / 2) != st.end()){
                maxv = max(maxv, v);
            }
            st.emplace(v);
        }
        return maxv;
    }
};