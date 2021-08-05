#include<bits/stdc++.h>
using namespace std;
 
string fun(string s1, string s2)
{
    string res;
    int n1 = s1.length();
    int n2 = s2.length();
 

    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (s1[i] != s2[j])
            break;
        res.push_back(s1[i]);
    }
 
    return (res);
}
 
string fun2 (string arr[], int n)
{
    string prefix =  arr[0];
 
    for (int i=1; i<=n-1; i++)
        prefix = fun(prefix, arr[i]);
 
    return (prefix);
}
 
int main()
{
    string arr[] = {"pjpjpj","pjpjyvp", "pjpjqwer"};

    int n = sizeof(arr) / sizeof(arr[0]);
 
    string ans = fun2(arr, n);
 
    if (ans.length())
        printf ("%s",ans.c_str());
    else
        printf("There is no prefix");
 
    return (0);
}
