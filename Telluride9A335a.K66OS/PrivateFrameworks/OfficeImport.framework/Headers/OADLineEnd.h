/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADProperties.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADLineEnd : OADProperties <NSCopying> {
@private
	unsigned char mType;	// 12 = 0xc
	unsigned char mWidth;	// 13 = 0xd
	unsigned char mLength;	// 14 = 0xe
	unsigned mIsTypeOverridden : 1;	// 15 = 0xf
	unsigned mIsWidthOverridden : 1;	// 15 = 0xf
	unsigned mIsLengthOverridden : 1;	// 15 = 0xf
}
@property(assign) int length;	// G=0x3522f305; S=0x351a2d99; converted property
@property(assign) int type;	// G=0x3522f22d; S=0x351a2d51; converted property
@property(assign) int width;	// G=0x3522f299; S=0x351a2d75; converted property
+ (id)defaultProperties;	// 0x351a208d
- (id)initWithDefaults;	// 0x351e4169
- (id)initWithType:(int)type width:(int)width length:(int)length;	// 0x353cc3bd
- (id)copyWithZone:(NSZone *)zone;	// 0x35290d31
- (unsigned)hash;	// 0x353cc321
- (BOOL)isEqual:(id)equal;	// 0x351aefc1
- (BOOL)isLengthOverridden;	// 0x3522f335
- (BOOL)isTypeOverridden;	// 0x3522f25d
- (BOOL)isWidthOverridden;	// 0x3522f2c9
// converted property getter: - (int)length;	// 0x3522f305
// converted property setter: - (void)setLength:(int)length;	// 0x351a2d99
// converted property setter: - (void)setType:(int)type;	// 0x351a2d51
// converted property setter: - (void)setWidth:(int)width;	// 0x351a2d75
// converted property getter: - (int)type;	// 0x3522f22d
// converted property getter: - (int)width;	// 0x3522f299
@end

