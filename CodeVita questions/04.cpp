#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

struct Candidate {
    int x, y, qualities, distance;
    bool operator<(const Candidate& other) const {
        if (qualities == other.qualities)
            return distance > other.distance;
        return qualities < other.qualities;
    }
};

bool is_valid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

int count_qualities(vector<vector<int>>& grid, int x, int y) {
    int count = 0;
    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i], ny = y + dy[i];
        if (is_valid(nx, ny, grid.size(), grid[0].size()) && grid[nx][ny] == 1)
            ++count;
    }
    return count;
}

int bfs_distance(int n, int m, int sx, int sy, int ex, int ey) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    int distance = 0;

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            auto [x, y] = q.front(); q.pop();
            if (x == ex && y == ey) return distance;
            for (int i = 0; i < 8; ++i) {
                int nx = x + dx[i], ny = y + dy[i];
                if (is_valid(nx, ny, n, m) && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        ++distance;
    }
    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> grid[i][j];

    priority_queue<Candidate> candidates;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 1 && !(i == 0 && j == 0)) {
                int qualities = count_qualities(grid, i, j);
                int distance = bfs_distance(n, m, 0, 0, i, j);
                candidates.push({i + 1, j + 1, qualities, distance});
            }
        }
    }

    if (candidates.empty()) {
        cout << "No suitable girl found" << endl;
    } else {
        Candidate best = candidates.top();
        candidates.pop();
        if (!candidates.empty() && candidates.top().qualities == best.qualities && candidates.top().distance == best.distance) {
            cout << "Polygamy not allowed" << endl;
        } else {
            cout << best.x << ":" << best.y << ":" << best.qualities << endl;
        }
    }

    return 0;
}
