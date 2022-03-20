#include <iostream>
#include <stdlib.h>
#include <limits>


int some_function(int count)
{
    int *pArray = (int *)malloc(count * sizeof(int));

    if (pArray == NULL)
    {
        throw std::runtime_error("Failed !!!");
    }
    for (size_t i = 0; i < count; i++)
    {
        /* code */
        pArray[i] = i;
        // std::cout << pArray[i] << std::endl;
    }
    free(pArray);
    return 0;
   
}

int main()
{
    system("clear");
    try
    {
       some_function(std::numeric_limits<int> ::max());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    return 0;
}