class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        while (s.find(part) < n && s.length() > 0) {
            s.erase(s.find(part), part.length());
        }

        return s;
    }
};