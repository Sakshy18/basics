// Input: num = 3
// Output: "III"
// Explanation: 3 is represented as 3 ones.

code:
string intToRoman(int num) {
         string ans = "";
        vector<pair<int, string>> store = {{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
       
        for (int i = 0; i < store.size(); i++) {
            while (num >= store[i].first) {
                ans += store[i].second;
                num -= store[i].first;
            }
        }
        return ans;
    }

    approach:
    