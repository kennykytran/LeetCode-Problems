public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int i = 1;

        foreach (int n in nums)
        {
            if (nums[i - 1] != n) {nums[i++] = n; Console.WriteLine(nums[i - 1] + " is unique ");}
            // if number after first index is unique add the number to the next index and continue
            // then return the index after adding all the unique numbers.
        }

        return i;
    }
}