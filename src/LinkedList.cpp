#include "LinkedList.hpp"
#include <sstream>

LinkedList::LinkedList() : head_(nullptr) {}
LinkedList::~LinkedList() {
    Node* p = head_;
    while (p) { Node* n = p->next; delete p; p = n; }
}
void LinkedList::push_front(int v) { head_ = new Node(v, head_); }
void LinkedList::remove_evens() {
    // TODO: implement
    
    Node* p = head_;
    int* temp;
    // tail->next = nullptr;
    while (p->next != nullptr){
        int cur = p->next->value;
        if (cur % 2 = 0){
            temp = &cur;
            p->next = p->next->next;
            *temp = nullptr;
        }
        p = p->next;
    }
}
std::string LinkedList::to_string() const {
    std::ostringstream oss;
    oss << "[";
    Node* p = head_;
    bool first = true;
    while (p) {
        if (!first) oss << ", ";
        first = false;
        oss << p->value;
        p = p->next;
    }
    oss << "]";
    return oss.str();
}
