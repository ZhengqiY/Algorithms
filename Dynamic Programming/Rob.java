package ArrayAndString;

public class Rob {
    public int rob(int[] nums){
        if (nums.length==0) return 0;
        int[] dp = new int[nums.length+1];
        dp[0] = 0;
        dp[1] = nums[0];
        int N=nums.length;
        for (int i=2;i<N+1;i++){
            //dp[i] = Integer.MIN_VALUE;
            dp[i] = Math.max(nums[i-1]+dp[i-2],dp[i-1]);
        }
        return dp[N];
    }
}
