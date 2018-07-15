public class Solution {
    public void reOrderArray(int [] array) {
        if(array == null || array.length == 0)
            return;
        int j = 0;
        int[] arr = new int[array.length];
        for(int i = 0; i < array.length; i++){
            if (array[i] % 2 == 1)
                arr[j++] = (array[i]);
        }
        for(int i = 0; i < array.length; i++){
            if (array[i] % 2 == 0)
                arr[j++] = (array[i]);
        }
        for(int i = 0; i < array.length; i++)
            array[i] = arr[i];
    }
}
