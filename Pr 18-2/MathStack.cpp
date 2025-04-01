// Implementation file for the MathStack class
#include "MathStack.h"

//***********************************************
// Member function add. add pops                *
// the first two values off the stack and       *
// adds them. The sum is pushed onto the stack. *
//***********************************************

void MathStack::add()
{
   int num, sum;

   // Pop the first two values off the stack.
   pop(sum);
   pop(num);

   // Add the two values, store in sum.
   sum += num;

   // Push sum back onto the stack.
   push(sum);
}

//***********************************************
// Member function sub. sub pops the            *
// first two values off the stack. The          *
// second value is subtracted from the          *
// first value. The difference is pushed        *
// onto the stack.                              *
//***********************************************

void MathStack::sub()
{
   int num, diff;

   // Pop the first two values off the stack.
   pop(diff);
   pop(num);

   // Subtract num from diff.
   diff -= num;

   // Push diff back onto the stack.
   push(diff);
}

// Multiply top two numbers on the stack
void MathStack::mult()
{
	int num, product;
	pop(product);
	pop(num);
	product *= num;
	push(product);
}

// Divide top two numbers on the stack
void MathStack::quot()
{
	int num, quotient;
	pop(quotient);
	pop(num);
	if (num == 0)
	{
		cout << "Error: Division by zero." << endl;
		push(quotient);
	}
	else
	{
		quotient /= num;
		push(quotient);
	}
}


// Add all numbers in the stack
void MathStack::addAll()
{
	int sum = 0, temp;
	while (!isEmpty())
	{
		pop(temp);
		sum += temp;
	}
	push(sum);
}

// Multiply all numbers in the stack
void MathStack::multAll()
{
	if (isEmpty()) return;
	int product = 1, temp;
	while (!isEmpty())
	{
		pop(temp);
		product *= temp;
	}
	push(product);
}

int main()
{
	int catchVar; // Variable to hold popped values
	MathStack stack(5);

	cout << "Pushing 3\n";
	stack.push(3);
	cout << "Pushing 6\n";
	stack.push(6);
	stack.add();
	cout << "The sum is ";
	stack.pop(catchVar);
	cout << catchVar << endl << endl;

	cout << "Pushing 7\n";
	stack.push(7);
	cout << "Pushing 10\n";
	stack.push(10);
	stack.sub();
	cout << "The difference is ";
	stack.pop(catchVar);
	cout << catchVar << endl;

	cout << "Pushing 4\n";
	stack.push(4);
	cout << "Pushing 5\n";
	stack.push(5);
	stack.mult();
	cout << "The product is ";
	stack.pop(catchVar);
	cout << catchVar << endl;

	cout << "Pushing 20\n";
	stack.push(20);
	cout << "Pushing 4\n";
	stack.push(4);
	stack.quot();
	cout << "The quotient is ";
	stack.pop(catchVar);
	cout << catchVar << endl;

	cout << "Adding all elements in the stack\n";
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.addAll();
	stack.pop(catchVar);
	cout << "Sum of all elements: " << catchVar << endl;

	cout << "Multiplying all elements in the stack\n";
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.multAll();
	stack.pop(catchVar);
	cout << "Product of all elements: " << catchVar << endl;

	return 0;
}
