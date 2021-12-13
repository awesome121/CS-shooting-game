#include <iostream>
#include "player.h"

void Player::Attack()
{

}

void Player::MoveRight()
{
    mPosition += Vec2(1, 0);
}

void Player::MoveLeft()
{
    mPosition += Vec2(-1, 0);
}

void Player::MoveForward()
{
    mPosition += Vec2(0, 1);
}

void Player::MoveBack()
{
    mPosition += Vec2(0, -1);
}

void Player::Jump()
{

}

void Player::Squat()
{

}

void BeingAttacked(int attackValue)
{

}