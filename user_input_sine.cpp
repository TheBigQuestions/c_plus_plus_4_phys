#include <iostream>
#include <sstream>
#include <cmath>

//sstream has stringstream which can read command line args

int main(int argc, char ** argv){
    double x;
    std::stringstream stream(argv[1]);
    //if stream can't assign value will return false
    if (!(stream >> x)) {
        std::cerr << "Did not assign value to x." << std::endl;
        exit(0);
    }
    std::cout << "sin(x) = " << sin(x) << std::endl;
    return 0;
}