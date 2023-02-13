#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> nearestHotel(vector<vector<bool> > &map, vector<pair<int, int> > &starts) {
        int m = map.size(), n = map[0].size();
        vector<pair<int, int> > hotels;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (map[i][j]) {
                    hotels.push_back(make_pair(i, j));
                }
            }
        }
        vector<int> result;
        for (int i = 0; i < starts.size(); i++) {
            int x = starts[i].first, y = starts[i].second;
            int minDist = INT_MAX;
            for (int j = 0; j < hotels.size(); j++) {
                int a = hotels[j].first, b = hotels[j].second;
                int dist = (x-a) * (x-a) + (y-b) * (y-b);
                minDist = min(minDist, dist);
            }
            result.push_back(sqrt(minDist));
        }
        return result;
    }
};
