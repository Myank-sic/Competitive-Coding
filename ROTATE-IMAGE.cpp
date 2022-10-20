// https://leetcode.com/problems/rotate-image/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void rotate(vector<vector<int>> &matrix)
{
    vector<vector<int>> copy = matrix;
    int r = matrix.size();
    int c = matrix[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrix[i][j] = copy[c - 1 - j][i];
        }
    }
    for (auto it : matrix)
    {
        for (auto iit : it)
        {
            cout << iit << " ";
        }
        cout << endl;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(v);
    return 0;
}