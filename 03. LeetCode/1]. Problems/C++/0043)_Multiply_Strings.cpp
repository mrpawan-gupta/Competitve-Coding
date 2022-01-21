int IntFromChar(char ch)
{
    switch (ch)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    }
    return -1;
}

char CharFromInt(int n)
{
    switch (n)
    {
    case 0:
        return '0';
    case 1:
        return '1';
    case 2:
        return '2';
    case 3:
        return '3';
    case 4:
        return '4';
    case 5:
        return '5';
    case 6:
        return '6';
    case 7:
        return '7';
    case 8:
        return '8';
    case 9:
        return '9';
    }
    return '\0';
}

struct DigSrc
{
    DigSrc(std::string &_value) : m_value(_value) { ResetPos(); }
    int GetNext() noexcept
    {
        if (!IsEnd())
        {
            return IntFromChar(m_value[--m_iPos]);
        }
        return 0;
    }
    bool IsEnd() const noexcept { return m_iPos == 0; }
    void ResetPos() noexcept { m_iPos = m_value.size(); }

    std::string &m_value;
    int m_iPos;
};

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        std::string sRes;
        sRes.assign(num1.size() + num2.size() + 1, '0');

        DigSrc ds[2] = {num1, num2};

        int nExtra = 0;
        int iLevel = 1;
        while (!ds[1].IsEnd())
        {
            nExtra = 0;
            const int nMul = ds[1].GetNext();
            int nFromPos = sRes.size() - iLevel;
            while (!ds[0].IsEnd())
            {
                int nValue = ds[0].GetNext() * nMul + nExtra + IntFromChar(sRes[nFromPos]);
                sRes[nFromPos] = CharFromInt(nValue % 10);
                nExtra = nValue / 10;
                --nFromPos;
            }
            if (nExtra)
            {
                sRes[nFromPos] = CharFromInt(nExtra + IntFromChar(sRes[nFromPos]));
            }

            ds[0].ResetPos();
            ++iLevel;
        }
        while (sRes.size() > 1 && sRes[0] == '0')
        {
            sRes.erase(0, 1);
        }

        return sRes;
    }
};