# include <iostream>
# include <string>

void function(){
    std::cout<<"using my function\n";
}
void country(std::string country = "Norway") {
    std::cout << country << "\n";
}

void arrayFunction(int myNumbers[5]) {
  for (int i = 0; i < 5; i++) {
    std::cout << myNumbers[i] << "\n";
  }
}

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main(int argc, char const *argv[])
{
    function();
    country("Brazil");
    country();
    country("USA");
    int array[5]= {10,20,30,40,60};
    arrayFunction(array);

    std::cout<<"Int: " << plusFunc(4,6) << "\n";
    std::cout<<"Double: " << plusFunc(4.3,5.4) << "\n";
    return 0;
}
