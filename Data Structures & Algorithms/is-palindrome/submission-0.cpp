class Solution {
public:
    bool isAl(char ch) {
        return (ch >= 'A' && ch <= 'Z') || 
               (ch >= 'a' && ch <= 'z') || 
               (ch >= '0' && ch <= '9');
    }

    char toLower(char ch) {
        if (ch >= 'A' && ch <= 'Z') {
            return ch + 32;
        }
        return ch;
    }

    bool isPalindrome(string s) {
        int prev = 0;
        int last = s.size() - 1;

        while (prev <= last) {
            char start = s[prev];
            char end = s[last];

            if (!isAl(start)) {
                prev++;
                continue;
            }

            if (!isAl(end)) {
                last--;
                continue;
            }

            if (toLower(start) != toLower(end)) {
                return false;
            }

            prev++;
            last--;
        }

        return true;
    }
};
