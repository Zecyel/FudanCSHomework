#define N -2147483659

int thirdMax(int* nums, int numsSize){
    long long max1 = N, max2 = N, max3 = N;
    for (int i = 0; i < numsSize; i ++) {
        long long cur = (long long)nums[i];
        if (cur > max1) {
            max3 = max2, max2 = max1, max1 = cur;
        } else if (cur > max2 && cur < max1) {
            max3 = max2, max2 = cur;
        } else if (cur > max3 && cur < max2) {
            max3 = cur;
        }
    }
    if (max3 != N) {
        return max3;
    } else {
        return max1;
    }
}
