class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        for(auto& v: trips){
            swap(v[0],v[1]); // in order to sort by the "from"
        }
        sort(trips.begin(), trips.end());
        priority_queue<pair<int,int>> pq;
        int cur = 0;
        for(auto v: trips){
            int from = v[0], num = v[1], to = v[2];
            
            while(!pq.empty() && abs(pq.top().first) <= from){
                cur -= pq.top().second;
                pq.pop();
            }

            cur += num;
            pq.emplace(-1 * to, num);
            if(cur > capacity) return false;
        }
        return true;
    }
};