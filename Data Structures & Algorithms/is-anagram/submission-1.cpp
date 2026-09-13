class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int>m2;

        if(s.size()!=t.size())
        {
            return false;
        }
        for (int i=0;i<s.size();i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }

        for(const auto& x:m1){
            char temp = x.first;
            int val = x.second;

            if(m2[temp] != val ){
                return false;
            }
        }


        return true;
    }
};
