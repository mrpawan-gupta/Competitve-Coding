class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int a = str.size() - 1;
        int b = str2.size() - 1;
        int carry = 0;
        string res = "";
        while (a >= 0 || b >= 0 || carry)
        {
            long sum = 0;
            if (a >= 0)
                sum += (str[a--] - '0');
            if (b >= 0)
                sum += (str2[b--] - '0');
            sum += carry;
            carry = sum / 10;
            sum %= 10;
            res += to_string(sum);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};