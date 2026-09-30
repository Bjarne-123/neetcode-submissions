class Solution {
public:
    bool isAnagram(string s, string t) {
        int seen[26] = {0};
        for(int i = 0; s[i] != '\0'; i++) {
            seen[s[i] - 'a']++;
        }
        for(int j = 0; t[j] != '\0'; j++) {
            seen[t[j] - 'a']--;
        }

        for(int k = 0; k < 26; k++) {
            if (seen[k] != 0) {
                return false;
            }
        }
        return true;
    }
};
