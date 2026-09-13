class Solution {
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string s = "";
        for (const string& str : strs) {
            s += to_string(str.size()) + " " + str;
        }
        return s;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != ' ') j++;  // Find the separator
            int len = stoi(s.substr(i, j - i));  // Get the length
            string word = s.substr(j + 1, len);  // Extract the word
            ans.push_back(word);
            i = j + 1 + len;  // Move to the next encoded string
        }
        return ans;
    }
};
