#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string str = "madan";
    string str2;
    int len = str.length();
    
    str2 = str;
    int k = 0;
    bool flag = false;
    for (i = str2.length(); i >= 0; i--)
    {
        cout << str2[i];
        if (str2[i] == str[k])
        {
            flag = true;
            k++;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}