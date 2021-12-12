#pragma once
#include <string>
#include <glm/glm.hpp>
#include <iostream>

class Monster
{
public: // public member
    glm::vec2 mPosition = glm::vec2(0);
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
