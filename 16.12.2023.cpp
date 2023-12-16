class Solution {
public:
    bool isAnagram(string s, string t) {
        // APProach 2;

        if(s.length() != t.length()){
            return false;
        }

        vector<int>v(256,0);
        for(int i=0;i<s.length();i++){
            v[int(s[i])]++;
            v[int(t[i])]--;
        }

        for(auto it:v){
            if(it!=0){
                return false;
            }
        }

        return true;
    }
};
