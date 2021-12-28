#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int check(char ch)
{
    int X = tolower(ch);
    if (X == 'a' || X == 's' || X == 'd' || X == 'f' || X == 'g' || X == 'h' || X == 'j' || X == 'k' || X == 'l')
        return 1;
    else if (X == 'z' || X == 'x' || X == 'c' || X == 'v' || X == 'b' || X == 'n' || X == 'm')
        return 2;
    else
        return 3;
}
int main()
{
    vector<string> words = {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> s;
    int flag = 0;
    for (int i = 0; i < words.size(); i++)
    {
        flag = 0;
        for (int j = 0; j < words[i].length() - 1; j++)
        {
            if (check(words[i][j]) != check(words[i][j + 1]))
                flag = 1;
        }
        if (flag == 0)
            s.push_back(words[i]);
    }
    for(int i=0;i<s.size();i++) cout<<s[i]<<",";
    return 0;
}