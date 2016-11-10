#ifndef CHARACTER_H
#define CHARACTER_H
//=========================================================//
//                                                         //
//          Last Modified By: Adriano Santos               //
//                                                         //   
//               -11-----8-----16-                         //
//                                                         //
//       Main character class for the user / player        //
//                                                         //
//=========================================================//


//IDEA: There can be multiple keys and each key has a specific value.
//ie blue key = 2. red key = 1. certain keys work on certain doors.
//door can check key vector or set. im leaving vector for now

class Character {
    public:
        double health;              //Life points of player
        double points;              //Score for player
        vector<int> keys;           //Perhaps used for entering doorways
        int pos_on_map;             //Pretty fucking obvious

        Character();
        ~Character();

        //Feel free to add more
};



#endif
