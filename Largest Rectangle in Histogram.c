int largestRectangleArea(int* heights, int heightsSize) {

    int maxArea = 0, area = 0;
    int stack[heightsSize];
    int top = -1;
    int element = 0, pse = 0, nse = 0;
    
    for ( int i = 0 ; i < heightsSize ; i++ )
    { 
        while( top != -1 && heights[stack[top]] > heights[i] )
        {
            element =  heights[stack[top--]];
            nse = i;
            if( top != -1 )
                pse = stack[top]; 
            else
                pse = -1; 

            area = ( element ) * ( nse - pse - 1 );
            if ( area > maxArea)
            maxArea = area;   
        }

        stack[++top] = i;

    }

    while( top != -1 )
    {    
        element = heights[stack[top--]];
        nse = heightsSize;
        if( top != -1 )
            pse = stack[top];
        else
            pse = -1;

        area = ( element ) * (nse - pse -1);
        if ( area > maxArea)
        maxArea = area;       

    }

    return maxArea;

}
