#include <iostream>
#include <vector>
using namespace std;

void help(int i, int j, vector<vector<int>>& maze, int n, string &path, vector<string> &ans) {
    if (i < 0 || j < 0 || i == n || j == n || maze[i][j] == 0) {
        return; 
    }
    
    if (i == n - 1 && j == n - 1) {
        ans.push_back(path);
        return;
    }

    // Mark the current cell as visited
    maze[i][j] = 0;
    
    // Move Down
    path.push_back('D');
    help(i + 1, j, maze, n, path, ans);
    path.pop_back();

    // Move Left
    path.push_back('L');
    help(i, j - 1, maze, n, path, ans);
    path.pop_back();

    // Move Right
    path.push_back('R');
    help(i, j + 1, maze, n, path, ans);
    path.pop_back();

    // Move Up
    path.push_back('U');
    help(i - 1, j, maze, n, path, ans);
    path.pop_back();
    
    // Unmark the current cell as visited (backtracking)
    maze[i][j] = 1;
}

int main() {
    int n;
    cout << "Enter the size of the maze: ";
    cin >> n;

    vector<vector<int>> maze(n, vector<int>(n));

    cout << "Enter the maze matrix (0 for blocked, 1 for open): " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    vector<string> ans;
    string path = "";

    // Check if the start or end is blocked
    if (maze[0][0] == 1 && maze[n-1][n-1] == 1) {
        help(0, 0, maze, n, path, ans);
    }
    
    if (ans.empty()) {
        cout << "No path found!" << endl;
    } else {
        cout << "Paths found:" << endl;
        for (const string& p : ans) {
            cout << p << endl;
        }
    }

    return 0;
}
