/**
 * This file contains the function definitions for all functions pertaining to the
 * Mirror portion of the assignment.
 * 
 * @author James LaFarr
 * @version 12.13.22
 */

 int** mirror(int **matrix, int rows, int cols) {
    for (int i = 0; i < rows - 1; ++i) {
        for (int j = 1; j < cols; ++j) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    return matrix;
 }