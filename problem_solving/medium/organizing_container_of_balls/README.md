# Organizing Containers of Balls

## Link to the problem

https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem

## Solution

The only allowed operation to sort the container is to swap balls between two containers.
As such, the number of balls in a given container is constant.
For all containers to be sorted, it must contain all balls of a given type.
This is only possible if every container contains a number of balls that corresponds to the total number of balls of a given type.
If this condition is met, it is possible to swap balls until the sorting condition is satisfied.

To implement this concept, we do the following:

- Count the number of balls for each ball type;
- Count the number of balls, of any type, in each container;
- Verify if both sets of numbers contains exactly the same values.

The first two steps can be done by iterating the matrix and storing numbers in two array.
For the last step, we sort both arrays in the same ordering and check, element by element, if all values match.