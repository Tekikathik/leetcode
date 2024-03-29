int reverse(int x){
    long long  c=0;
    while(x!=0){
        c=(c*10)+x%10;
        x=x/10;
    }
    if(c>=INT_MAX || c<=INT_MIN )
    return 0;
    else
    return c;
    

}