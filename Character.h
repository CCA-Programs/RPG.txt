#ifndef CHARACTER_H
#define CHARACTER_H
//=========================================================//
//                                                         //
//          Last Modified By: Alex "Fuck" Bahna            //
//                                                         //   
//               -11-----8-----16-                         //
//                                                         //
//       Main character class for the user / player        //
//                                                         //
//=========================================================//


class Character {
    public:
        double health;              //Life points of player
        double points;              //Score for player
        int keys;                   //Perhaps used for entering doorways
        int pos_on_map;             //Pretty fucking obvious

        Character();
        ~Character();

        //Feel free to add more
};



#endif
