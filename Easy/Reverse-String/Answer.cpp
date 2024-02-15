class Solution {
public:
    void reverseString(vector<char>& s) {
        int a = 0; 
        int length = s.size()-1;
        while(a < length) {
            swap(s[length], s[a]);
            a++;
            length--;
        }
    }
};
