/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShade.h"
#import "OfficeImport-Structs.h"

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade {
@private
	OADRelativeRect *mFillToRect;	// 12 = 0xc
	BOOL mIsFillToRectOverridden;	// 16 = 0x10
	int mType;	// 20 = 0x14
	BOOL mIsTypeOverridden;	// 24 = 0x18
}
@property(retain) id fillToRect;	// G=0x31199005; S=0x310e0d0d; converted property
@property(assign) int type;	// G=0x3124e5b5; S=0x310e0ced; converted property
+ (id)defaultProperties;	// 0x310e0c01
- (id)initWithDefaults;	// 0x310e0c49
- (id)copyWithZone:(NSZone *)zone;	// 0x31198ea1
- (void)dealloc;	// 0x3110a5e5
// converted property getter: - (id)fillToRect;	// 0x31199005
- (unsigned)hash;	// 0x3124e619
- (BOOL)isEqual:(id)equal;	// 0x3124e675
- (BOOL)isFillToRectOverridden;	// 0x31199035
- (BOOL)isTypeOverridden;	// 0x3124e5e5
// converted property setter: - (void)setFillToRect:(id)rect;	// 0x310e0d0d
// converted property setter: - (void)setType:(int)type;	// 0x310e0ced
// converted property getter: - (int)type;	// 0x3124e5b5
@end
