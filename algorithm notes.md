### CONTENTS:
- [two sum](https://github.com/MaryImarenezor/leet-code-problems/blob/main/algorithm%20notes.md#two-sum)
  

## two sum
- INPUT: an array of ints, "nums" and an int "target"
- OUTPUT: two numbers of the sum of "target"

- a nested for loop can go through the array
    - the outer loop would select one int from the array
    - the inner loop would go through all of the other ints in the array
- in the iteration:
    - the int of the outer for loop would be added to the inner for loop
    - the result would be saved in a int variable called "sum"
    - if "sum" equals "target":
        - then append the two values in another int array called "result"
        - return "result"
    - if "sum" doesn't equal "target", the inner loop would move on to the next int

- the inner for loop would skip the int that has the same index as the outer for loop
