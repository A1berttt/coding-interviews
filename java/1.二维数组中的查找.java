public class Solution {
    public boolean Find(int target, int [][] array) {
        if(array == null)
            return false;
        int row = array.length;
        int col = array[0].length;
        int i = row - 1;
        int j = 0;
        while(i >= 0 && j < col){
            if(array[i][j] > target)
                i--;
            else if(array[i][j] < target)
                j++;
            else
                return true;
        }
        return false;
    }
}
