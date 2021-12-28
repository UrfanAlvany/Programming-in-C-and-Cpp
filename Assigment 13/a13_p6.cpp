#include <iostream>
#include <vector>
#include <stdexcept>
 
using namespace std;
int main()
{
    vector <int> vecOfNums;
    vecOfNums.insert(vecOfNums.end(), 20, 8); //inserting @ 15 times
    try
    {
        int index = 20; //index 15
        vecOfNums.at(index) = 0; //looking for element at 16th position
    }
    catch (const std::out_of_range & ex)
    {
        std::cerr << "out_of_range Exception Caught :: " << ex.what() << std::endl; //printing error with cerr
    }
    return 0;
}