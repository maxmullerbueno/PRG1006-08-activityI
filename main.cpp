#include <iostream>
using namespace std;

class RandomNumber
{
private:
    int number;
    
public:
    void generate()
    {

    void display()
    {
        cout << "Random Number: " << this->number << endl;
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