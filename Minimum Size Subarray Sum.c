int minSubArrayLen(int target, int* nums, int numsSize) {

int left = 0;
int right = 0;
int sum = 0;
int result = 0;
int min_size= numsSize;
int flag = 0;

while( right < numsSize ){

    sum = sum + nums[right];

    while( sum >= target ){
        result = ( right - left )+ 1;
        if ( result <= min_size ){
        flag = 1;
        min_size = result;
        }

        sum = sum - nums[left];
        left++;
        
    }
    right++;
}

if ( min_size == numsSize && flag == 0 )
return 0;
return min_size;
}
