#include <iostream>
#include <ostream>
int main() {
  int a = 1;
  int *b = &a;
  std::cout << "sss" << std::endl;
  printf("dd");
  return 0;
}
class Node {
public:
  Node();
  Node(Node &&) = default;
  Node(const Node &) = default;
  Node &operator=(Node &&) = default;
  Node &operator=(const Node &) = default;
  ~Node();

private:
};

Node::Node() {}

Node::~Node() {}
