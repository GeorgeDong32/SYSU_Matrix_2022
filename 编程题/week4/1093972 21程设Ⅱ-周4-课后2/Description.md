# 21程设Ⅱ-周4-课后2

# Description
Input multiple lines of numbers from the console, please to allocate arrays of double variable to store these lines.   
Then, use a pointer array to store the addresses of these double arrays.   
You need to implement the two functions: `double** make_list(double data[], int sizes[])` and `void free_lists(double* lists[])` .
# Input format
There are N lines input and each line contains no more than M double number( 1<=N<=20, 1<=M<=10).
# Output format
The same numbers as input.
# Example input
```
0.288 0.919 0.130 0.610 0.696 0.616 0.779
0.949 0.982 0.861 0.608 0.156 0.617
0.294 0.384 0.980 0.203 0.502
0.286 0.157 0.866 0.329 0.733
0.269 0.370 0.669
0.473 0.829 0.509 0.714
```
# Example output
```
0.288 0.919 0.130 0.610 0.696 0.616 0.779
0.949 0.982 0.861 0.608 0.156 0.617
0.294 0.384 0.980 0.203 0.502
0.286 0.157 0.866 0.329 0.733
0.269 0.370 0.669
0.473 0.829 0.509 0.714
```