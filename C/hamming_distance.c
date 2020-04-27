int* intTobin(int n) {
    int* bin = calloc(32, sizeof(int));
    int index = 31;
    
    while(n > 0) {    
        bin[index] = (n % 2);                
        n = n / 2;
        index --;
    }
         
    return bin;
}

int hammingDistance(int x, int y){
    int* bin_x = intTobin(x);
    int* bin_y = intTobin(y);
                
    int hamm_dist = 0;
        
    for(int i = 0; i < 32; i++) {
        if(bin_x[i] != bin_y[i]) 
            hamm_dist ++;
    }
        
    return hamm_dist;
}
