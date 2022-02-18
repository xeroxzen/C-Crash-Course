#include <iostream>

int main()
{
	char letter = 'A';
    char endPoint = 'D'; 

    for(int i = 1; i <= (endPoint-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            std::cout << letter << " ";
        }
        ++letter;

        std::cout << std::endl;
    }
    return 0;
}