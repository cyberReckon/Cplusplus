#include <iostream>
#include <vector>
using namespace std;

bool helper(vector<vector<char>> &board, int *i, int *j, char ch)
{
    if (board[i + 1][j + 1] == ch)
    {
        i = i + 1;
        j = j + 1;
        return true;
    }
    if (board[i - 1][j + 1] == ch)
    {
        i = i - 1;
        j = j + 1;
        return true;
    }
    return false;
}

bool hasPath(vector<vector<char>> &board, int n, int m)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        { cout<<"HERE";
            if (helper(board, &i, &j, 'C'))
                if (helper(board, &i, &j, 'O'))
                    if (helper(board, &i, &j, 'D'))
                        if (helper(board, &i, &j, 'I'))
                            if (helper(board, &i, &j, 'N'))
                                if (helper(board, &i, &j, 'G'))
                                    if (helper(board, &i, &j, 'N'))
                                        if (helper(board, &i, &j, 'I'))
                                            if (helper(board, &i, &j, 'N'))
                                                if (helper(board, &i, &j, 'J'))
                                                    if (helper(board, &i, &j, 'A'))
                                                    return true;
        }
        
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> board[i][j];
        }
    }

    cout << (hasPath(board, n, m) ? 1 : 0);
}