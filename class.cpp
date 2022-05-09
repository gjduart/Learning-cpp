# include <iostream>
# include <string>

class MyClass
{  
    public:
        int myNum;
        std::string myString;
        void myMethod(){
            std::cout<<"Hello World!";
        }
        void otherMethod();
};
struct
{
    int myNum;
    std::string myString;
} number;

void MyClass::otherMethod(){
    std::cout<<"Other Hello World";
}

int main(int argc, char const *argv[])
{
    MyClass myObj;
    myObj.myNum = 15;
    myObj.myString = "Some Text";

    number.myNum = 1;


    std::cout<< myObj.myNum << "\n";
    std::cout << myObj.myString;
    myObj.myMethod();
    myObj.otherMethod();
    std::cout <<number.myNum << '\n';
    std::cout <<number.myString << '\n';

    return 0;
}
