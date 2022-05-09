#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    int x = 50;
    int y = 10;
    if (x > y){
        std::cout << "Hello World\n";
    }

    int time = 22;
    if (time < 10) {
        std::cout << "Good morning.";
    } else if (time < 20) {
        std::cout << "Good day.";
    } else {
        std::cout << "Good evening.";
    }
    //short hand conditions
    time = 20;
    std::string result = (time < 18) ? "Good day." : "Good evening.";
    std::cout << result;
    switch (4)
    {
    case 1:
            std::cout<< "monday";
            break;
        case 2:
            std::cout<< "tuesday";
            break;  
        case 3:
            std::cout<< "wednesday";
            break;
        case 4:
            std::cout<< "Thursday";
            break;
        case 5:
            std::cout<< "Friday";
            break;
        case 6:
            std::cout<< "Saturday";
            break;
        case 7:
            std::cout<< "Sunday";
            break;
        return 0;
    }
}

