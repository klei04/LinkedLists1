#include <iostream>
#include <cstring>

#include "Student.h"

//Header for Node class

class Node {
 private:
  Student* student;
  Node* next;
 public:
  Node(Student* newStudent); //Constructor sets student and makes next point to NULL
  Student* getStudent(); //Getter for student
  void setNext(Node* newNext); //Setter for next
  Node* getNext(); //Getter for next
  ~Node(); //Destructor deletes the student and sets next back to NULL
};
