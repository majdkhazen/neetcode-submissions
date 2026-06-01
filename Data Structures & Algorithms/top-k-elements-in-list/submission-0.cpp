class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int ,int> map; // key is the num[] - data is the counter of appearances
    priority_queue<pair<int,int> > pq;
    for (int i : nums) {
        map[i]++;
    }
        for (pair<int,int>  i : map) {
            pq.push({i.second,i.first});
        }
    vector<int> ans;
    for (int i=0; i < k; i++) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    return ans;
}

};
