struct stack {
    unsigned int count;
    int array[32]; // Container of 32 bits to represent a 4 byte unsigned int
};

// Function returns nothing
// It pushes the int number onto the Stack and prints Stack Overflow in case
// that we try to push a new element that increases the stack size
// more than the amount allowed
void push(struct stack *Stack, int number);

// Function returns nothing
// It pops an element off the Stack and prints Stack Underflow in case
// that we try to pop another when the stack size is actually 0
void pop(struct stack *Stack);

// Function returns nothing
// It empties the Stack by popping each element from the stack
void empty(struct stack *Stack);

// Function returns an integer value
// It returns 1 if the stack is empty and it returns 0 otherwise
int isEmpty(struct stack *Stack);