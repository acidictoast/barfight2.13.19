#include <iostream>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <stdlib.h>
#include <windows.h>

using namespace std;
int main()
{

   int health = 10, attack, block, counter;
   srand(time(0));
   counter = 0;
   cout << "Hello there challenger! Welcome to the salty spitoon.\n";
   cout << "You already know the rules, if you survive three rounds with my prized fighter\nyou win all the gold in my chest buried out back.\n";
   cout << "\nStill interested?\n";
   system("pause");
   cout << "hehehe...Good luck!";
   Sleep(3000);
   system("CLS");

    cout << "You hesitantly step in the ring to face your foe.";
    Sleep(3000);
    system("CLS");
        while (counter < 3 ){
         counter++;
         attack = rand()%5;
         block = rand()%5;
         cout << "The man swings wildly at you!...";
         Sleep(2500);
         if(block >= attack){
            cout << "You successfully block his attack!\n";
            Sleep(1500);
                            }
                    else{
                      cout << "You weren't quick enough and your block fails!\n";
                      Sleep(1750);
                      cout << "You were hit for: " << attack << " damage!";
                      cout << "\nHP: " << health << "-" << attack << " = " << health - attack << "\n";
                                health = health-attack;
                                Sleep(1500);
                                };
                        if (health > 0 && counter < 3){
                            continue;
                        }

                        else if (health < 1 ){
                        cout << "Womp-womp, you have died.";
                        break;}

                        else if (counter = 3 && health > 0){
                        cout << "Congratulations you survived!";
                        break;}


                             }

}
