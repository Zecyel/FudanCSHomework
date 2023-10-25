int removeDuplicates(int* nums, int numsSize){
    int len = 0;
    for(int i = 0; i < numsSize; i ++) {
        if (nums[i] == nums[len]) {
            continue;
        } else {
            len += 1;
            nums[len] = nums[i];
        }
    }
    return len + 1;
}
