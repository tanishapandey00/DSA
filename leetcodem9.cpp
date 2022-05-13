#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "123";
    string s2 = "456";
    int num1 = 0, num2 = 0;
    for (auto s : s1)
    {
        num1 = num1 * 10 + (int(s) - 48);
    }
    cout << num1 << endl;
    for (auto s : s2)
    {
        num2 = num2 * 10 + (int(s) - 48);
    }
    cout << num2 << endl;
    int res = num1 * num2;
    string ans = "";
    int i = 0;
    while (res != 0)
    {
        int temp = res % 10;
        ans += to_string(temp);
        res /= 10;
    }
    int j = 0;
    while (j < ans.length() / 2)
    {
        swap(ans[j], ans[(ans.length() - 1) - j]);
        j++;
    }
    cout << ans << endl;
    return 0;
}