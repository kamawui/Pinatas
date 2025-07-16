# Pinatas

Distributed Lab test task. 

## Description

The program calculates the maximum amount of candies that can be collected by smashing pinatas in an optimal order.

Given a list of pinatas with candy counts, smashing the pinata at index i yields candies equal to the product of the candy counts of its adjacent pinatas and itself (pinatas[i-1] * pinatas[i] * pinatas[i+1]), where out-of-bound neighbors are considered as having candy count 1.

The program uses dynamic programming to find the sequence that maximizes the total candies collected.

## Technologies
- **Language:** C++17  
- **Build system:** GNU Make on Ubuntu (Linux)  

## How to run
1. Clone the project to a folder on your device:
   
   ```bash
   git clone https://github.com/kamawui/Pinatas.git
   ```
   
2. Navigate to the project folder:
   
   ```bash
   cd Pinatas
   ```
   
3. Compile the program:
   
   ```bash
   make
   ```
   
4. Run the program:
   ```bash
   ./pinatas
   ```

## Usage
Enter integer values after prompt: 
```bash
Waiting for pinatas (enter space separated numbers or q to exit) ...
p_1 p_2 p_3 p_n
```

To stop the program enter:
```bash
q
```

## Example
<img width="971" height="502" alt="{C1000869-CBB7-4522-BB73-9814DB1F9501}" src="https://github.com/user-attachments/assets/e62ca538-e269-4218-a874-b44395cd646e" />

## Efficiency and complexity
The 2D table `table[i][j]` represents the maximum candies can be obtained from smashing pinatas in the interval (i, j)
For every sub-interval, the table keeps the highest value achievable by choosing the best order to smash pinatas.

1) There are O(n^2) intervals.
2) For each interval O(n) sequences are checked.

In total:
O(n^3)

## Time to implement the task
Around 6 hours.

