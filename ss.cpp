#include <vector>
class Solution {
  public:
    // vector<int> Solution::nearestHotel(vector<vector<bool> > &map, vector<pair<int,int> > &starts) {
    vector<int> nearestHotel(vector<vector<bool> > &map, vector<pair<int,int> > &starts) {
        vector<int> result;
        for (int i = 0; i < starts.size(); i++) {
            int x = starts[i].first;
            int y = starts[i].second;
            int distance = 0;
            bool found = false;
            while (!found) {
                distance++;
                // build an buffer each line
                for (int j = x - distance; j <= x + distance; j++) {
                    for (int k = y - distance; k <= y + distance; k++) {
                        if (j >= 0 && j < map.size() && k >= 0 && k < map[0].size()) {
                            if (map[j][k]) {
                                found = true;
                                break;
                            }
                        }
                    }
                    if (found) {
                        break;
                    }
                }
            }
            result.push_back(distance);
        }
        return result;

}
}