    // the idea is to find the sum of all the heights of the building --> sum
    // then find the area from the height of the tallest building to the left
    // most --> area1 find the area from the height of the tallest building to
    // the right most --> area2 therefore, the area of the water, is
    // area1+area2-sum
 int trap(int* height, int heightSize) {
    int max = 0, max_index = 0, area1 = 0, area2 = 0, sum = 0, i = 0;

    // Find the highest building and compute the sum of heights
    while (i < heightSize) {
        sum += height[i];
        if (max < height[i]) {  
            max = height[i];
            max_index = i;
        }
        i++;
    }
    max = 0;
    i = 0;

    // area1
    while (i <= max_index) {  
        if (max < height[i]) {
            max = height[i];
        }
        area1 += max;
        i++;
    }

    //area2
    max = 0;
    i = heightSize - 1;
    while (i > max_index) {  
        if (max < height[i]) {  
            max = height[i];
        }
        area2 += max;
        i--;
    }

    return area1 + area2 - sum;
}
