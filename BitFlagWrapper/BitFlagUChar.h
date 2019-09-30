#pragma once

// 初心者でもビットフラグが扱いやすくなるように作ったラッパークラス
// Wrapper that enable even beginners to use bit flag easily.
class BitFlagUChar
{
public:
	BitFlagUChar(unsigned char initialValue = 0x00) :mFlags(initialValue) {};
	~BitFlagUChar();

	////////////////////////////////////////////////////////////
	// 演算子オーバーロード
	//		処理速度の上ではこれを使うことが一番望ましい
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
	// 関数群
	// Functions
	////////////////////////////////////////////////////////////
	
	// セッター/Setter
	//		複数のフラグをセットする場合、maskを引数に取る方を使うことが望ましい。
	//		When you set several Flags, taking mask as an argument is desireble.
	void			SetFlag(int bitNumFromBottom, bool value);
	void			SetFlag(unsigned char mask, bool value);

	// ゲッター/Getter
	//		複数のフラグを取得する場合、maskを引数に取る方を使うことが望ましい。
	//		When you set several Flags, taking mask as an argument is desireble.
	unsigned char	GetBitFlag() { return mFlags; }
	bool			GetFlag(int bitNumFromBottom);
	bool			GetFlag(unsigned char mask);

private:
	unsigned char mFlags;
};
