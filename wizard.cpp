#include <iostream>
using namespace std;


int main()
{
//Seed random number generator
    srand(time(0));

    int life = 100;
    int enemy_life = 125;
    bool ans = 0;

cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout << "          _                  _\n"; 
cout << "         (_)                | |\n";
cout << "__      ___ ______ _ _ __ __| |\n";
cout << "\\ \\ /\\ / / |_  / _` | '__/ _` |\n";
cout << " \\ V  V /| |/ / (_| | | | (_| |\n";
cout << "  \\_/\\_/ |_/__\\__,__|_|  \\__,_|\n";

cout << "                                                               88\n";  
cout << "                                                               88\n";  
cout << "                                                               88\n";  
cout << "8b      db      d8 88 888888888 ,adPPYYba, 8b,dPPYba,  ,adPPYb,88\n";  
cout << "`8b    d88b    d8' 88      a8P' ''     'Y8 88P'   ''Y8 a8'   `Y88\n";  
cout << " `8b  d8'`8b  d8'  88   ,d8P'   ,adPPPPP88 88         8b       88\n"; 
cout << "  `8bd8'  '8bd8'   88 ,d8'      88,    ,88 88         '8a,   ,d88\n";  
cout << "    YP      YP     88 888888888 `b8bbdP'Y8 88          `'8bbdP'Y8\n"; 
cout << "\n";
cout << "                                    A Simple Game of Wizards doing Wizard Shit.\n";

while(enemy_life > 0&&life > 0){
    cout << "\n";
            cout << "\nWhat shall ye' do?\n(0) Fight! or (1) Defend\n";
            cout << "Choice: ";
            cin >> ans;
            if(ans ==0){
                cout << "\nEVIL WIZARD attacks...\n";
                int chance = rand() % 100;
                if(chance<52){
                    life = life -12;
                    cout << "The EVIL WIZARD casts dark magick!\n";
                    cout << "YOUR Hit Points: " << life << endl;
                }else{
                    cout << "You temporarily dispell the dark magick!\n";
                    cout << "YOUR Hit Points: "<< life << endl;
                }
                enemy_life = enemy_life - 10;
                int response; //
                srand(time(0)); //
                response = rand()%(1-100)+1; //
                cout << "You attack EVIL WIZARD! He snarls in pain!\n";
                cout << "EVIL WIZARD Hit Points: " << enemy_life << endl;
            }else{
                cout << "\nEVIL WIZARD attacks...\n";
                cout << "You temporarily dispell the dark magick!\n";
                cout << "YOUR Hit Points: " << life << endl;
            }
        }
        cout << "Final Hit Points: " << life << endl;
        if (enemy_life < 1) {
            cout << "'Dark God of arcane magick! I shall return!'\n\n";
        }
        else {
        cout << "'Don't mess with an Evil Wizard when he's wizarding!'\n\n";
        }
        //cout << "Remember: reality is an illusion. The universe is a hologram. Buy gold. BYE!\n";
        cout << endl;   
}
