#include <iostream>
using namespace std;

class RandomNumber
{
private:
    int number;
    
public:
    RandomGenerator()
    {
        randomNumber = 0;
    }

    void generateNumber()
    {
        this->randomNumber = rand() % 10 + 1;
    }

    void displayNumber()
    {
        cout << "Random Number: " << this->randomNumber << endl;
    }
};

int main()
{
    /* initialize random seed: */
    srand(time(0));

    RandomNumber random;

    random.generate();
    random.display();

    return 0;
}