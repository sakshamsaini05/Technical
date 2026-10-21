#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Player
{
    string name;
    int prize;
};


class CasinoGame
{
private:
    int secretNumber;
    int attempts;
    int prize;

public:


    void setDifficulty(int level)
    {
        if (level == 1)
        {
            attempts = 10;
            prize = 100;
        }
        else if (level == 2)
        {
            attempts = 7;
            prize = 250;
        }
        else
        {
            attempts = 5;
            prize = 500;
        }
    }

    //Random number
    void generateNumber()
    {
        secretNumber = rand() % 100 + 1;
    }

    // Start the game
    void play(Player &p)
    {
        int guess;

        cout << "\nGuess a number between 1 and 100.\n";

        for (int i = 1; i <= attempts; i++)
        {
            cout << "Attempt " << i << ": ";
            cin >> guess;

            if (guess == secretNumber)
            {
                cout << "\nCongratulations, " << p.name << "!\n";
                cout << "You guessed the correct number.\n";
                cout << "You won Rs. " << prize << "!\n";

                p.prize = prize;
                return;
            }
            else if (guess < secretNumber)
            {
                cout << "Too Low!\n";
            }
            else
            {
                cout << "Too High!\n";
            }
        }

        cout << "\nGame Over!\n";
        cout << "Correct number was: " << secretNumber << endl;
    }
};

int main()
{
    srand(time(0));

    Player player;

    cout << "=================================\n";
    cout << "     CASINO NUMBER GUESSING GAME\n";
    cout << "=================================\n";

    cout << "Enter your name: ";
    cin >> player.name;

    player.prize = 0;

    int level;

    cout << "\nChoose Difficulty:\n";
    cout << "1. Easy   - 10 Attempts - Rs.100\n";
    cout << "2. Medium - 7 Attempts  - Rs.250\n";
    cout << "3. Hard   - 5 Attempts  - Rs.500\n";

    cout << "\nEnter your choice: ";
    cin >> level;

    CasinoGame game;

    game.setDifficulty(level);
    game.generateNumber();
    game.play(player);

    cout << "\nYour Total Prize: Rs. " << player.prize << endl;

    return 0;
}