#include <iostream>
#include <cmath>

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
}
