#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[])
{
    srand (time(NULL));
    std::ofstream file;
    file.open ( "../orders.txt" );
    int iterations = atoi(argv[1]);;

    for ( int i = 1; i <= iterations; i++ ) {
        file << "Order " << i << "\n";
        int parts = rand() % 3 + 3;
        for (size_t j = 0; j < parts; j++ ) {
            int number = rand() % 3;
            if (number > 0)
                file << "\t Taks 1 1 0\n";
            else
                file << "\t Taks 1 0 0\n";
        }
        file << "EndOrder\n\n";
    }

    file.close();
    return 0;
}
