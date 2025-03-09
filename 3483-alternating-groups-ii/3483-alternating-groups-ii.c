
//sliding window concept, u can also use exteneded array method..
int numberOfAlternatingGroups(int* colors, int colorsSize, int k) {
    int count = 0;
    int mismatches = 0;
    for (int i = 0; i < k - 1; ++i) {
        if (colors[i] == colors[i + 1]) { // checks consecutive
            mismatches++; // 1st windwow
        }
    }
    for (int i = 0; i < colorsSize; ++i) {
        if (mismatches == 0) {
            count++; // alternating pairs
        }
        if (colors[i] == colors[(i + 1) % colorsSize]) {
            mismatches--; //outgoing
        }
        if (colors[(i + k - 1) % colorsSize] == colors[(i + k) % colorsSize]) {
            mismatches++; // incoming
        }
    }

    return count;
}
