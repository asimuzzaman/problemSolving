#include<iostream>

using namespace std;

int main() {
    unsigned int lower = 0, upper = 1000000, i;
    string input;

    for(i = 0; i < 25; i++)
    {
        cout << (lower+upper)/2 << endl;
        cin >> input;

        if (input.compare("Smaller") == 0) {
            upper = (lower+upper)/2 - 1; //choosing bigger half
        } else if (input.compare("Bigger") == 0) {
            lower = (lower+upper)/2 + 1; //choosing smaller half
        } else
            break; //BINGO! Number found
    }
    
    return 0;
}