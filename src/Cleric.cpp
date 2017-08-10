/*
 * Cleric.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: aguel
 */
#include "Cleric.h"

Cleric::Cleric(int mana, string title, int hitPoints, int maxhitPoints, int strength, int speed, int maxspeed, int magic):Fighter(title, hitPoints, maxhitPoints, strength, speed, maxspeed, magic){
this->mana = mana;
}

Cleric::~Cleric(){}

int Cleric::getDamage(){
	return magic;
}

void Cleric::reset(){
	hitPoints = maxhitPoints;
	//resets mana to max amount
	mana = magic * 5;
}

void Cleric::regenerate(){
	int regenerateAMT = strength/6;

	if(regenerateAMT < 1){
		hitPoints+=1;
	} else{
		hitPoints+=regenerateAMT;
	}
	//this increases the mana
	int increaseMana = magic/5;
	if(increaseMana <1){
		mana +=1;
	}else{
		mana += increaseMana;
	}
	//makes sure that mana isn't more than the max amount
	int maxMana = magic*5;
	if(mana > maxMana){
		mana = maxMana;
	}
}

bool Cleric::useAbility(){
	if(mana < CLERIC_ABILITY_COST){
		return false;
	}
	else{
		int increaseHP = magic/3;

		if(increaseHP < 1 && hitPoints<maxhitPoints ){
			//increases hp by atleast one
			hitPoints += 1;
			mana -= CLERIC_ABILITY_COST;
			return true;
		} //doesn't let HP exceed max HP
		else if(hitPoints == maxhitPoints){return false;}
		//increases by 1/3 of magic
		hitPoints += increaseHP;
		mana -= CLERIC_ABILITY_COST;
		return true;
	}

}





