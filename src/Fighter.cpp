/*
 * Fighter.cpp
 *
 *  Created on: Sep 23, 2015
 *      Author: aguel
 */

#include "Fighter.h"

Fighter::Fighter(string title, int hitPoints, int maxhitPoints, int strength, int speed,int maxspeed, int magic){
	this->title = title;
	this->hitPoints = hitPoints;
	this->strength = strength;
	this->speed = speed;
	this->magic = magic;
	this->maxspeed = speed;
	this->maxhitPoints = hitPoints;
}

Fighter::~Fighter(){}


string Fighter::getName(){

	return title;
}

int Fighter::getMaximumHP(){
	return maxhitPoints;
}

int Fighter::getCurrentHP(){
	return hitPoints;
}

int Fighter::getStrength(){
	return strength;
}

int Fighter::getSpeed(){
	return speed;
}

int Fighter::getMagic(){
	return magic;
}

void Fighter::takeDamage(int damage){
	int fourthSpeed = speed / 4;
	int damage_taken = damage - fourthSpeed;

	hitPoints -= damage_taken;

	if(damage_taken < 1){
		hitPoints -= 1;
	}
}
