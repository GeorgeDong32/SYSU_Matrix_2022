# 21程设Ⅱ-周15-课堂1

# Description

You are required to write one (or more, maybe overloaded) function template to sort different kind of elements.

There are 2 or 3 arguments in the function. The first and the second arguments are iterators (you can treat them as pointers), stand for the beginning and the end positions of the sorted elements.

There may be a third argument, whitch is function comparing two elements.

If the function returns `TRUE`, it means that the first argument of the function should be in front of the second one in the sorted sequence.

## Hint

你要写的应该有如下两个函数模板

```
template<typename Iterator>
void mySort(Iterator begin, Iterator end) {
//....
}
 
template<typename Iterator, typename Comp>
void mySort(Iterator begin, Iterator end, Comp cmp) {
//...用cmp来排序
}
```


