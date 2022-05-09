#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    //While condition
    int i = 0;
    while (i<5){
        cout << i << '\n';
        i++;
    }
    // Do While
    i = 0 ;
    do {
        cout << i << '\n';
        i++;
    } while (i < 5);

    for (int k = 0; k < 5; k++){
        cout << k <<'\n';
        if (i==4){
            break;
        }
    }

    return 0;
}
