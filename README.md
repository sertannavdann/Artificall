Some useful cores for Artificial Intelligence Applications

# Nearest Hotel
__________
#### Q-Value

This is a C++ code that implements the Q-learning algorithm for reinforcement learning. The Q-value for a state-action pair (s, a) is an estimate of the expected future reward for taking action a in state s. The code uses an unordered_map to store the Q-values, with the keys being state-action pairs and the values being the corresponding Q-values.

- The getMaxQValue function takes the current state as an input and returns the maximum Q-value of all the actions that can be taken in that state. This function is used to calculate the value of max(Q(s', a')) in the Q-value update equation.

- The updateQValue function updates the Q-value for a state-action pair based on the equation Q(s, a) <- Q(s, a) + α * (r + γ * max(Q(s', a')) - Q(s, a)). The function takes four inputs: the current state, the action taken in that state, the new state after taking that action, and the reward received after taking that action.
-------
#### Dot Distance

- The radial distance is calculated using the dot product of the difference vectors between the starting points and the hotels. The dot product is calculated as the square of the difference of x and y coordinates between two points. The minimum radial distance is found by comparing the distances of the starting point to each hotel. The result is stored as the square root of the minimum distance, as the distances are stored as their squares for comparison purposes.

-------
#### Brute Force
- This is the most obvious approach but good to measure the difference between the base for understanding the measure of optimization.

__________

# AI Tools

#### Max Pooling

- Max-pooling is a commonly used operation in computer vision and deep learning. Given an input feature map X of shape (H, W, C) (height, width, and number of channels), max-pooling divides X into non-overlapping pooling regions and outputs a new feature map Y of shape (H/S, W/S, C), where S is the pooling stride. The formula for max-pooling can be represented as:

`// Y[i, j, c] = max(X[i*S : i*S + F, j*S : j*S + F, c]) `

- Where F is the size of the pooling filter (usually F = 2 or F = 3). This formula takes the maximum value within a F x F pooling region for each channel c in the input X, and outputs a reduced-resolution feature map Y of the same number of channels C. The max-pooling operation reduces the spatial resolution of the input, effectively reducing the number of parameters in the network and allowing it to learn features that are robust to translations in the input.
__________

# Data Structures

#### Linked List

- Simple structure to build link list queue. This approach adds an item on top of the link in a queue manner. Doesn't let you reach and write to the next node. Simply by using the friend keyword in the `class Item`

=> Mostly written for better understanding the concepts in C++ <=
