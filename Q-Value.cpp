#include <iostream>
#include <unordered_map>

using namespace std;

const int STATE_COUNT = 5;
const int ACTION_COUNT = 2;
const double DISCOUNT_FACTOR = 0.9;
const double LEARNING_RATE = 0.1;

unordered_map<pair<int, int>, double, hash<pair<int, int>>> qValues;

double getMaxQValue(int state) {
    double maxQValue = INT_MIN;
    for (int i = 0; i < ACTION_COUNT; i++) {
        pair<int, int> stateActionPair = make_pair(state, i);
        if (qValues.count(stateActionPair) == 0) {
            qValues[stateActionPair] = 0;
        }
        maxQValue = max(maxQValue, qValues[stateActionPair]);
    }
    return maxQValue;
}

void updateQValue(int state, int action, int nextState, int reward) {
    pair<int, int> stateActionPair = make_pair(state, action);
    double qValue = qValues[stateActionPair];
    double maxQValue = getMaxQValue(nextState);
    qValue = qValue + LEARNING_RATE * (reward + DISCOUNT_FACTOR * maxQValue - qValue);
    qValues[stateActionPair] = qValue;
}

int main() {
    // Example updates
    updateQValue(0, 0, 1, 5);
    updateQValue(1, 0, 2, 3);
    updateQValue(2, 1, 3, 2);

    // Example print
    for (int i = 0; i < STATE_COUNT; i++) {
        for (int j = 0; j < ACTION_COUNT; j++) {
            pair<int, int> stateActionPair = make_pair(i, j);
            cout << "Q-Value for state " << i << " and action " << j << ": " << qValues[stateActionPair] << endl;
        }
    }

    return 0;
}