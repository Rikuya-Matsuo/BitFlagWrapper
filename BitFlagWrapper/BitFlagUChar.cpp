#include "BitFlagUChar.h"

BitFlagUChar::~BitFlagUChar()
{
}

void BitFlagUChar::SetFlag(unsigned int bitNumFromBottom, bool value)
{
	// 8bit�ȏ�̃V�t�g���w�����ꂽ�ꍇ�֐��𔲂���
	if (bitNumFromBottom >= 8)
	{
		return;
	}

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
