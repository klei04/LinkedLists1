#include <iostream>
#include <cstring>

#pragma once

//Header for Student class

class Student {
 private:
  int ID;
  char lastName[20];
  char firstName[10];
  float GPA;
 public:

  //Getters and the constructor which contains the setters
  Student(int newID, char* newLastName, char* newFirstName, float newGPA);
  int getID();
  char* getLastName();
  char* getFirstName();
  float getGPA();
};
