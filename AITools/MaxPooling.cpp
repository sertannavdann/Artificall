#include <iostream>
#include <vector>

using namespace std;

// Function to perform max-pooling
vector<vector<int>> max_pooling(vector<vector<int>> &input) {
  int rows = input.size();
  int cols = input[0].size();

  // Calculate the size of the output after max-pooling
  int output_rows = rows / 2;
  int output_cols = cols / 2;

  // Initialize the output
  vector<vector<int>> output(output_rows, vector<int>(output_cols, 0));

  // Perform max-pooling
  for (int i = 0; i < output_rows; i++) {
    for (int j = 0; j < output_cols; j++) {
      int max_val = 0;
      for (int m = i * 2; m < i * 2 + 2; m++) {
        for (int n = j * 2; n < j * 2 + 2; n++) {
          max_val = max(max_val, input[m][n]);
        }
      }
      output[i][j] = max_val;
    }
  }

  return output;
}

int main() {
  // Input matrix
  vector<vector<int>> input = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  // Perform max-pooling
  vector<vector<int>> output = max_pooling(input);

  // Print the output
  for (int i = 0; i < output.size(); i++) {
    for (int j = 0; j < output[0].size(); j++) {
      cout << output[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
