class Solution {
public:

string encode(vector<string>& strs) {
    string encoded = "";
    for(string s : strs){
        string len = to_string(s.length());
        encoded += len + "#" + s;
    }
       return encoded ;
}

vector<string> decode(string s) {
    vector<string> res;
    int i =0;
    while(i < s.length()) {
        int begin = i;
        while (s[i]!= '#') i++;
        string temp = s.substr(begin,i-begin);
        int len = stoi(temp);
        begin = i+1;
        res.push_back(s.substr(begin,len));
        i =begin+ len;
    }
    return res;
}
};
