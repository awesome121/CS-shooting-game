#pragma once
#include<string>
#include<iostream>
#include "vector.h"

class Player
{
public:
	Vec2 mPosition = Vec2();
	int mHealth = 100;
	int mArmor = 100;
	std::string armorType = "light";
	bool mIsAlive = true;
	int mMoney = 500;
	std::string firstWeapon = "pistol";
	std::string secondWeapon = "main rifle";
public:
	Player() {

	}

	void Attack();
	void MoveLeft();
	void MoveRight();
	void MoveForward();
	void MoveBack();
	void Jump();
	void Squat();
	void BeingAttacked(int attackValue);
};

