#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Graph
{
    int V;
    vector<vector<int>> adj;

    void topological_sort_util(vector<int> &indegree, vector<bool> &visited, vector<int> &result, vector<vector<int>> &all_sorts)
    {
        bool flag = false;

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i] && indegree[i] == 0)
            {
                for (int v : adj[i])
                {
                    indegree[v]--;
                }

                result.push_back(i);
                visited[i] = true;
                topological_sort_util(indegree, visited, result, all_sorts);

                // Backtrack
                visited[i] = false;
                result.pop_back();
                for (int v : adj[i])
                {
                    indegree[v]++;
                }

                flag = true;
            }
        }

        if (!flag)
        {
            all_sorts.push_back(result);
        }
    }

public:
    Graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }

    void add_edge(int u, int v)
    {
        adj[u].push_back(v);
    }

    vector<vector<int>> get_all_topological_sorts()
    {
        vector<vector<int>> all_sorts;
        vector<int> indegree(V, 0);

        for (int i = 0; i < V; ++i)
        {
            for (int v : adj[i])
            {
                indegree[v]++;
            }
        }

        vector<bool> visited(V, false);
        vector<int> result;

        topological_sort_util(indegree, visited, result, all_sorts);

        return all_sorts;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Graph g(n);
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            g.add_edge(x, y);
        }
        vector<vector<int>> all_sorts = g.get_all_topological_sorts();
        set<int> st;
        vector<int> ans;
        for (int i = 0; i < all_sorts.size(); i++)
        {
            st.insert(all_sorts[i][2]);
        }

        cout << st.size();
    }

    return 0;
}
