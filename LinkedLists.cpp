//This is the first part of a student list program that uses linked lists
//Author: Kevin Lei
//Date: 3/21/21

#include <iostream>
#include <cstring>

#include "Student.h"
#include "Node.h"

using namespace std;

//Main Class

//Function Prototypes
void add(Node* &head, Student* newStudent);
void print(Node* head, Node* next);

int main() {
  Node* head = NULL;

  add(head, new Student(375214, (char*)("Kevin"), (char*)("Lei"), 4.0));
  print(head, head);
  cout << endl;
  add(head, new Student(123456, (char*)("Lewis"), (char*)("Cho"), 3.5));
  print(head, head);
  cout << endl;
  add(head, new Student(654321, (char*)("Jason"), (char*)("Kim"), 3.0));
  print(head, head);
  cout << endl;
  
  return 0;
}

//Adds a new node to the linked list
void add(Node* &head, Student* newStudent) {
  Node* current = head;
  if (current == NULL) {
    head = new Node(newStudent);
  } else {
    while (current->getNext() != NULL) {
      current = current->getNext();
    }
    current->setNext(new Node(newStudent));
  }
}

//Prints out the students contained in all nodes of the linked lists
void print(Node* head, Node* next) {
  if (next == head) {
    cout << "list: ";
  }
  if (next != NULL) {
    cout << next->getStudent()->getID() << " ";
    cout << next->getStudent()->getLastName() << " ";
    cout << next->getStudent()->getFirstName() << " ";
    cout << next->getStudent()->getGPA() << " " << endl;
    print(head, next->getNext());
  }
}
