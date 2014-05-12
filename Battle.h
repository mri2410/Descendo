#ifndef BATTLE_H
#define BATTLE_H

#include "Role.h"
#include "Animation.h"


class Battle
{
private:
    int choose;

public:
    Battle();
    ~Battle();
    void fight(role &player, role enemy);
} instBattle;

Battle::Battle()
{}

Battle::~Battle()
{}

void Battle::fight(role &player,role enemy)
{
    enemy.hp = 20;
    cout<<"------------------------"<<endl
    <<"Monster appears!"<<endl;

    images.monsterImage();

    while(player.hp>0 && enemy.hp>0)
    {
        cout<<"Please enter a number between 1 and 4 : " << endl
        <<"1.Atteck"<<endl
        <<"2.Defend"<<endl
        <<"3.Items"<<endl
        <<"4.Escape"<<endl;
        cin>>choose;

        // Fighting interface
        switch(choose)
        {
            case 1:
                images.fightImage();
                enemy.hp=enemy.hp-((player.str-enemy.def)*2);
                player.hp=player.hp-(enemy.str-player.def);

                if ( (player.str-enemy.def) <= 0)
                    cout << "You inflicted 0 damage on the enemy." << endl;
                else
                    cout<<"You inflicted "<<((player.str-enemy.def)*2)<<" damage on the enemy."<<endl;

                if(enemy.str-player.def <= 0)
                    cout<<"Enemy inflicted 0 damage on you."<<endl;
                else
                    cout<<"Enemy inflicted "<<(enemy.str-player.def)<<" damage on you."<<endl;
                break;

            case 2:
                player.hp=player.hp-(enemy.str-player.def);
                cout<<"You received "<<(enemy.str-player.def)<<" damage."<<endl;
                break;

            case 3:
                cout<<"You have not found any item!"<<endl;
                break;

            case 4:
                cout << "You have successfully escaped.";
                return;
        }
    }

    if(player.hp <= 0)              // LOSS
    {
        cout << "Unfortunately your journey ends here." << endl;
        cout << "You have been slain. Game over!" << endl;
        exit(0);
    }

    else                            // WIN
    {
        cout<<"You win!"<<endl;
        cout<<"Money obtained " << enemy.money << endl;
        player.money += enemy.money;
    }

}
#endif // BATTLE_H
