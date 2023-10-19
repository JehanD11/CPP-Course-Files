#include <iostream>
#include <vector>

using namespace std;

const int N = 100;
vector<int> adj[N];
bool vis[N];
int n;
int path[N];

bool dfs(int u, int start, int cnt) {
    vis[u] = true;
    path[cnt] = u;
    if (cnt == n) {
        if (adj[u][start]) return true;
        else return false;
    }
    for (int v : adj[u]) {
        if (!vis[v] && dfs(v, start, cnt + 1)) return true;
    }
    vis[u] = false;
    return false;
}

bool hamiltonianCycle() {
    for (int i = 0; i < n; i++) {
        memset(vis, false, sizeof vis);
        if (dfs(i, i, 1)) return true;
    }
    return false;
}

int main() {
    // Test case:
    n = 5;
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[3].push_back(4);
    adj[4].push_back(0);

    if (hamiltonianCycle()) {
        cout << "Hamiltonian cycle found: ";
        for (int i = 0; i <= n; i++) cout << path[i] << " ";
        cout << endl;
    } else {
        cout << "Hamiltonian cycle not found\n";
    }
    return 0;
}