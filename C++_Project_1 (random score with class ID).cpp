#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class MyClass
{
    public:
        int myIdNumber;
        string myIdString;
        int expirationYear;
        int scorelnC;
};

int main ()
{
    MyClass myIdData;
    std::cout << "Type your number ID:" << endl;
    std::cin >> myIdData.myIdNumber ;
    std::cout << "Type your letters ID:" << endl;
    std::cin >> myIdData.myIdString ;
    std::cout << "Type your expiration Year: " << endl;
    std::cin >> myIdData.expirationYear ;
    std::cout << "Your ID is: " << myIdData.myIdString  << myIdData.myIdNumber << endl;
    std::cout << "Your ID expires at: " << myIdData.expirationYear << endl;
    srand (myIdData.myIdNumber);
    myIdData.scorelnC = (rand() % 7) + 4;
    std::cout << "Your score is: " << myIdData.scorelnC << endl;
    
    return 0;
}