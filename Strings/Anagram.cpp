#include <iostream>
using namespace std;
bool balancePara(string str)
{
    int sq = 0, curly = 0, para = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '[')
        {
            sq++;
        }
        else if (str[i] == ']')
        {
            sq--;
        }
        else if (str[i] == '{')
        {
            curly++;
        }
        else if (str[i] == '}')
        {
            curly--;
        }
        else if (str[i] == '(')
        {
            para++;
        }
        else
        {
            para--;
        }
        
    }
    if (sq == 0 && curly == 0 && para == 0)
    {
        return true;
    }
    return false;
}
int main()
{

    string str = "[{(}}]";
    if (str.length() % 2 != 0)
    {
        cout << "paranthacies is not balanced" << endl;
        return 0;
    }
    int ans = balancePara(str);
    if (ans)
    {
        cout << "balance paranthacies" << endl;
    }
    else
    {
        cout << "parathancies is not balanced" << endl;
    }
}