#include <iostream>
#include "BitFlagUChar.h"

int main(int argc, char ** argv)
{
	BitFlagUChar bitFlag;

	// 使い方１：ネイティブな感じで使う
	// Usage 1 : Use like a normal bit flag.
	unsigned char flag1 = 0x01;

	bitFlag |= flag1;

	if (bitFlag & 0x01)
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "False" << std::endl;
	}

	// 使い方２：セッター・ゲッターを使って、代入・評価する
	// Usage 2 : Use setter and getter for assignment and evaluation.
	unsigned char flag2 = 0b00000110;

	bitFlag.SetFlag(flag2, true);

	if (bitFlag.GetFlag((unsigned char)0b00000110))
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "False" << std::endl;
	}
	
	// ※GetFlag関数は指定したビットが全て立っていなければ負になる。
	// Notice : GetFlag Function returns false if not all specified bits are 0.
	if (bitFlag.GetFlag((unsigned char)0b00001110))
	{
		std::cout << "True" << std::endl;		
	}
	else
	{
		std::cout << "False" << std::endl;
	}

	// 使い方３：ビットフラグの知識を使わずに、代入・評価する
	// Usage 3 : Assign and evaluate without knowledge of bit flag.
	int flagNum = 3;

	bitFlag.SetFlag(flagNum, true);

	if (bitFlag.GetFlag(flagNum))
	{
		std::cout << "True" << std::endl;
	}
	else
	{
		std::cout << "False" << std::endl;
	}


	return 0;
}