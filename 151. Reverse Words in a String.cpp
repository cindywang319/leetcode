class Solution {
public:
    void reverseSingleWord(string &s, int start, int end) {
        int len = end + start, mid = (end + start) / 2;
        for(int i = start; i <= mid; i++) {
            char tmp = s[i];
            s[i] = s[len - i];
            s[len - i] = tmp;
        }
    }
    
    void slimStr(string &s) {
        int start = -1, end = -1, space_start = -1, space_end = -1;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ' && i != s.length() - 1 && s[i + 1] == ' ') {
                s.erase(i, 1);
                i--;
            }
        }
        
        if (s[0] == ' ') {
            s.erase(0, 1);
        }
        if (s[s.length()-1] == ' ') {
            s.erase(s.length() - 1, 1);
        }

    }
    
    
    void reverseWords(string &s) {
        slimStr(s);
        int start = 0, end = s.length() - 1;
        reverseSingleWord(s, start, end);
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') {
                end = i - 1;
                reverseSingleWord(s, start, end);
                start = i + 1;
            }
        }
        reverseSingleWord(s, start, s.length() - 1);
    }
};