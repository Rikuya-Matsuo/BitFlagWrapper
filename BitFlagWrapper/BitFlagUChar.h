#pragma once

// ���S�҂ł��r�b�g�t���O�������₷���Ȃ�悤�ɍ�������b�p�[�N���X
class BitFlagUChar
{
public:
	BitFlagUChar() :mFlags(0) {};
	~BitFlagUChar();

	////////////////////////////////////////////////////////////
	// ���Z�q�I�[�o�[���[�h
	//		�������x�̏�ł͂�����g�����Ƃ���Ԗ]�܂���
	////////////////////////////////////////////////////////////
	unsigned char	operator |	(unsigned char mask)	{ return mFlags | mask; }
	unsigned char	operator &	(unsigned char mask)	{ return mFlags & mask; }
	unsigned char	operator |= (unsigned char mask)	{ return (mFlags |= mask); }
	unsigned char	operator &= (unsigned char mask)	{ return (mFlags &= mask); }
	unsigned char	operator =	(unsigned char mask)	{ return mFlags = mask; }
	bool			operator == (unsigned char mask)	{ return mFlags == mask; }

	////////////////////////////////////////////////////////////
	// �֐��Q
	////////////////////////////////////////////////////////////
	
	// �Z�b�^�[
	//		�����̃t���O���Z�b�g����ꍇ�Amask�������Ɏ������g�����Ƃ��]�܂����B
	void SetFlag(unsigned int bitNumFromBottom, bool value);
	void SetFlag(unsigned char mask, bool value);

	// �Q�b�^�[
	unsigned char Get() { return mFlags; }

private:
	unsigned char mFlags;
};
