#pragma once

#include <iostream>

class OrderedList {
protected:
    struct listNode {
        listNode * prev, * next;
        int val;
        listNode(int v, listNode *p, listNode *n): val(v), prev(p), next(n) {
            if (prev != nullptr)
                prev->next = this;
            if (next != nullptr)
                next->prev = this;
        }
    } * root;
public:
    OrderedList(): root(nullptr) {}
    virtual void insert(int val) = 0;
    void printList() const {
        for (const listNode * p = root; p != nullptr; p = p->next)
            std::cout << p->val << ' ';
        std::cout << std::endl;
    }
    virtual ~OrderedList() {
        listNode * temp;
        for (listNode * p = root; p != nullptr; delete temp) {
            temp = p;
            p = p->next;
        }
    }
};

class AscendOrderedList: public OrderedList {
public:
    AscendOrderedList(): OrderedList() {}
    void insert(int val) {
        if (root == nullptr) {
            root = new listNode(val, nullptr, nullptr);
        } else {
            listNode * temp = nullptr;
            for (listNode * p = root; p != nullptr && p->val < val; p = p->next)
                temp = p;
            if (temp == nullptr)
                root = new listNode(val, nullptr, root);
            else
                temp = new listNode(val, temp, temp->next);
        }
    }
    ~AscendOrderedList() {}
};

class DescendOrderedList: public OrderedList {
public:
    DescendOrderedList(): OrderedList() {}
    void insert(int val) {
        if (root == nullptr) {
            root = new listNode(val, nullptr, nullptr);
        } else {
            listNode * temp = nullptr;
            for (listNode * p = root; p != nullptr && p->val > val; p = p->next)
                temp = p;
            if (temp == nullptr)
                root = new listNode(val, nullptr, root);
            else
                temp = new listNode(val, temp, temp->next);
        }
    }
    ~DescendOrderedList() {}
};
