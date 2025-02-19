class Solution {
    public int[] numberGame(int[] nums) {
        Arrays.sort(nums);
        int t;
        int l=nums.length;

        for(int i=0;i<l;i+=2){
            t=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=t;
        }
        return nums;
    }
}
