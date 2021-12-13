#include <iostream>
#include "monster.h"

void Monster::Attack()
{
        
}

void Monster::MoveRight()
{
    mPosition += Vec2(1,0);
}

void Monster::MoveLeft()
{
    mPosition += Vec2(-1,0);
}

void Monster::MoveForward()
{
    mPosition += Vec2(0,1);
}

void Monster::MoveBack()
{
    mPosition += Vec2(0,-1);
}

void Monster::Jump()
{
        
}

void Monster::Squat()
{
        
}

void BeingAttacked(int attackValue)
{
        
}
