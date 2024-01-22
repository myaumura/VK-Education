#include <iostream>
#include <vector>

using namespace std;

vector<int> graph[1000];
bool visited[1000];

int dfs(int v, int p = -1) {
    int count = 0;
    visited[v] = true;
    
    for (int u: graph[v]) {
        if (!visited[u]) {
            dfs(u, v);
        } else if (u != p) {
            count++;
        }
    }
    return count;
}

int main() {
    int N, count = 0;
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
                count += dfs(i);
            }
        }
        cout << count << endl;
    }
    return 0;
}
