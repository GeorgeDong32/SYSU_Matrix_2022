# 21程设II-周7-课后-3

# Description

The rabbits have powerful reproduction ability. One pair of adult rabbits can give birth to one pair of kid rabbits every month. And after m months, the kid rabbits can become adult rabbits.

As we all know, when $m=2$, the sequence of the number of pairs of rabbits in each month is called Fibonacci sequence. But when $m\neq 2$, the problem seems not so simple. You job is to calculate after d months, how many pairs of the rabbits are there if there is exactly one pair of adult rabbits initially. You may assume that none of the rabbits dies in this period.

# Input

The input may have multiple test cases. In each test case, there is one line having two integers $m(1\le m\le 10), d(1\le d\le 100)$, m is the number of months after which kid rabbits can become adult rabbits, and $d$ is the number of months after which you should calculate the number of pairs of rabbits. The input will be terminated by $m=d=0$.

# Output

**You must print the number of pairs of rabbits after d months, one integer per line.**

# Sample Input

```
2 3
3 5
1 100
0 0
```

# Sample_Ouput

```
5
9
1267650600228229401496703205376
```

