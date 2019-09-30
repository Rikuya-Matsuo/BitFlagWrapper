#pragma once

// ���S�҂ł��r�b�g�t���O�������₷���Ȃ�悤�ɍ�������b�p�[�N���X
class BitFlagUChar
{
public:
	BitFlagUChar(unsigned char initialValue = 0x00) :mFlags(initialValue) {};
	~BitFlagUChar();

	////////////////////////////////////////////////////////////
	// ���Z�q�I�[�o�[���[�h
	//		�������x�̏�ł͂�����g�����Ƃ���Ԗ]�܂���
	// Operator overload
	//		They are desirable way in processing speed.
	////////////////////////////////////////////////////////////
	unsigned char	operator |	(unsigned char mask)	{ return mFlags | mask; }
	unsigned char	operator &	(unsigned char mask)	{ return mFlags & mask; }
	unsigned char	operator |= (unsigned char mask)	{ return (mFlags |= mask); }
	unsigned char	operator &= (unsigned char mask)	{ return (mFlags &= mask); }
	unsigned char	operator =	(unsigned char mask)	{ return mFlags = mask; }
	bool			operator == (unsigned char mask)	{ return mFlags == mask; }

	////////////////////////////////////////////////////////////
	// �֐��Q
	// Functions
	////////////////////////////////////////////////////////////
	
	// �Z�b�^�[/Setter
	//		�����̃t���O���Z�b�g����ꍇ�Amask�������Ɏ������g�����Ƃ��]�܂����B
	//		When you set several Flags, taking mask as an argument is desireble.
	void			SetFlag(int bitNumFromBottom, bool value);
	void			SetFlag(unsigned char mask, bool value);

	// �Q�b�^�[/Getter
	//		�����̃t���O���擾����ꍇ�Amask�������Ɏ������g�����Ƃ��]�܂����B
	//		When you set several Flags, taking mask as an argument is desireble.
	unsigned char	GetBitFlag() { return mFlags; }
	bool			GetFlag(int bitNumFromBottom);
	bool			GetFlag(unsigned char mask);

private:
	unsigned char mFlags;
};
