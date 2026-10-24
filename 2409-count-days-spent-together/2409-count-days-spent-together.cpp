class Solution {
public:
    int countDaysTogether(string aA, string lA, string aB, string lB) {
        // int h = stoi(aA.substr(0,2))*100+stoi(aA.substr(3,2));
        // int a = stoi(aB.substr(0,2))*100+stoi(aB.substr(3,2));
        // int r = stoi(lA.substr(0,2))*100+stoi(lA.substr(3,2));
        // int s = stoi(lB.substr(0,2))*100+stoi(lB.substr(3,2));
        
        // return max(0,min(r,s)-max(a,h)+1);
        int days[] = {0,31,59,90,120,151,181,212,243,273,304,334};

        auto f =[&](string s){
            return days[stoi(s.substr(0,2))-1] + stoi(s.substr(3,2));
        };
        int b = max(f(aA), f(aB));
        int h = min(f(lA), f(lB));
        return max(0, h - b + 1);

    }
};