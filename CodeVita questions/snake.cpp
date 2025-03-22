#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> instructions(N);
    for (int i = 0; i < N; ++i) {
        cin >> instructions[i];
    }

    // Map tile names to indices for easier manipulation
    unordered_map<string, int> tileMap = {
        {"up", 0}, {"down", 1}, {"left", 2}, {"right", 3}
    };

    vector<int> tiles;
    for (const auto& instr : instructions) {
        tiles.push_back(tileMap[instr]);
    }

    // DP table to store minimum moves
    int dp[N][4][4];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < 4; ++j) {
            for (int k = 0; k < 4; ++k) {
                dp[i][j][k] = INT_MAX;
            }
        }
    }

    // Initial positions can be any tile (assume both legs start at any pair of tiles)
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j) {
                dp[0][i][j] = 0; // No movement required at the start
            }
        }
    }

    // Fill DP table
    for (int i = 1; i < N; ++i) {
        for (int left = 0; left < 4; ++left) {
            for (int right = 0; right < 4; ++right) {
                if (left != right && dp[i - 1][left][right] != INT_MAX) {
                    int nextTile = tiles[i];

                    // Move left leg to the next tile
                    dp[i][nextTile][right] = min(dp[i][nextTile][right], dp[i - 1][left][right] + (left != nextTile));

                    // Move right leg to the next tile
                    dp[i][left][nextTile] = min(dp[i][left][nextTile], dp[i - 1][left][right] + (right != nextTile));
                }
            }
        }
    }

    // Find the minimum moves in the last step
    int result = INT_MAX;
    for (int left = 0; left < 4; ++left) {
        for (int right = 0; right < 4; ++right) {
            if (left != right) {
                result = min(result, dp[N - 1][left][right]);
            }
        }
    }

    // Print result without extra spaces or newlines
    cout << result << endl;

    return 0;
}
