/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedMedia.h"
#import "OfficeImport-Structs.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface OADSubBlip : OCDDelayedMedia {
@private
	int mType;	// 12 = 0xc
	NSData *mData;	// 16 = 0x10
	CGSize mSizeInPoints;	// 20 = 0x14
	int mSizeInBytes;	// 28 = 0x1c
	CGRect mFrame;	// 32 = 0x20
}
@property(retain) id data;	// G=0x34c13911; S=0x34c138cd; converted property
@property(assign) CGRect frame;	// G=0x34e1ae05; S=0x34cc745d; converted property
@property(assign) long sizeInBytes;	// G=0x34e1adf5; S=0x34d1339d; converted property
@property(assign) CGSize sizeInPoints;	// G=0x34e1addd; S=0x34cc7449; converted property
- (id)initWithData:(id)data type:(int)type;	// 0x34c3b6d1
// converted property getter: - (id)data;	// 0x34c13911
- (void)dealloc;	// 0x34c0ea01
// converted property getter: - (CGRect)frame;	// 0x34e1ae05
- (unsigned)hash;	// 0x34e1b579
- (BOOL)isEqual:(id)equal;	// 0x34e1b435
- (bool)isLoaded;	// 0x34c13405
// converted property setter: - (void)setData:(id)data;	// 0x34c138cd
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x34cc745d
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x34d1339d
// converted property setter: - (void)setSizeInPoints:(CGSize)points;	// 0x34cc7449
// converted property getter: - (long)sizeInBytes;	// 0x34e1adf5
// converted property getter: - (CGSize)sizeInPoints;	// 0x34e1addd
- (int)type;	// 0x34c13921
@end

