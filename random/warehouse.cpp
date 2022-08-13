#include <bits/stdc++.h>
using namespace std;

map<int, int> has;

vector<vector<int>> tree(50001);

// Function to add an edge between two nodes
void Add_edge(int x, int y)
{
    tree[x].push_back(y);
    tree[y].push_back(x);
}

int solve(int i, int k)
{
    if (has[i] != 0)
        return 0;

    if (k == 0)
        return 1;

    has[i]++;

    int ans = 0;
    for (int it = 0; it < tree[i].size(); ++it)
    {
        ans += solve(tree[i][it], k - 1);
    }
    return ans;
}

// Driver code
int main()
{   unordered_set <int> has2;
    int i, j;
    int N = 0;
    int numRoads, k;
    cin >> numRoads >> k;
    N=numRoads;
    // Add edges
    while (numRoads>1)
    {
        cin >> i >> j;
        //if (max(i, j) > N)
        //{
        //    N = max(i, j);
        //}
        Add_edge(i, j);
        has2.insert(i);
        has2.insert(j);
        numRoads--;
    }

    int ans=0;
    for (auto itr=has2.begin();itr!=has2.end();itr++)
    {
        has.clear();
        ans+=solve(*(has2), k);
    }
    cout << ans / 2;
    return 0;
}