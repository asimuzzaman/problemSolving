#include<iostream>

using namespace std;

int main() {
    string input;

    unsigned short int t, i, j, len, ball, over;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        cin >> input;
        len = input.length();
        ball = 0;

        for(j = 0; j < len; j++)
        {
            if ((input.at(j) >= '0' && input.at(j) <= '6') || input.at(j) == 'O') //validity of a ball
                ball++;            
        }
        over = ball/6;
        ball = ball % 6;
        
        if(over > 1)
            cout << over << " OVERS ";
        else if(over == 1)
            cout << over << " OVER ";
        
        if(ball > 1)
            cout << ball << " BALLS";
        else if(ball == 1)
            cout << ball << " BALL";
        cout << endl;
        
    }
    

    return 0;
}