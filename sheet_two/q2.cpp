#include <iostream>
using namespace std;

void coinToss() {
    int toss = rand() % 2 + 1;
    if (toss == 1) {
        cout << "Head" << endl;
    }
    else {
        cout << "Tail\n";
    }
}
int main()
{
    int time;
    cout << "How many times the coin should be tossed ? ";
    cin >> time;
    for (int i = 0; i <= time; i++) {
        cout << i << " : ";
        coinToss();
    }

} 
//                               Another Answer
/*
    #include <iostream>
using namespace std;

int coinToss()
{
    return 1 + rand() % 2;
}

int main()
{
    int timesOfTossing, curToss;
    cout << "How many times the coin should be tossed ? ";
    cin >> timesOfTossing;

    for (int i = 1; i <= timesOfTossing; i++)
    {
        curToss = coinToss();

        cout << i << " : ";

        switch (curToss)
        {
        case 1:
            cout << "Heads\n";
            break;
        case 2:
            cout << "Tails\n";
            break;
        }
    }
}
*/