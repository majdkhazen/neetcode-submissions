class Solution {
public:
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> vec ;
    unordered_map<string, vector<string>> hash;

    for (string str : strs) {
        string temp = str;
        sort(temp.begin(),temp.end());
        hash[temp].push_back(str);
    }
    for (auto i: hash) {
        vec.push_back(i.second);
    }
    return vec;
}
};
