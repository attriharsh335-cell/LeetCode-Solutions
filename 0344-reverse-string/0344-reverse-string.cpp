class Solution {
public:
    void reverseString(vector<char>& t) {
        int n =t.size();
        int s=0;
        int e=n-1;
        while(s<e){
            swap(t[s],t[e]);
            s++;
            e--;
        }
    }
};