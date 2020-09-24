# Strange Counter

## Link to the problem

https://www.hackerrank.com/challenges/strange-code/problem

## Description

Bob has a strange counter.
At the first second, it displays the number **_t_**.
Each second, the number displayed by the counter decrements by _1_ until it reaches _1_.

The counter counts down in cycles.
In next second, the timer resets to **_2_ _x_ the initial number for the prior cycle** and continues counting down.
Find and print the value displayed by the counter at time **_t_**.

## Function Description

Complete the strangeCounter function in the editor below.
It should return the integer value displayed by the counter at time **_t_**.

strangeCounter has the following parameter(s):

* **t**: an integer

# Solution

Subtract from the current time, **_t_**, the length of all completed counter cycles.
This can be done iteratively with the first cycle having length 3 and every subsequent cycle having twice the length of the last (as in the problem description).
If the current cycle length is greater than **_t_**, there are no more complete counter cycles to subtract.
Remember that the counter starts with its value being the cycle length and then decrements by 1 for each time step.
As such, we subtract the remainder time steps, **_t_**, from the current cycle length to obtain the current value.
We must also add 1 to the result to account for the first time step.
This solution is implemented in **main.cpp**, function *strangeCounter*, lines 6 through 13.