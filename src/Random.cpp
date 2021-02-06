#include "Random.h"
#include <cstdlib>

int Random(DamageRange A)
{
	return A.mLowDamage + rand() % ((A.mHighDamage + 1) - A.mLowDamage);
}

int Random(int A, int B)
{
	return A + rand() % ((B + 1) - A);
}