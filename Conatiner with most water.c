int maxArea(int* height, int heightSize) {

    int left = 0;
    int right = heightSize - 1;
    int min_height = 0;
    int area = 0;
    int max_area = 0;

    while ( left < right )
    {
        int width = right - left;
        if ( height[left] < height[right] ){
            min_height = height[left];
        } else {
            min_height = height[right];
        }
        
        area = width * min_height;

        if(area > max_area)
        max_area = area;

        if( height[left] < height[right] )
        left++;
        else right--;

    }

    return max_area;

}
