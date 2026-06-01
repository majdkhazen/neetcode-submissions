class Solution {
public:
   int lengthOfLongestSubstring(string s) {
    int histo[256]= {0};
    int l=0, r=0, max_len=0;
    while(l <= r && r < s.length()){
        histo[s[r]]++;
        while(histo[s[r]]>1){
            histo[s[l]]--;
            l++;
        }
        max_len = (r-l+1) > max_len ? (r-l+1) : max_len;
        r++;
    }
    return max_len;
}
};
