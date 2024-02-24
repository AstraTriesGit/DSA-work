//
// Created by Nero Sparda on 09/02/24.
//

/* Imagine you are an explorer lost in a maze. You can only move in four directions:
 * up, down, left, and right.
 * Write a recursive function to help you find your way out of the maze.
 * The maze is represented as a 2D grid
 * where '0' represents an open path and '1' represents a wall.
 * Your function should return true if you can escape the maze, and false otherwise
 * */

#include <vector>
#include <iostream>

using namespace std;

bool bound_check(vector<vector<int>>& maze, int n_current, int m_current,
                 int n, int m, vector<vector<bool>>& visited) {
    bool n_within_maze = n_current < n && n_current >= 0;
    bool m_within_range = m_current < m && m_current >= 0;
    if (!n_within_maze || !m_within_range) return false;

    bool not_wall = maze[n_current][m_current] == 0;
    bool not_visited = !visited[n_current][m_current];

    return not_wall && not_visited;
}

bool can_escape_maze(vector<vector<int>>& maze, vector<vector<bool>>& visited,
                     int n_current, int m_current, int n, int m) {
    if (n_current == n - 1 && m_current == m - 1) {
        visited[n_current][m_current] = true;
        return true;
    }

    if (bound_check(maze, n_current, m_current, n, m, visited)) {
        visited[n_current][m_current] = true;
        if(can_escape_maze(maze, visited, n_current + 1, m_current, n, m)
        || can_escape_maze(maze, visited, n_current - 1, m_current, n, m)
        || can_escape_maze(maze, visited, n_current, m_current + 1, n, m)
        || can_escape_maze(maze, visited, n_current, m_current - 1, n, m)) {
            return true;
        }
        return false;
    }
    return false;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> maze(n, vector<int>(m, 0));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> maze[i][j];
        }
    }

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    if (can_escape_maze(maze, visited, 0, 0, n, m)) {
        cout << "You made it, yaaaaay\n";
    } else {
        cout << "You can't make it, or the programmer can't make it!\n";
    }

    return 0;
}