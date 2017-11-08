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

            int type = rand() % 3, new_type;
            int repetition = 0;

            for (int i = 0; i < 3; i++)
            {
                if (repetition != 7)
                    new_type = rand() % 3;
                else
                {
                    new_type = rand() % 2;
                    if (new_type >= type)
                        new_type++;
                }

                repetition = new_type == type ? repetition + 1 : 0;
                type = new_type;
            }

            if (type > 0)
                file << "\t Task 1 1 0\n";
            else
                file << "\t Task 1 0 0\n";
        }
        file << "EndOrder\n\n";
    }

    file.close();
    return 0;
}
