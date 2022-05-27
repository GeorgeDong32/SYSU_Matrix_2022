# 21程设Ⅱ-周15-课后2

# Description

Please modify class Queue's declaration and definition so as to finish the test from main.cpp...

Attention: please use template you have learned in the class to finish this assignment and **DON NOT** add and modify any memeber function and member variable.

Warning: DON NOT USE Queue in STL.

The Queue's declaration with element type "int" is below:

```
class Queue {
  public:
    Queue();

    Queue(const Queue & another);
    ~Queue();
    bool empty();
    int size();
    int front() const;
    int back() const;
    void push(int element);
    void pop();
    void swap(Queue & queue);

  private:
    struct Node {
      int element;
      Node* next;
      Node(int ele, Node* n = NULL) {
        element = ele;
        next = n;
      }
    };
    Node* front_node;
    Node* back_node;
    int node_num;
};
```

# Hint

如果你对类中的成员函数有疑问，函数的具体作用，请参见：[www.cplusplus.com里面的queue](http://www.cplusplus.com/reference/queue/queue/?kw=queue)

