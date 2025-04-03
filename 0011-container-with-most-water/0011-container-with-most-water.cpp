class Solution {
public:
    int maxArea(vector<int>& height) {
        // All pairs of the n lines define a rectangle with a height given by the shorter line and a width given by the distance between the lines. Return the area of the rectangle with the largest area
        int i=0, j=height.size()-1;
        int max_area=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int area=h*(j-i);
            if(max_area<area){
                max_area=area;
            }
            if(height[i]<height[j]){
                i++;
            }
            else j--;
        }
        return max_area;
    }
};