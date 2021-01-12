#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{
    std::cout << "Welcome to my program!\n";
    std::cout << "This is a number guessing game, the number will be 1-20\nStart guessing: ";
    srand(time(nullptr));
    const size_t min{ 1 };
    const size_t max{ 20 };
    size_t number{ rand() % max + min };
    int guess{};
    int score{ 20 };
    while (guess != number) {
        score--;
        std::cin >> guess;
        if (guess > number) {
            std::cout << "Too high!\nCurrent Score : " << score << "\nguess again : ";
        }
        else if (guess < number) {
            std::cout << "Too low!\nCurrent Score : " << score << "\nguess again :";
        }
    }
    std::cout << "Congratulations! You guessed correctly!\nFinal Score: " << score << std::endl;
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu