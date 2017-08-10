/*
 * Arena.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: aguel
 */
#include "Arena.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

		Arena::Arena(){}
		~Arena::Arena(){}
		/*
		 *	addFighter(string)
		 *
		 *	Adds a new fighter to the collection of fighters in the arena. Do not allow
		 *	duplicate names.  Reject any string that does not adhere to the format
		 *	outlined in the lab specs.
		 *
		 *	Return true if a new fighter was added; false otherwise.
		 */
		bool Arena::addFighter(string info){
			while (getline(cin,info)){
				istringstream iss;
				iss.str(info);
				iss >> string name;
				if(iss.fail()){
					return false;
				}
				iss >> type;
				if(iss.fail()){
									return false;
								}
				iss >> maxHitPoints;
				if(iss.fail()){
									return false;
								}
				iss >> strength;
				if(iss.fail()){
									return false;
								}
				iss >> speed;
				if(iss.fail()){
									return false;
								}
				iss >> magic;
				if(iss.fail()){
									return false;
								}
				return true;

			}
		}

		/*
		 *	removeFighter(string)
		 *
		 *	Removes the fighter whose name is equal to the given name.  Does nothing if
		 *	no fighter is found with the given name.
		 *
		 *	Return true if a fighter is removed; false otherwise.
		 */
		bool Arena::removeFighter(string name){}

		/*
		 *	getFighter(string)
		 *
		 *	Returns the memory address of a fighter whose name is equal to the given
		 *	name.  Returns NULL if no fighter is found with the given name.
		 *
		 *	Return a memory address if a fighter is found; NULL otherwise.
		 */
		virtual FighterInterface* getFighter(string name) = 0;

		/*
		 *	getSize()
		 *
		 *	Returns the number of fighters in the arena.
		 *
		 *	Return a non-negative integer.
		 */
		virtual int getSize() = 0;





