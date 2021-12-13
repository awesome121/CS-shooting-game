class Vec3
{
public:
	float mX = 0;
	float mY = 0;
	float mZ = 0;
public:
	Vec3() {}
	Vec3(float x, float y, float z) : mX(x), mY(y), mZ(z) {}

	Vec3& operator+=(const Vec3& vec)
	{
		this->mX += vec.mX;
		this->mY += vec.mY;
		this->mZ += vec.mZ;
		return *this;
	}

};



class Vec2
{
public:
	float mX = 0;
	float mZ = 0;
public:
	Vec2() {}
	Vec2(float x, float z) : mX(x), mZ(z) {}

	Vec2& operator+=(const Vec2& vec)
	{
		this->mX += vec.mX;
		this->mZ += vec.mZ;
		return *this;
	}
};