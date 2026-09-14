class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        for(int i = 0; i<gain.size(); i++) {
            int alt = gain[i] + alt;
            if(alt > highest) {
                highest = alt;
            }
        }
        return highest;
    }
};