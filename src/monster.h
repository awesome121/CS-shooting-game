#pragma once
#include <string>
#include <iostream>
#include "vector.h"

class Monster
{
public: // public member
    Vec2 mPosition = Vec2();
    int mHealth = 100;
    int mDamage = 30;
    bool mIsAlive = true;
    std::string mSkills = "normal";
public: // constructor and public method
    Monster() { 
        std::cout << mHealth << mDamage << std::endl;
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
