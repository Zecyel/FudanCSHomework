char * bestHand(int* ranks, int ranksSize, char* suits, int suitsSize){
    if (suits[0] == suits[1] && suits[1] == suits[2] && suits[2] == suits[3] && suits[3] == suits[4]) {
        return "Flush";
    }
    int a[14];
    memset(a, 0, sizeof(a));
    for (int i = 0; i < 5; i ++) {
        a[ranks[i]] ++;
    }
    int maxx = 0;
    for (int i = 1; i <= 13; i ++) {
        if (a[i] > maxx) {
            maxx = a[i];
        }
    }
    if (maxx >= 3) {
        return "Three of a Kind";
    }
    if (maxx == 2) {
        return "Pair";
    }
    return "High Card";
}
