#include <iostream>

int simple_random(int seed=0, int step=7)
{
    int the_x = seed;
    for (int i = 0; i < step; i++)
    {
        the_x = (7 * the_x + 5) % 11;
    }

    return the_x;
}

int main()
{
    int test_x = simple_random(2, 1);
    std::cout << test_x << "\n";
    return 0;
}