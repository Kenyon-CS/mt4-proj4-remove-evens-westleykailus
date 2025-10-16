#pragma once
#include <string>

struct Node {
    int value;
    Node* next;
    explicit Node(int v, Node* n=nullptr) : value(v), next(n) {}
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void push_front(int v);
    void remove_evens(); // TODO
    std::string to_string() const;
private:
    Node* head_ = nullptr;
};
