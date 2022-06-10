# 21程设Ⅱ-周17-课后3

# Description

Write a program to complete the following command:    
- ``new id`` - create a specified sequence of Numbers for id (id < 200000)    
- ``Add id num`` - to join the sequence of Numbers for id integer num    
- ``merge id1 id2`` - merger sequence number of id1 and id2, and make id2 empty    
- ``unique id`` - remove repetitive element in the sequence id    
- ``out id`` - from small to large, output the elements of sequence of Numbers for ids separated by Spaces   

# Input
The First Line is n which mean the number of the Command (n <= 200000).   
The next n lines are correct Command.   
You don't have to worry wrong input and id is int.   

# Output
Then output according the requirements.   

# Sample Input
```
16 
new 1 
new 2 
add 1 1 
add 1 2 
add 1 3 
add 2 1 
add 2 2 
add 2 3 
add 2 4 
out 1 
out 2 
merge 1 2 
out 1 
out 2 
unique 1 
out 1
```

# Sample Ouput
```
1 2 3 
1 2 3 4 
1 1 2 2 3 3 4

1 2 3 4
```