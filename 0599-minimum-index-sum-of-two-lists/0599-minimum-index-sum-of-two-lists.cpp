class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> indexMap;
        for (int i = 0; i < list1.size(); i++)
            indexMap[list1[i]] = i;

        vector<string> result;
        int minSum = INT_MAX;

        for (int j = 0; j < list2.size(); j++) {
            if (indexMap.count(list2[j])) {
                int total = indexMap[list2[j]] + j;
                if (total < minSum) {
                    minSum = total;
                    result = {list2[j]};
                } else if (total == minSum) {
                    result.push_back(list2[j]);
                }
            }
        }
        return result;
    }  
};     