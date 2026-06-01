class Solution {
public:
    bool isAnagram(string s, string t) {
        int histo['z'-'a'+1] = {0};
        for(char c : s){
            histo[c-'a']++;
        }
        for(char c : t){
            histo[c-'a']--;
        }
        for(int i : histo){
            if(i != 0)
                return false; 
        }
        return true;
    }
};
