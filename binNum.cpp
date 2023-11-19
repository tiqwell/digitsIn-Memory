#include "Header.h"
long long len(std::string str)
{
    int a = 0;
    while (str[a] != '\0')
        a++;
    return a;
}
std::string ToBin(long long number)
{
    std::string f;
    while (number)
    {
        f += (number % 2) + '0';
        number /= 2;
    }
    return f;
}
std::string reverce(std::string str) 
{
    std::string S1 = "";
    for (int i = 0; str[i] != '\0'; i++) {
        S1 += str[len(str) - (i + 1)];
    }
    return S1;
}
std::string AddNulls(int a, std::string f)
{
    std::string result;
    for (int i = len(f); i < a - 1; i++)
        f += '0';
  /*  if (len(result) < a)
    {
        for (int i = len(result) - 1; i < a; i++)
            result = result + '0';
    }*/
    return f;
}
std::string itc_bin_num(long long number, int a, int b)
{
    std::string f = "";
    bool isNeg = false;
    if (number < 0)
    {
        number *= -1;
        isNeg = true;
    }

    f  = ToBin(number);
    std::string result;
        std::cout << "a=" << a << " " << f;
    result = AddNulls(a, f);
    std::cout << std::endl <<  result << std::endl;
    if (isNeg)
    {
        result += '1';
        if (b == 2)
        {
            for (int i = 0; i < len(result) - 1; i++)
            {
                if (result[i] == '0')
                    result[i] = '1';
                else
                    result[i] = '0';
            }
        }
        if (b == 3)
        {
            for (int i = 0; i < len(result) - 1; i++)
            {
                if (result[i] == '0')
                    result[i] = '1';
                else
                    result[i] = '0';
            }
            int g = 1;
            if (f[0] == '0')
                f[0] = '1';
            else
            {

                result[0] = '0';
                while (result[g] != '0')
                {
                    result[g] = '0';
                    g++;
                }
                result[g] = '1';
            }
        }
    }
    else
        result += '0';
    return reverce(result);
}
