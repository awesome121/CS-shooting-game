#include <iostream>
#include "monster.h"

void Monster::Attack()
{
        
}

void Monster::MoveRight()
{
    mPosition += glm::vec2(1,0);
}

void Monster::MoveLeft()
{
    mPosition += glm::vec2(-1,0);
}

void Monster::MoveForward()
{
    mPosition += glm::vec2(0,1);
}

void Monster::MoveBack()
{
    mPosition += glm::vec2(0,-1);
}

void Monster::Jump()
{
        
}

void Monster::Squat()
{
        
}

void BeingAttack(int attackValue)
{
        
}
