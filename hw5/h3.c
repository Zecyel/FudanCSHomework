void moveZeroes(int* nums, int numsSize){
    int *cur = nums, *pos = nums;
    for (int i = 0; i < numsSize; i ++) {
        if ((*pos) == 0) {
            pos ++;
        } else {
            *cur = *pos;
            cur ++;
            pos ++;
        }
    }
    while (cur != pos) {
        *cur = 0;
        cur ++;
    }
}