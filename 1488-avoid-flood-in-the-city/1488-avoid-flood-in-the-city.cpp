class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        vector<int> ans(n, 1);
        unordered_map<int, int> lastrain;
        set<int> drydays;

        for (int i = 0; i < n; i++) {
            if (rains[i] == 0) {
                drydays.insert(i);
            } else {
                int lake = rains[i];
                ans[i] = -1;

                if (lastrain.count(lake)) {
                    auto it = drydays.upper_bound(lastrain[lake]);
                    if (it == drydays.end()) return {};
                    ans[*it] = lake;
                    drydays.erase(it);
                }

                lastrain[lake] = i;
            }
        }

        return ans;
    }
};