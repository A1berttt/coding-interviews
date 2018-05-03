class Solution {
public:
    // Parameters:
    //        numbers:     an array of integers
    //        length:      the length of array numbers
    //        duplication: (Output) the duplicated number in the array number
    // Return value:       true if the input is valid, and there are some duplications in the array number
    //                     otherwise false
    bool duplicate(int numbers[], int length, int* duplication) {
        int i = 0;
        while(i < length && numbers[numbers[i] % length] < length)
            numbers[numbers[i++] % length] += length;
        if (i == length)
            return false;
        else{
            *duplication = numbers[i] % length;
            return true;
        }
    }
};
