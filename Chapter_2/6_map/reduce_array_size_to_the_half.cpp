class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        for(int v: arr){
            if(mp.find(v) == mp.end()) mp[v] = 0;
            mp[v]++;
        }
        vector<int> count;
        for(auto&[v,cnt]: mp){
            count.emplace_back(cnt);
        }
        sort(count.begin(), count.end());
        reverse(count.begin(), count.end());

        int n = arr.size();
        int cur = 0;
        for(int i = 0; i < count.size(); i++){
            cur += count[i];
            if(cur >= n / 2) return i + 1;
        }
        return count.size(); // return whatever also does not matter.
    }
};