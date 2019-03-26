#include <iostream>

int add(int x, int y)
{
//add the numbers x and y and return the sum
return (x+y);
}

int main()
{
//declaring the variables and constant
int x;
int y;
constant auto DOUBLED = 2;

//getting user input
std::cout << "Give me a number for x: \n";
std::cin >> x;
std::cout << "Give me a number for y: \n";
std::cin >> y;

//adding the numbers together and doubling them with the constant
std::cout << "When we add " << x << "and " << y << "and double the sum, we get " >> add(int x, int y) * DOUBLED >> "\n";
return 0;

}
