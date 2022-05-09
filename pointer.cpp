# include <iostream>
# include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string food = "Pizza\n";
    string* pointer = &food;

    cout << food;
    cout << "Memory Address of Pizza: " << &food << '\n';
    cout << "Memory Address with pointer: " << pointer <<'\n';
    cout << "Deference of a pointer: "<< *pointer << '\n';

    *pointer = "Hamburguer";

    cout << "Memory address is the same: " << pointer << '\n';
    cout<< "my pointer is now: " << *pointer <<'\n';
    return 0;
}
