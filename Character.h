#ifndef CHARACTER_H
#define CHARACTER_H
//=========================================================//
//                                                         //
//          Last Modified By: Todd Selwitz                 //
//                                                         //   
//               -11-----11-----16-                        //
//                                                         //
//       Main character class for the user / player        //
//                                                         //
//=========================================================//


//IDEA: There can be multiple keys and each key has a specific value.
//ie blue key = 2. red key = 1. certain keys work on certain doors.
//door can check key vector or set. im leaving vector for now

//
class Character {
    public:
	int lives; 		    //Number of lives before you are sent to the beginning of the dungeon
        double health;              //Life points of player
	double points;              //Score for player
        vector<int> keys;           //Perhaps used for entering doorways
	
	int items[10];              //Idea: set item[i] to x if player has x of that item.
				    //If item '0' is a health potion item[0] might have a
				    //value of 3, for example
        
	int pos_on_map;             //Pretty fucking obvious

        Character();
        ~Character();

        //Feel free to add more
};



#endif
