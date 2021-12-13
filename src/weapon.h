#pragma once
#include <string>
#include <iostream>
#include "vector.h"

class Weapon
{
public: // public member
    
    int mAmmoAmount = 0;
    int mMaxAmmoAmount = 0;
    int mDamage = 0;
    float shootingSpeed = 0;
    std::string weaponDescription = "pistol";
public: // constructor and public method
    Weapon() {
        
    }
   
};
