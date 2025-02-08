class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        Map<Integer,Integer> duplicateMap=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(duplicateMap.containsKey(nums[i])&&Math.abs(duplicateMap.get(nums[i])-i)<=k){
                return true;
            }
            duplicateMap.put(nums[i],i);
        }
        return false;
    }
}