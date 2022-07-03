#include <iostream>
using namespace std;
 
template <typename ElementType>
class Queue {
 public:
  Queue();
 
  Queue(const Queue<ElementType>& another);
  ~Queue();
  bool empty();
  int size();
  ElementType front() const;
  ElementType back() const;
  void push(ElementType element);
  void pop();
  void swap(Queue<ElementType>& queue);
 
 private:
  struct Node {
    ElementType element;
    Node* next;
    Node(ElementType ele, Node* n = NULL) {
      element = ele;
      next = n;
    }
  };
  Node* front_node;
  Node* back_node;
  int node_num;
};
 
template <typename ElementType>
Queue<ElementType>::Queue(const Queue<ElementType>& another) {
  if (this == &another) return;
  front_node = back_node = NULL;
  node_num = 0;
  Node* temp = another.front_node;
  while (temp != NULL) {
    push(temp->element);
    temp = temp->next;
  }
}
 
template <typename ElementType>
Queue<ElementType>::Queue() {
  front_node = back_node = NULL;
  node_num = 0;
}
 
template <typename ElementType>
Queue<ElementType>::~Queue() {
  while (!empty()) {
    pop();
  }
}
 
template <typename ElementType>
bool Queue<ElementType>::empty() {
  return node_num == 0;
}
 
template <typename ElementType>
int Queue<ElementType>::size() {
  return node_num;
}
 
template <typename ElementType>
ElementType Queue<ElementType>::front() const {
  return front_node->element;
}
 
template <typename ElementType>
ElementType Queue<ElementType>::back() const {
  return back_node->element;
}
 
template <typename ElementType>
void Queue<ElementType>::push(ElementType element) {
  if (front_node == NULL) {
    front_node = back_node = new Node(element);
  } else {
    back_node->next = new Node(element);
    back_node = back_node->next;
  }
  node_num++;
}
 
template <typename ElementType>
void Queue<ElementType>::pop() {
  if (empty()) return;
  if (size() == 1) {
    delete front_node;
    front_node = back_node = NULL;
  } else {
    Node* temp = front_node;
    front_node = front_node->next;
    delete temp;
  }
  node_num--;
}
 
template <typename ElementType>
void Queue<ElementType>::swap(Queue<ElementType>& queue) {
  int old_size = size();
  while (!empty()) {
    queue.push(front());
    pop();
  }
  while (queue.size() > old_size) {
    push(queue.front());
    queue.pop();
  }
}