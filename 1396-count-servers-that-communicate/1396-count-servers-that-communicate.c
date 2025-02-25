int countServers(int** grid, int gridSize, int* gridColSize) {
    int row[gridSize], col[gridColSize[0]], res = 0;

    for (int i = 0; i < gridSize; ++i) row[i] = 0;
    for (int j = 0; j < gridColSize[0]; ++j) col[j] = 0;

    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridColSize[i]; ++j) {
            if (grid[i][j] == 1) {
                row[i]++;
                col[j]++;
            }
        }
    }
    for (int i = 0; i < gridSize; ++i) {
        for (int j = 0; j < gridColSize[i]; ++j) {
            if (grid[i][j] == 1 && (row[i] > 1 || col[j] > 1)) {
                res++;
            }
        }
    }

    return res;
}
