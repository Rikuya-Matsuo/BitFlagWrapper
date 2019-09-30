#include "BitFlagUChar.h"

BitFlagUChar::~BitFlagUChar()
{
}

void BitFlagUChar::SetFlag(int bitNumFromBottom, bool value)
{
	unsigned char mask = 1;
	mask <<= bitNumFromBottom;

	SetFlag(mask, value);
}

void BitFlagUChar::SetFlag(unsigned char mask, bool value)
{
	if (value)
	{
		mFlags |= mask;
	}
	else
	{
		mFlags &= ~mask;
	}
}

bool BitFlagUChar::GetFlag(int bitNumFromBottom)
{
	unsigned char mask = 1 << bitNumFromBottom;
	
	return GetFlag(mask);
}

bool BitFlagUChar::GetFlag(unsigned char mask)
{
	bool ret = (mFlags & mask) == mask;

	return ret;
}
