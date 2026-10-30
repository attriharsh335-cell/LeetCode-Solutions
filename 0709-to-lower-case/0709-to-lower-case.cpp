class Solution {
public:
    string toLowerCase(string s) {
     for(auto &h:s){
        h=tolower(h);
     }
     return s;
     
    }
};