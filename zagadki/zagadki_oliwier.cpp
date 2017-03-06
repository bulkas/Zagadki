#include "zagadki_oliwier.hpp"
#include <iostream>
void zag_oliwier()
{
    int wynik;
    std::cout << "oblicz:" << std::endl;
    std::cout << "(2+8*6/2)-32=" <<std::endl;
    std::cin >> wynik;
    if (wynik ==-2)
    {
        std::cout << "dobry wynik" << std::endl;
    }
    else
    {
        std::cout << "niestety zly wynik" << std::endl;
        while (wynik != -2)
        {
            std::cout << "sproboj jeszcze raz" << std::endl;
            std::cout << "(2+8*6/2)-32=" <<std::endl;
            std::cin >> wynik;

        }
        if (wynik ==-2)
        {
            std::cout << "dobry wynik" << std::endl;
        }
    }
}
