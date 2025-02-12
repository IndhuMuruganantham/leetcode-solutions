class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] arr=new int[nums.length];
        int a=0;
        int pro=1;
        for(int i=0;i<nums.length;i++){
           pro=pro*nums[i];
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
                a=pro/nums[i];
            }
            else{
                a=nums[i];
            }

           arr[i]=a;
        }
        return arr;
    }
}
