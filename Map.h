#ifndef MAP_H
#define MAP_H

//Last modified by Todd Selwitz

//This header file defines the map that the character traverses.

//The vector holds the positions, and the enumerator determines what is on that square.

//EMPTY means that that square is not walkable, has no traps.
//OK means that the square is walkable and has no traps
//WALL implies the square is  not walkable (different from EMPTY?)
//DOOR represents a link to another level or another part of the same level
//WATER could be used for fishing, healing, etc.  (undetermined for now)
//LAVA steadily causes damage over time.
//TRAP has a one-time hazard (could be level dependent)
//ENEMY starts an "enemy" event

enum state <EMPTY, OK, WALL, DOOR, WATER, LAVA, TRAP, ENEMY>	//Types of floor tiles ("OK" means 
								//the tile is walkable and has no traps

class Map{
	private:
	vector<vector <int> > map;			//holds all positions on the map.
	int character_pos;				//holds the character location	
};	
