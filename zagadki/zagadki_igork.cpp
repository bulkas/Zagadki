#include "zagadki_igork.hpp"
#include <iostream>
void zag_igork()
{
    int liczba;

    std::cout << "|TO|JEST|MOJA|ZAGADKA|" << std::endl;
    std::cout << "          |           " << std::endl;
    std::cout << "          |           " << std::endl;
    std::cout << " mlotek i gwozdz kosztuja 1,1 dolara,  " << std::endl;
    std::cout << " a mlotek kosztuje o jednego dolara wiêcej od gwozdzia.  " << std::endl;
    std::cout << " Ile centow kosztuje gwozdz? " << std::endl;
    std::cout << " ODPOWEIDZ " << std:: endl;
    std::cin >> liczba;



   while ( liczba != 5 )
    {
        std::cout << " ZLE .!!! " << std:: endl;
        std::cin >> liczba;
    }
        std::cout << " DOBRZE !!! " << std::endl;
}














