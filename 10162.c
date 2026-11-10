void hannoi(n, start, end, sub){
    if(n==1){
        move(1, start, end);
    }
    else{
        hannoi(n-1, start, sub, end);
        move(n, start, end);
        hannoi(n-1, sub, b, a);
    }
}

