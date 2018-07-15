import java.util.ArrayList;
public class Solution {
    public int minNumberInRotateArray(int [] array) {
        if (array.length == 0)
            return 0;
        int l = 0;
        int r = array.length - 1;
        while (l < r && array[l] >= array[r]) {
            int m = (l + r) / 2;
            if(array[m] == array[l] && array[m] == array[r]){
                l++;
                r--;
            }
            else if (array[m] >= array[l])
                l = m + 1;
            else
                r = m;
        }
        return array[l];
    }
}
