/*
 * Archer.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: aguel
 */
#include "Archer.h"

Archer::Archer(string title, int hitPoints, int maxhitPoints, int strength, int speed, int maxspeed, int magic):Fighter(title, hitPoints, maxhitPoints, strength, speed, maxspeed, magic){
}

Archer::~Archer(){}


int Archer::getDamage(){
	return speed;
}

void Archer::reset(){
hitPoints = maxhitPoints;
speed = maxspeed;
}

void Archer::regenerate(){
	int regenerate = strength/6;
	if(regenerate <1){
		hitPoints +=1;
	}else{
	hitPoints += regenerate;
	}
	//makes sure hp is not over the max
	if(hitPoints > maxhitPoints){
		hitPoints = maxhitPoints;
	}
}

bool Archer::useAbility(){
	speed += 1;
return true;
}

