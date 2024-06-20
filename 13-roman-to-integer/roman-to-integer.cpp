class Solution {
public:
    int romanToInt(string s) {
        int l = s.length();
        int total = 0;
        unordered_map<char,int> romanValues;
        romanValues['I'] = 1;
        romanValues['V'] = 5;
        romanValues['X'] = 10;
        romanValues['L'] = 50;
        romanValues['C'] = 100;
        romanValues['D'] = 500;
        romanValues['M'] = 1000;
        for (int i = 0; i < l; i++){
            if (i+1 < l && romanValues[s[i]] < romanValues[s[i+1]])
                total -= romanValues[s[i]];
            else
                total += romanValues[s[i]];
        }
        return total;
    }
};