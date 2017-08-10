/*
 * Robot.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: aguel
 */
#include "Robot.h"
#include <math.h>
#include <stdio.h>

Robot::Robot(int bonus_damage, double origenergy, double energy, string title, int hitPoints, int maxhitPoints, int strength, int speed, int maxspeed, int magic):Fighter(title, hitPoints, maxhitPoints, strength, speed, maxspeed, magic){
this->origenergy = energy;
this->energy=energy;
this->bonus_damage = 0;
}

Robot::~Robot(){}

int Robot::getDamage(){
	return strength;
}

void Robot::reset(){
	int maxEnergy = magic * 2;
	energy = maxEnergy;
	bonus_damage =0;
	hitPoints = maxhitPoints;
}

void Robot::regenerate(){
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

bool Robot::useAbility(){
	if(energy < ROBOT_ABILITY_COST){
		return false;
	}else{
		double increaseBD = (energy/origenergy);
		increaseBD = pow(increaseBD, 4.0);
		increaseBD *= strength;
		bonus_damage = increaseBD;
		energy -= ROBOT_ABILITY_COST;
		return true;
	}
}
