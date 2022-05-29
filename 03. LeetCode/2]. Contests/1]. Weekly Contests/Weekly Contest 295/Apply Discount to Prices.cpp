class Solution {
public:
    string discountPrices(string sentence, int discount) {
        stringstream ss(sentence);
        string res, s;
        while (getline(ss, s, ' ')) {
            if (!res.empty()) res += ' ';
            if (s.size() > 1 && s[0] == '$') {
                bool seen = false, valid = true, checkSen = false;;
                for (int i = 1; i < s.size(); i++) {
                    if (isdigit(s[i])) {
                        checkSen = true;
                        continue;
                    }
                    else if (s[i] == '.') {
                        if (seen == false) seen = true;
                        else valid = false;
                    }
                    else valid = false;
                }
                if (!valid || !checkSen) res += s;
                else {
                    long p = (long) (stod(s.substr(1)) * (100 - discount));
                    string t = to_string(p);
                    string a = t.size() > 2 ? t.substr(0, t.size() - 2) : "0";
                    string b = t.size() >= 2 ? t.substr(t.size() - 2) : t.size() == 1 ? "0" + t : "00";
                    res += "$" + a + "." + b;
                }
            }
            else {
                res += s;
            }
        }
        return res;
    }
};