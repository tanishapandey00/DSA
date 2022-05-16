#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;
// Valid Sudoko
bool isValidSudoku(vector<vector<char>> &board)
{
    int N = board.size();
    bool flag = true;
    int r = 0, c = 0;
    while (r < N)
    {
        unordered_set<char> st;
        for (int i = 0; i < N; i++)
        {
            if (board[r][i] != '.')
            {
                if (st.find(board[r][i]) == st.end())
                    st.insert(board[r][i]);
                else
                    return false;
            }
        }
        r++;
    }
    while (c < N)
    {
        unordered_set<char> st;
        for (int i = 0; i < N; i++)
        {
            if (board[i][c] != '.')
            {
                if (st.find(board[i][c]) == st.end())
                    st.insert(board[i][c]);
                else
                    return false;
            }
        }
        c++;
    }
    int S = sqrt(N), i = 0, j = 0;
    while (S <= N)
    {
        int rs = i - i % S;
        int cs = j - j % S;
        unordered_set<char> st;
        for (; i < S; i++)
        {
            for (; j < S; j++)
            {
                if (board[i + rs][j + cs] != '.')
                {
                    if (st.find(board[i + rs][j + cs] == st.end()))
                        st.insert(board[i + rs][j + cs]);
                    else
                        return false;
                }
            }
        }
        S += sqrt(N);
    }
    return true;
}
int main()
{
    vector<vector<char>> board = {{}};
    return 0;
}