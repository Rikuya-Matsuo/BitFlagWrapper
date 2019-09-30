#include <iostream>
#include "BitFlagUChar.h"

int main(int argc, char ** argv)
{
	BitFlagUChar bitFlag;

	// �g�����P�F�l�C�e�B�u�Ȋ����Ŏg��
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

	// �g�����Q�F�Z�b�^�[�E�Q�b�^�[���g���āA����E�]������
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
	
	// ��GetFlag�֐��͎w�肵���r�b�g���S�ė����Ă��Ȃ���Ε��ɂȂ�B
	// Notice : GetFlag Function returns false if not all specified bits are 0.
	if (bitFlag.GetFlag((unsigned char)0b00001110))
	{
		std::cout << "True" << std::endl;		
	}
	else
	{
		std::cout << "False" << std::endl;
	}

	// �g�����R�F�r�b�g�t���O�̒m�����g�킸�ɁA����E�]������
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