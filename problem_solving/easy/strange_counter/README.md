# Strange Counter

## Link to the problem

https://www.hackerrank.com/challenges/strange-code/problem

## Solution

Subtract from the current time, **_t_**, the length of all completed counter cycles.
This can be done iteratively with the first cycle having length 3 and every subsequent cycle having twice the length of the last (as in the problem description).
If the current cycle length is greater than **_t_**, there are no more complete counter cycles to subtract.
Remember that the counter starts with its value being the cycle length and then decrements by 1 for each time step.
As such, we subtract the remainder time steps, **_t_**, from the current cycle length to obtain the current value.
Lastly, we must also add 1 to the result to account for the first time step.
