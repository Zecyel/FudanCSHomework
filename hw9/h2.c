void sortColors(int* nums, int numsSize) {
    int a[3] = {0, 0, 0};
    for (int i = 0; i < numsSize; i ++) {
        a[nums[i]] += 1;
    }
    int cur = 0;
    for (int i = 0; i < 3; i ++) {
        while (a[i] --> 0) {
            nums[cur ++] = i;
        }
    }
}
