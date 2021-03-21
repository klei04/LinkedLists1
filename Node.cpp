#include <iostream>
#include <cstring>

#include "Node.h"

//Node Class

Node::Node(Student* newStudent) {
  student = newStudent;
  next = NULL;
}

Student* Node::getStudent() {
  return student;
}

void Node::setNext(Node* newNext) {
  next = newNext;
}

Node* Node::getNext() {
  return next;
}

Node::~Node() {
  delete student;
  next = NULL;
}
