#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> graph[1000];
bool visited[1000];

void dfs(int v, int p = -1) {
    visited[v] = true;
    
    for (int u: graph[v]) {
        if (!visited[u]) {
            dfs(u, v);
        } else if (u != p) {
            cout << "YES" << endl;
            exit(0);
        }
    }
}

int main() {
    int N;
    cin >> N;
    
    if ((1 <= N) && (N <= 1000)) {
        
        for (int i = 0; i < N; i++) {
            int u,v;
            cin >> u >> v;
            u--; v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        
        for (int i = 0; i < N; i++) {
            if (!visited[i]) {
                dfs(i);
            }
        }
        cout << "NO";
    }
    return 0;
}
