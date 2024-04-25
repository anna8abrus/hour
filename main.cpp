#include <iostream>

int main() {
     int DAY{24};
     int currentHour{0};
     int remainHour{0};
     int endHour{0};
     int reste{0};

     std::cout << "Heure actuelle : ";
     std::cin >> currentHour;

     std::cin.ignore(3, '\n');

     std::cout << "Heure restantes : ";
     std::cin >> remainHour;

     endHour = currentHour + remainHour;

     if (endHour > 24 && endHour < 48) {
          endHour = currentHour - DAY + remainHour;
          std::cout << "Heure de fin : Demain a " << endHour << "H\n" << std::endl;
     } else if (endHour == 24) {
          std::cout << "Heure de fin : " << endHour << "H\n" << std::endl;
     } else if (endHour > 48) {
          reste = remainHour/DAY;
          std::cout << "Dans : " << reste << " Jour"<< std::endl;

          remainHour = remainHour - 24 * reste;

          std::cout << "A : " << remainHour << " Heure\n" << std::endl;
     } else if (endHour <= 24) {
          std::cout << "Heure de fin : " << endHour << "H\n" << std::endl;
     }
     int i;
     std::cout << "0 to exit" << std::endl;
     std::cin >> i;
     return 0;
}