#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

int main(){
    // std::string Variable;
    // std::getline(std::cin >> std::ws, Variable);

    // double x = 3.14159, y = 4, z; 
    // z = std::max(x, y);
    // z = std::min(x, y);
    // z = pow(x, y);
    // z = sqrt(y);
    // z = abs(x);
    // z = ceil(x);
    // z = floor(x);
    // z = round(x);
    // z = sin(x/2);

    // std::cout << "x: " << x << std::endl;
    // std::cout << "y: " << y << std::endl;
    // std::cout << "z: " << z << std::endl;

    // std::cout << "Enter Side A: ";
    // double a, b, c;
    // std::cin >> a;
    // std::cout << "Enter Side B: ";
    // std::cin >> b;

    // c = sqrt(pow(a, 2) + pow(b, 2));
    // std::cout << "Hypotenuse: " << c << std::endl;

    // ? use switch case instead of if else

    // ? ternary operator ?: = replace to an if else statement
    // ? condition ? expression1 : expression2;
    // int grade = 75;
    // if(grade <= 60){
    //     std::cout << "You failed the exam." << std::endl;
    // } else if(grade > 60){
    //     std::cout << "You passed the exam." << std::endl;
    // }
    // ? but instead of using if else statement, we can use a ternary operator
    // std::cout << (grade <= 60 ? "You failed the exam." : "You passed the exam.") << std::endl;
    // ? another example of using a ternary operator
    // int number = 9;
    // number % 2 == 0 ? std::cout << "Even" : std::cout << "Odd";
    // ? another example of using a ternary operator with boolean
    // bool Hungry = true;
    // Hungry ? std::cout << "You are Hungry" : std::cout << "You are Full";

    // ! Logical Operators
    // ? Logical AND (&&) = true if both operands are true
    // Example: 
    // true && true = true
    // true && false = false
    // false && false = false

    // ? Logical OR (||) = true if at least one operand is true
    // Example: 
    // true || false = true
    // false || false = false
    // true || true = true

    // ? Logical NOT (!) = true if the operand is false and the reverse is true
    // Example: 
    // !true = false
    // !false = true

    // ? Logical XOR (^) = true if exactly one operand is true, but not both
    // Example:
    // true ^ false = true (1 ^ 0 = 1)
    // false ^ true = true (0 ^ 1 = 1)
    // true ^ true = false (1 ^ 1 = 0)
    // false ^ false = false (0 ^ 0 = 0)


    // ? Logical NOR (!||) = true if both operands are false
    // Example: 
    // !true || true = false
    // !false || false = true

    // ? Logical NAND (!&&) = true if at least one operand is false
    // Example: 
    // !(true && true) = false
    // !(true && false) = true
    // !(false && false) = true

    // ? Logical XNOR (==) = true if both operands are the same, either true or false
    // Example: 
    // true == true = true
    // false == false = true
    // true == false = false
    // false == true = false

    // ? Bitwise OR (|) = compares each bit of two numbers and returns 1 if at least one bit is 1, else returns 0
    // Example: 
    // 5 | 3   -> 0101 | 0011 = 0111 (7 in decimal)
    // Output: 7

    // ? Bitwise AND (&) = compares each bit of two numbers and returns 1 only if both bits are 1, else returns 0
    // Example: 
    // 5 & 3   -> 0101 & 0011 = 0001 (1 in decimal)
    // Output: 1

    // ! String Methods
    // std::string name;
    // std::cout << "Enter your name: ";
    // std::getline(std::cin >> std::ws, name);
    // ? name.append("new substring") = appends the new substring to the end of the string
    // ? name.at(index) = returns the character at the index
    // ? name.clear() = clears the string
    // ? name.compare("string") = returns 0 if the strings are equal, -1 if the first string is less than the second string, 1 if the first string is greater than the second string
    // ? name.erase(start, length) = erases the substring
    // ? name.empty() = returns true if the string is empty, false otherwise
    // ? name.find("substring") = returns the index of the first occurrence of the substring
    // ? name.find_last_of("substring") = returns the index of the last occurrence of the substring
    // ? name.insert(start, "new substring") = inserts the new substring at the start index
    // ? name.replace(start, length, "new substring") = replaces the substring with the new substring
    // ? name.length() = returns the length of the string
    // ? name.substr(start, length) = returns a substring of the string

    // ! while loops
    // while(name.empty()){ 
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin >> std::ws, name);
    // }
    // std::cout << "Hello " << name << std::endl;

    // ! do while loops are like while loops, but they run at least once
    // do{
    //     std::cout << "Enter your name: ";
    //     std::getline(std::cin >> std::ws, name);
    // } while(name.empty());
    // std::cout << "Hello " << name << std::endl;

    // ! for loops
    // for(int i = 0; i < 10; i++){
    //     std::cout << i << std::endl;
    // }

    // break and continue
    // break = exits the loop (breaks out of the loop)
    // continue = skips the current iteration of the loop and goes to the next iteration (skip the current iteration)
    // for(int i = 0; i < 10; i++){
    //     if(i == 5){
    //         break;
    //     }
    //     std::cout << i << std::endl;
    // }
    // ? Output: 0 1 2 3 4
    // for(int i = 0; i < 10; i++){
    //     if(i == 5){
    //         continue;
    //     }
    //     std::cout << i << std::endl;
    // }
    // ? Output: 0 1 2 3 4 6 7 8 9

    // pseudo-random = NOT truly random, but it is close enough to be considered random
    // srand(time(NULL)); // seed the random number generator with the current time
    // int randomNumber = rand(); you can also use rand() % n to get a random number between 0 and n-1
    // std::cout << "Random Number: " << randomNumber << std::endl;
    // ! Task Create Random Event Generator
    // ? 1. Create a random number between 1 and 4
    // ? 2. If the number is 1, print "You found a treasure!"
    // ? 3. If the number is 2, print "You found a monster!"
    // ? 4. If the number is 3, print "You found a potion!"
    // ? 5. If the number is 4, print "You found a trap!"
    // srand(time(0)); // seed the random number generator with the current time
    // int Random = rand() % 4 + 1;
    // switch(Random){
    //     case 1:
    //         std::cout << "You found a treasure!" << std::endl;
    //         break;
    //     case 2:
    //         std::cout << "You found a monster!" << std::endl;
    //         break;
    //     case 3:
    //         std::cout << "You found a potion!" << std::endl;
    //         break;
    //     case 4:
    //         std::cout << "You found a trap!" << std::endl;
    //         break;
    // }
    // 
    // int num;
    // int guess;
    // int tries;

    // srand(time(0));
    // num = rand() % 2048 + 1;

    // std::cout << "Welcome to the guessing game!" << std::endl;

    // do{
    //     std::cout << "Guess a number between 1 and 2048: ";
    //     std::cin >> guess;
    //     tries++;

    //     if(guess > num){
    //         std::cout << "Too high!" << std::endl;
    //     } else if(guess < num){
    //         std::cout << "Too low!" << std::endl;
    //     } else{
    //         std::cout << "Congratulations! You guessed the number in " << tries << " tries." << std::endl;
    //     }
    // }while(guess != num);

    // double square(double length){
    //     return length * length;
    // }
    // double area = square(5.0);
    // std::cout << "Area of the square: " << area << std::endl;

    // * Function Overloading
    // ? Function overloading is a feature in C++ that allows you to define multiple functions with the same name but different parameter types or numbers of parameters.
    // ? example:
    // double add(double a, double b){
    //     return a + b;
    // }
    // int add(int a, int b){
    //     return a + b;
    // }
    // double add(double a, double b, double c){
    //     return a + b + c;
    // }
    // all three functions have the same name, but they have different parameter types or numbers of parameters.
    // std::cout << add(5.0, 3.0) << std::endl; // calls the first function
    // std::cout << add(5, 3) << std::endl; // calls the second function
    // std::cout << add(5.0, 3.0, 2.0) << std::endl; // calls the third function

    // ! Local and Global Variables
    // ? Local variables are variables that are declared inside a function or a block of code. They can only be accessed within that function or block of code.
    // ? Global variables are variables that are declared outside of any function or block of code. They can be accessed from anywhere in the program.
    // ? Note: Functions use local variables before global variables.
    // ? Example:
    // int x = 5; // global variable
    // void myFunction(){
    //     int x = 10; // local variable
    //     std::cout << "Local x: " << x << std::endl; // prints 10
    //     std::cout << "Global x: " << ::x << std::endl; // prints 5 (:: means global variable)
    // }

    // array = a collection of elements of the same type, stored in contiguous memory locations.
    // ? Example:
    // int numbers[5] = {1, 2, 3, 4, 5}; ( we use {} and not () because we are initializing an array)
    // ? if you dont want to assign a value to an array, you can use the following syntax:
    // int numbers[n]; // this will create an array of n integers, but they will not be initialized to any value
    // you can use one type of variables in an array only
    // if you want to iterate through an array, you can use a for loop
    // for(int i = 0; i < sizeof(numbers)/sizeof(element type); i++){
    //     std::cout << numbers[i] << std::endl;
    // }
    //
    // if you want to use different types of variables, you can use a struct or a class
    // ? Example:
    // struct Person{
    //     std::string name;
    //     int age;
    // };
    // Person people[5]; // this will create an array of 5 Person objects
    // people[0].name = "John";
    // people[0].age = 25;

    // ! sizeof() function
    // ? sizeof() function returns the size of a variable or data type in bytes.
    // ? Example:
    // sizeof(int) = 4 bytes
    // sizeof(double) = 8 bytes
    // sizeof(char) = 1 byte
    // sizeof(float) = 4 bytes
    // sizeof(bool) = 1 byte
    // sizeof(array) = size of the array in bytes (number of elements * size of each element)

    // foreach loop = a loop that iterates through each element of a collection (array, vector, etc.)
    // ? Example:
    // int numbers[5] = {1, 2, 3, 4, 5};
    // for(int num : numbers){
    //     std::cout << num << std::endl;
    // }

    // fill(begin, end, value) = fills the range [begin, end) with the value
    // ? Example:
    // std::string foods[100];
    // std::fill(std::begin(foods), std::end(foods), "Pizza");
    // or std::fill(foods, foods + 100, "Pizza");
    // for(std::string food : foods):
    //     std::cout << food << std::endl;

    // Multidimensional arrays = an array of arrays (array with more than one dimension)
    // ? Example:
    // int matrix[3][3] = {{1, 2, 3},
    //                     {4, 5, 6},
    //                     {7, 8, 9}}; // this will create a 3x3 matrix
    // ? if you want to iterate through a multidimensional array, you can use nested for loops
    // int rows = sizeof(matrix)/sizeof(matrix[0]); // number of rows
    // int cols = sizeof(matrix[0])/sizeof(matrix[0][0]); // number of columns
    // for(int i = 0; i < rows; i++){
    //     for(int j = 0; j < cols; j++){
    //         std::cout << matrix[i][j] << " ";
    //     }
    //     std::cout << std::endl;
    // }

    // memory address = a location in memory where a variable is stored
    // a memory address can be accessed using the & (address of) operator
    // ? Example:
    // int x = 5;
    // std::cout << "Memory address of x: " << &x << std::endl; // prints the memory address of x

    // swap by Value vs swap by Reference
    // ? swap by value = creates a copy of the variable and swaps the copies, not the original variables
    // ? swap by reference = swaps the original variables, not the copies
    // ? Example:
    // void swap(int a, int b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    // int x = 5, y = 10;
    // swap(x, y); // this will not swap x and y, because we are passing the values, not the references
    // std::cout << "x: " << x << std::endl; // prints 5
    // std::cout << "y: " << y << std::endl; // prints 10
    //
    // void swap(int &a, int &b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    // int x = 5, y = 10;
    // swap(x, y); // this will swap x and y, because we are passing the references, not the values
    // std::cout << "x: " << x << std::endl; // prints 10
    // std::cout << "y: " << y << std::endl; // prints 5
    // ? Note: you can also use pointers to swap variables, but it is not recommended because it is more complex and less readable than using references.

    // Const parameters = parameters that cannot be modified inside the function
    // ? Example:
    // void myFunction(const int x){
    //     x = 10; // this will cause a compilation error, because x is a const parameter
    // }
    // int main(){
    //     int x = 5;
    //     myFunction(x); // this will call the function, but x will not be modified
    //     std::cout << "x: " << x << std::endl; // prints 5

    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address
    //
    // & address-of operator
    // * dereference operator
    // ? Example:
    // std::string name = 'Bro';
    // std::sring *pName = &name;
    // std::cout << pName; // it will print memory address
    // std::cout << *pName; // it will print 'name' value
    
    // NULL Value = a special value that means something has no value
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)
    // nullptr = keyword represents a null pointer literal
    // nullptr are helpful when determining if an address was successful assigned to a pointer
    // ? Example:
    // int *pointer = nullptr;
    // int x = 123;
    // *pointer = &x;
    // if(pointer == nullptr){
    //     std::cout << "address was not assigned"; 
    // }else{
    //     std::cout << "address was assigned";
    // }
    //
    // ! When using pointers, be careful that your code isn't
    // ! dereferencing nullptr or pointing to free memory
    // ! this will cause undefined behavior
    
    // Dynamic memory = memory that is allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory is the heap rather than the stack
    //
    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible.
    //                  especially when accepting user input.
    // ? Example: 
    // int *pNum = NULL;
    // pNum = new int;
    // std::cout << "address: " << pNum << '\n';
    // delete pNum; to Delete the dynamic memory to prevent memory leak
    // ? Example:
    // char *pGrades = NULL;
    // int size;
    //
    // std::cout << "How many grades to enter in?: ";
    // std::cin >> size;
    //
    // pGrades = new char[size];
    //
    // for(int i = 0; i < size; i++){
    //     std::cout << "Enter grade #" << i + 1 << ": ";
    //     std::cin >> pGrades[i];
    // }
    //
    // for(int i = 0; i < size; i++){
    //     std::cout << pGrades[i] << " ";
    // }
    //
    // delete[] pGrades;
}

