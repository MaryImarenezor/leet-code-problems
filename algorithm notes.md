# CONTENTS:
- [two sum](https://github.com/MaryImarenezor/leet-code-problems/blob/main/algorithm%20notes.md#two-sum)
  

# two sum
- INPUT: an array of ints, "nums" and an int "target"
- OUTPUT: two numbers of the sum of "target"

- a nested for loop can go through the array
    - the outer loop would select one int from the array
    - the inner loop would go through all of the other ints in the array
			- this would be incremented by "i + 1"
- in the iteration:
    - the int of the outer for loop would be added to the inner for loop
    - the result would be saved in a int variable called "sum"
    - if "sum" equals "target":
        - then append the two values in another int array called "result"
        - return "result"
    - if "sum" doesn't equal "target", the inner loop would move on to the next int

- the inner for loop would skip the int that has the same index as the outer for loop

### C++ "sticky" notes
- for vectors, you do .size(), not .length()!! in C++, .length() is used in arrays, not vectors!!
- since I'm working with vectors and not arrays, I should used the conventions for vectors. here, I'm using conventions for arrays, which is why I'm getting errors
- I can use sum[i] for accessing elements and I wont get errors, but its better to use .at() since its secure
- I got it!! since the function is a vector<int>, I should return a vector<int>!!
- 


### Python "sticky" notes
- i can try and create an empty array by doing result = [], and I can append the results to the array by using the .insert() ( "array.insert(index, value)" ) function
- i tried using .append(), but it returned the indexes from previous iterations all in one array instead of the two-value array in the most recent iteration
- the break and continue keywords apply to python as well, not just in c++
- use len(x) function to get the length of the array, not .length()!!
- the syntax error is that I don't put the variable type at the beginning (int result = [0, 0]). instead, I remove it entirely and allow the information INSIDE the array to declare its type (result = [0, 0])
