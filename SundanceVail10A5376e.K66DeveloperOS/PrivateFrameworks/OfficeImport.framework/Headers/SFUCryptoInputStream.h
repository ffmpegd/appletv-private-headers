/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"

@class SFUCryptor;

@interface SFUCryptoInputStream : NSObject <SFUInputStream> {
	id<SFUInputStream> mBaseStream;	// 4 = 0x4
	SFUCryptor *mCryptor;	// 8 = 0x8
	long long mOffset;	// 12 = 0xc
}
- (id)initForDecryptionWithInputStream:(id)inputStream key:(id)key;	// 0x371c0771
- (BOOL)canSeek;	// 0x371c0be1
- (void)close;	// 0x371c0ca1
- (id)closeLocalStream;	// 0x371c0cc1
- (void)dealloc;	// 0x371c0a95
- (void)disableSystemCaching;	// 0x371c0c61
- (void)enableSystemCaching;	// 0x371c0c81
- (long long)offset;	// 0x371c0af9
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x371c0b11
- (void)seekToOffset:(long long)offset;	// 0x371c0be5
@end
