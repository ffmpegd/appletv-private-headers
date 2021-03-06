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
@property(retain) id data;	// G=0x34879f21; S=0x34879ead; converted property
@property(assign) CGRect frame;	// G=0x34a47115; S=0x348c3fa1; converted property
@property(assign) long sizeInBytes;	// G=0x34a47105; S=0x348eb571; converted property
@property(assign) CGSize sizeInPoints;	// G=0x34a470ed; S=0x348c3f8d; converted property
- (id)initWithData:(id)data type:(int)type;	// 0x3481840d
- (id).cxx_construct;	// 0x34818409
// converted property getter: - (id)data;	// 0x34879f21
- (void)dealloc;	// 0x3488a599
// converted property getter: - (CGRect)frame;	// 0x34a47115
- (unsigned)hash;	// 0x34a47139
- (BOOL)isEqual:(id)equal;	// 0x34a471ed
- (bool)isLoaded;	// 0x34879cf5
// converted property setter: - (void)setData:(id)data;	// 0x34879ead
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x348c3fa1
// converted property setter: - (void)setSizeInBytes:(long)bytes;	// 0x348eb571
// converted property setter: - (void)setSizeInPoints:(CGSize)points;	// 0x348c3f8d
// converted property getter: - (long)sizeInBytes;	// 0x34a47105
// converted property getter: - (CGSize)sizeInPoints;	// 0x34a470ed
- (int)type;	// 0x34879f11
@end

