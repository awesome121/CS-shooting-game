#include "vector.h"

class Bullet
{
public: // public member
    Vec2 mPosition = Vec2();
    Vec3 mDircection = Vec3();
    int mCurrentRange = 0;
    float mNoise = 0;
    int mDamage = 0;
    std::string ammoDescription = "normal";
public: // constructor and public method
    Bullet() {

    }

};
