# 21程设Ⅱ-周3-课后1

# Problem Description

以下是一个简单的信息系统的例子。这个例子中缺少Cat类和CatFamily类（假设CatFamily中至多有100只猫）。
请阅读C++主程序，并了解类你需要实现一些什么。

## EXAMPLE INPUT

2
CWIGAKZPB
4
4
3
PAUGOCDWM
4
1
XLAQWFT 10
2
ZINYSVEH
4
2
ZTYMHJGO
3
YITJLASK
4
2
CIXSDKMZ
4
2
XLAQWFT
2
KLPMURWX
4
2
USFTVBJMK
4
1
HAFGM 2
1
NVUIH 4
0

## EXAMPLE OUTPUT

1. Add a cat
2. Remove a cat
3. Find a cat
4. Print all cats
5. Exit this game
   Fail to remove cat: CWIGAKZPB
6. Add a cat
7. Remove a cat
8. Find a cat
9. Print all cats
10. Exit this game
    We have these cats:
11. Add a cat
12. Remove a cat
13. Find a cat
14. Print all cats
15. Exit this game
    We have these cats:
16. Add a cat
17. Remove a cat
18. Find a cat
19. Print all cats
20. Exit this game
    No such cat: PAUGOCDWM
21. Add a cat
22. Remove a cat
23. Find a cat
24. Print all cats
25. Exit this game
    We have these cats:
26. Add a cat
27. Remove a cat
28. Find a cat
29. Print all cats
30. Exit this game
    Successfully added cat: XLAQWFT
31. Add a cat
32. Remove a cat
33. Find a cat
34. Print all cats
35. Exit this game
    Fail to remove cat: ZINYSVEH
36. Add a cat
37. Remove a cat
38. Find a cat
39. Print all cats
40. Exit this game
    We have these cats:
    XLAQWFT of 10years old
41. Add a cat
42. Remove a cat
43. Find a cat
44. Print all cats
45. Exit this game
    Fail to remove cat: ZTYMHJGO
46. Add a cat
47. Remove a cat
48. Find a cat
49. Print all cats
50. Exit this game
    No such cat: YITJLASK
51. Add a cat
52. Remove a cat
53. Find a cat
54. Print all cats
55. Exit this game
    We have these cats:
    XLAQWFT of 10years old
56. Add a cat
57. Remove a cat
58. Find a cat
59. Print all cats
60. Exit this game
    Fail to remove cat: CIXSDKMZ
61. Add a cat
62. Remove a cat
63. Find a cat
64. Print all cats
65. Exit this game
    We have these cats:
    XLAQWFT of 10years old
66. Add a cat
67. Remove a cat
68. Find a cat
69. Print all cats
70. Exit this game
    Successfully removed cat: XLAQWFT
71. Add a cat
72. Remove a cat
73. Find a cat
74. Print all cats
75. Exit this game
    Fail to remove cat: KLPMURWX
76. Add a cat
77. Remove a cat
78. Find a cat
79. Print all cats
80. Exit this game
    We have these cats:
81. Add a cat
82. Remove a cat
83. Find a cat
84. Print all cats
85. Exit this game
    Fail to remove cat: USFTVBJMK
86. Add a cat
87. Remove a cat
88. Find a cat
89. Print all cats
90. Exit this game
    We have these cats:
91. Add a cat
92. Remove a cat
93. Find a cat
94. Print all cats
95. Exit this game
    Successfully added cat: HAFGM
96. Add a cat
97. Remove a cat
98. Find a cat
99. Print all cats
100. Exit this game
     Successfully added cat: NVUIH
101. Add a cat
102. Remove a cat
103. Find a cat
104. Print all cats
105. Exit this game
     See you

## Hint

为了实现访问```cat_family[i]```，你需要在类里面实现下面这个成员函数

```
string operator[] (int num) const {
//return 一点什么东西呢
	}
```

