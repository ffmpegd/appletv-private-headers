/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import "OADProperties.h"


@interface OADLineEnd : OADProperties <NSCopying> {
	unsigned char mType;	// 9 = 0x9
	unsigned char mWidth;	// 10 = 0xa
	unsigned char mLength;	// 11 = 0xb
	unsigned mIsTypeOverridden : 1;	// 12 = 0xc
	unsigned mIsWidthOverridden : 1;	// 12 = 0xc
	unsigned mIsLengthOverridden : 1;	// 12 = 0xc
}
@property(assign) int length;	// G=0x34a9cac1; S=0x349f5459; converted property
@property(assign) int type;	// G=0x34a9c9f1; S=0x349f5411; converted property
@property(assign) int width;	// G=0x34a9ca59; S=0x349f5435; converted property
+ (id)defaultProperties;	// 0x349f5359
- (id)initWithDefaults;	// 0x349f53a1
- (id)initWithType:(int)type width:(int)width length:(int)length;	// 0x34c2d541
- (id)copyWithZone:(NSZone *)zone;	// 0x34b19751
- (unsigned)hash;	// 0x34c2d5c1
- (BOOL)isEqual:(id)equal;	// 0x34a4c82d
- (BOOL)isLengthOverridden;	// 0x34a9caf1
- (BOOL)isTypeOverridden;	// 0x34a9ca21
- (BOOL)isWidthOverridden;	// 0x34a9ca89
// converted property getter: - (int)length;	// 0x34a9cac1
// converted property setter: - (void)setLength:(int)length;	// 0x349f5459
// converted property setter: - (void)setType:(int)type;	// 0x349f5411
// converted property setter: - (void)setWidth:(int)width;	// 0x349f5435
// converted property getter: - (int)type;	// 0x34a9c9f1
// converted property getter: - (int)width;	// 0x34a9ca59
@end

