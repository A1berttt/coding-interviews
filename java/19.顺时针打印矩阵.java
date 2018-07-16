import java.util.ArrayList;
public class Solution {
    public ArrayList<Integer> printMatrix(int [][] matrix) {
       ArrayList<Integer> arr = new ArrayList<Integer>();
        if (matrix == null || matrix[0] == null)
           return arr;
        for (int i = 0, j = 0, up = 0, down = matrix.length - 1, left = 0, right = matrix[0].length - 1; left <= right && up <=down; i++, j++, left++) {
            for(; left <= right && up <= down && j <= right; arr.add(matrix[i][j++]));
            for(i++, j--, up++; left <= right && up <= down && i <= down; arr.add(matrix[i++][j]));
            for(j--, i--, right--; left <= right && up <= down && j >= left; arr.add(matrix[i][j--]));
            for(i--, j++, down--; left <= right && up <= down && i >= up; arr.add(matrix[i--][j]));
        }
        return arr;
    }
}
