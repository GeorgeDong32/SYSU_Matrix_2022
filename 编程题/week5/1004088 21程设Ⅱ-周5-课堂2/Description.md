# 21程设Ⅱ-周5-课堂2

# Description
We create a class named ``Meow`` to represent cats in our school and count the number of existing cats.

## Detail
The ``Meow`` has two members:
* ``id`` -- the identifier of a `Meow`, once a cat is created, its identifier can't be changed any more (so it is `const`);
* ``name`` -- the name of a `Meow`. You should manage the memory to store the name by yourself.(Hint: Pay attention to ``String & Cstring`` conversion)

And there is a static member -- `count`. It's used to count the number of existing cat in school. If a new cat is founded, we increase it. If a cat is leaving, we decrease it. You should initialize it with `0`. 

You can read the `Meow.h` to know more detail. (=\_=)

# Sample Input
```
2
AmericanShorthair
Felinae
```

# Sample Output
```
Number of Cat: 3
Cat 1. My name is AmericanShorthair.
Number of Cat: 3
Cat 2. My name is Felinae.
Number of Cat: 1
Cat 0. My name is Madara.
```
