// https://leetcode.com/problems/merge-sorted-array/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    for (int i = m; i < (m + n); i++)
    {
        nums1[i] = nums2[i - m];
    }
    sort(nums1.begin(), nums1.end());
}
// This is for checking answer
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<int> a = {1, 2, 3, 0, 0, 0};
    int m = 3;
    vector<int> b = {2, 5, 6};
    int n = 3;
    merge(a, m, b, n);
    return 0;
}