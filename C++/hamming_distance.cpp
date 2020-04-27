class Solution {
public:
    string intTobin(int n) {
        string bin = "";
        
        while(n > 0) {    
            bin = to_string(n % 2) + bin;    
            n = n / 2;  
        }
        
        return bin;
    }
        
    int hammingDistance(int x, int y) {
        string bin_x = intTobin(x);
        string bin_y = intTobin(y);
        
        if(bin_x.size() < bin_y.size()) { 
            string padd(bin_y.size()-bin_x.size(), '0');
            bin_x = padd + bin_x;
        }else { 
            string padd(bin_x.size()-bin_y.size(), '0');
            bin_y = padd + bin_y;
        }
                
        int hamm_dist = 0;
        
        for(int i = 0; i < bin_x.size(); i++) {
            if(bin_x[i] != bin_y[i]) 
                hamm_dist ++;
        }
        
        return hamm_dist;
    }
};
