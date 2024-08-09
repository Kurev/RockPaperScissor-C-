#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int choose;
    int yourScore = 0;
    int aiScore = 0;
    while (yourScore < 5 && aiScore < 5) {

        srand(static_cast<unsigned int>(time(0)));
        int randomNumber = 1 + rand() % 3;

        cout << "Rock Paper And Scissor\n";
        cout << "Rock[1] Paper[2] Scissor[3]: ";
        cin >> choose;

        if (choose == 1) {
            if (randomNumber == 1) {
                cout << "Draw\n";
                cout << "Rock vs Rock";
            }
            else if (randomNumber == 2) {
                cout << "You Lose\n";
                cout << "Rock vs Paper";
                aiScore++;

            }
            else if (randomNumber == 3) {
                cout << "You Win\n";
                cout << "Rock vs Scissor";
                yourScore++;
            }
        }

        else if (choose == 2) {
            if (randomNumber == 1) {
                cout << "You Win\n";
                cout << "Paper vs Rock";
                yourScore++;

            }
            else if (randomNumber == 2) {
                cout << "Draw\n";
                cout << "Paper vs Paper";
            }
            else if (randomNumber == 3) {
                cout << "You Lose\n";
                cout << "Paper vs Scissor";
                aiScore++;
            }
        }

        else if (choose == 3) {
            if (randomNumber == 1) {
                cout << "You Lose\n";
                cout << "Scissor vs Rock";
                aiScore++;
            }
            else if (randomNumber == 2) {
                cout << "You win\n";
                cout << "Scissor vs Paper";
                yourScore++;
            }
            else if (randomNumber == 3) {
                cout << "Draw\n";
                cout << "Scissor vs Scissor";
            }
        }

        cout << "\n\nYour Score: " << yourScore <<"\n";
        cout << "Enemy Score: " << aiScore << "\n\n";

        if(yourScore == 5) {
            cout << "Victory!!! You reached 5 points!\n";
        }
        else if (aiScore == 5) {
            cout << "Defeat! The computer reached 5 points.\n";
        }
    }

    return 0;
}
