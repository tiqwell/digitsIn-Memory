#include "Header.h"
long long len(std::string str)
{
    int a = 0;
    while (str[a] != '\0')
        a++;
    return a;
}

std::string reverce(std::string str)
{
    std::string result = "";

    for (int i = len(str) - 1; i >= 0; i--)
        result += str[i];
    return result;
}
std::string itc_bin_num(long long number, int a, int b)
{
    std::string f = "";
    bool isNeg = false;
    if (number < 0)
    {
        number *= -1;
        isNeg = 1;
    }
    while (number)
    {
        f += (number % 2) + '0';
        number /= 2;
    }
    if (isNeg)
    {
        f += '1';
        if (b == 2)
        {
            for (int i = 0; i < len(f) - 1; i++)
            {
                if (f[i] == '0')
                    f[i] = '1';
                else
                    f[i] = '0';
            }
        }
        if (b == 3)
        {
            for (int i = 0; i < len(f) - 1; i++)
            {
                if (f[i] == '0')
                    f[i] = '1';
                else
                    f[i] = '0';
            }
            int g = 1;
            if (f[0] == '0')
                f[0] = '1';
            else
            {

                f[0] = '0';
                while (f[g] != '0')
                {
                    f[g] = '0';
                    g++;
                }
                f[g] = '1';
            }
        }
    }
    else
        f += '0';
    std::string fUpd = reverce(f);
    std::string result;
    for(int i = 0; i < a && i <= len(fUpd); i++)
        result += fUpd[i];
    if(len(result) < a)
    {
        for (int i = len(result); i < a; i++)
            result += '0';
    }
    return result;
}
