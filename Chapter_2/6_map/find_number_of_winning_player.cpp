class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        sort(pick.begin(),pick.end());
        int ans = 0;
        int player_id = -1;
        bool win = false;
        map<int,int> color;
        for(auto v: pick){
            int x,y;
            x = v[0], y = v[1];
            if(x != player_id){
                if(win) ans++;
                win = false;
                player_id = x;
                color.clear();
            }

            if(color.find(y) == color.end()) color[y] = 0;
            color[y]++;
            if(color[y] >= x + 1) win = true;
        }
        if(win) ans++;
        return ans;
    }
};