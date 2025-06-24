#include <iostream>

void loading(int GHz = 60, int columnLenght = 100);

int main()
{

    std::cout << "Hello, enter your monitor's GHz: ";
    int GHzUser;
    std::cin >> GHzUser;

    loading(GHzUser);

    return 0;
}

void loading(int GHz, int columnLenght)
{
    bool loadingArr[1][columnLenght + 2];
    for (int i = 0; i < columnLenght + 2; ++i) // инициализация
        loadingArr[0][i] = false;
    loadingArr[0][columnLenght + 1] = true;

    for (int i = 0; i <= columnLenght; ++i)
    {
        std::cout << i << '%' << std::endl;
        for (int j = 0; j < 100; ++j)
        {
            if (loadingArr[0][j] == true)
            {
                std::cout << '#';
            }
            else
            {
                std::cout << ' ';
            }

        }
            std::cout << '\n';
        loadingArr[0][i + 1] = true;
        long j = 0;
        while (j < (GHz * 1000000)) ++j; // тк у меня моник на 75 герц ( плавнее будет загружаться )
        if (i == columnLenght)
        {
            return;
        }
        system("clear");
    }
}
