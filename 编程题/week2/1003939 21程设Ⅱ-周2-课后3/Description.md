# 21程设Ⅱ-周2-课后3

# Description
Write a program to read a list containing item `name` (`std::string`), item `code` (`std::string`), and item `cost` (`double`) interactively and produce a three-column output satisfying:
- `name` and `code` are **left-justified**;
- `cost` is **right-justified** with a **precision of two digits**. **Trailing zeros are shown**;
- The field width for `name`, `code` and `cost` are 15, 15, 10, respectively.

# Input
First line is an integer `N` to specify the number of books, followed with $N$ lines. Each line contains the `name`, `code` and `cost`.

# Output
For each item, output it in the aforementioned format.

# Sample Input
```
3
book1 2312123 342.13
book2 342 123
book3 342 1.2321

```

# Sample Output
```
book1          2312123            342.13
book2          342                123.00
book3          342                  1.23

```