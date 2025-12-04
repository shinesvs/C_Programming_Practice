int sumofdigits(int n);
bool isHappy(int n) {

    int slow = n;
    int fast = n;

    while(1){

        slow = sumofdigits(slow);
        fast = sumofdigits(sumofdigits(fast));

        if( fast == 1 || slow == 1)
        return true;

        if ( fast == slow )
        return false;

    }

    return false;
    

}


int sumofdigits(int n){
    int sum = 0;
    while( n != 0 ){
        sum = sum + ( n%10) * (n%10 );
        n = n / 10;
    }
    
    return sum;
}
