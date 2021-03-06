/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"
#import "OfficeImport-Structs.h"

@class NSData;

@interface OADSubBlip : OCDDelayedMedia {
	int mType;	// 12 = 0xc
	NSData *mData;	// 16 = 0x10
	CGSize mSizeInPoints;	// 20 = 0x14
	long mSizeInBytes;	// 28 = 0x1c
	CGRect mFrame;	// 32 = 0x20
}
@property(retain) id data;	// G=0x3487bf21; S=0x3487bead; converted property
@property(assign) CGRect frame;	// G=0x34a49115; S=0x348c5fa1; converted property
@property(assign) long sizeInBytes;	// G=0x34a49105; S=0x348ed571; converted property
@property(assign) CGSize sizeInPoints;	// G=0x34a490ed; S=0x348c5f8d; converted property
- (id)initWithData:(id)data type:(int)type;	// 0x3481a40d
- (id).cxx_construct;	// 0x3481a409
// converted property getter: - (id)data;	// 0x3487bf21
- (void)dealloc;	// 0x3488c599
// converted property getter: - (CGRect)frame;	// 0x34a49115
- (unsigned)hash;	// 0x34a49139
- (BOOL)isEqual:(id)equal;	// 0x34a491ed
- (bool)isLoaded;	// 0x3487bcf5
// converted property setter: - (void)setData:(id)data;	// 0x3487bead
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x348c5fa1
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x348ed571
// converted property setter: - (void)setSizeInPoints:(CGSize)points;	// 0x348c5f8d
// converted property getter: - (long)sizeInBytes;	// 0x34a49105
// converted property getter: - (CGSize)sizeInPoints;	// 0x34a490ed
- (int)type;	// 0x3487bf11
@end

