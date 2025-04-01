// Specification file for the MathStack class
#ifndef MATHSTACK_H
#define MATHSTACK_H
#include "IntStack.h"

class MathStack : public IntStack
{
public:
   // Constructor
   MathStack(int s) : IntStack(s) {}

   // MathStack operations
   void add();
   void sub();
   void mult(); // Multiply top two elements
   void quot(); 
   void addAll(); // Sum all elements in the stack
   void multAll();
};
#endif