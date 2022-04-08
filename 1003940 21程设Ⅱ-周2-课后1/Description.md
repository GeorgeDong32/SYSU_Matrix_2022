# 21程设Ⅱ-周2-课后1

# Description
Given the following `Object` class implemetation, write a function to produce the desired output. No changes should be made with the `Object` class.
Given the number of objects `count`, we create the object with id \[1,count\]. After that, we will destroy the objects whose id is an odd number. At last, we destroy those left objects.
# Input
The number of total objects

# Output
Output should just be produced by the constructor and destructor of the `Object` class.
# Sample Input
4 
# Sample Output
```
Object 1 is created, we've got 1 object(s) now!
Object 2 is created, we've got 2 object(s) now!
Object 3 is created, we've got 3 object(s) now!
Object 4 is created, we've got 4 object(s) now!
Object 1 is deleted, we've got 3 object(s) now!
Object 3 is deleted, we've got 2 object(s) now!
Object 2 is deleted, we've got 1 object(s) now!
Object 4 is deleted, we've got 0 object(s) now!
```
