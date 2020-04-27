class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        bin_x = bin(x)[2:]
        bin_y = bin(y)[2:]
        
        if len(bin_x) < len(bin_y): bin_x = bin_x.zfill(len(bin_y))
        else: bin_y = bin_y.zfill(len(bin_x))
            
        hamm_dist = 0
        
        for i in range(len(bin_x)):
            if bin_x[i] != bin_y[i]: hamm_dist += 1
                
        return hamm_dist
