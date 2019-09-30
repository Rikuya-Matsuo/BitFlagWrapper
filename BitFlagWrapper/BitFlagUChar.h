#pragma once

// 初心者でもビットフラグが扱いやすくなるように作ったラッパークラス
class BitFlagUChar
{
public:
	BitFlagUChar() :mFlags(0) {};
	~BitFlagUChar();

	////////////////////////////////////////////////////////////
	// 演算子オーバーロード
	//		処理速度の上ではこれを使うことが一番望ましい
	////////////////////////////////////////////////////////////
	unsigned char	operator |	(unsigned char mask)	{ return mFlags | mask; }
	unsigned char	operator &	(unsigned char mask)	{ return mFlags & mask; }
	unsigned char	operator |= (unsigned char mask)	{ return (mFlags |= mask); }
	unsigned char	operator &= (unsigned char mask)	{ return (mFlags &= mask); }
	unsigned char	operator =	(unsigned char mask)	{ return mFlags = mask; }
	bool			operator == (unsigned char mask)	{ return mFlags == mask; }

	////////////////////////////////////////////////////////////
	// 関数群
	////////////////////////////////////////////////////////////
	
	// セッター
	//		複数のフラグをセットする場合、maskを引数に取る方を使うことが望ましい。
	void SetFlag(unsigned int bitNumFromBottom, bool value);
	void SetFlag(unsigned char mask, bool value);

	// ゲッター
	unsigned char Get() { return mFlags; }

private:
	unsigned char mFlags;
};
