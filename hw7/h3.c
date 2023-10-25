int majorityElement(int* nums, int numsSize){
    int cur_major = -1000000001, cur_count = 0;
    for (int i = 0; i < numsSize; i ++) {
        if (nums[i] == cur_major) {
            cur_count ++;
        } else if (cur_count == 0) {
            cur_major = nums[i];
            cur_count = 1;
        } else {
            cur_count --;
        }
    }
    return cur_major;
}
