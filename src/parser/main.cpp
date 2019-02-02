#include <iostream>
#include <cstdlib>

using namespace std;

// This is the main class that is called to run the compiler
// This initiates the FileReader and other classes to read the input
// source file and convert it into the intermediate representation
int main( int argc, int* argv[] ) {
    if ( argc < 2 ) {
        cout << "Input the file name to compile" << endl;
        exit( 1 );
    }
    return 0;
}
