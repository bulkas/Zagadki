#include <iostream>
#include "zagadki_igork.hpp"
#include "zagadki_igorm.hpp"
#include "zagadki_jakub.hpp"
#include "zagadki_oliwier.hpp"

using namespace std;

int main()
{
    char opcja = '0';

    cout << "ZAGADKI" << endl;
    cout << " WYBIERZ ZAGADKE " << endl;
    cout << " 1 - zagadka igora k " << endl;
    cout << " 2 - zagadka igora m " << endl;
    cout << " 3 - zagadka jakuba  " << endl;
    cout << " 4 - zagadka oliwiera" << endl;
    cin >> opcja;
    switch(opcja){
        case '1': zag_igork();
    break;
        case '2': zag_igorm();
    break;
        case '3': zag_jakub();
    break;
        case '4': zag_oliwier();
    break;


    }


    return 0;
}

