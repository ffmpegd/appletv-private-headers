/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class EDColorReference, EDResources;

@interface EDBorder : NSObject {
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x3188cac9; S=0x318cfb15; converted property
@property(assign) int type;	// G=0x317ab4e5; S=0x318cfb05; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x318cfaa5
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x318cfa45
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x317912b5
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x317911b1
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x317911f1
- (id)initWithResources:(id)resources;	// 0x3179124d
- (id)color;	// 0x317ab60d
- (id)colorReference;	// 0x3188cab9
- (void)dealloc;	// 0x31795a99
// converted property getter: - (int)diagonalType;	// 0x3188cac9
- (unsigned)hash;	// 0x318cfad9
- (BOOL)isEqual:(id)equal;	// 0x31791505
- (BOOL)isEqualToBorder:(id)border;	// 0x31791561
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x318cfb15
// converted property setter: - (void)setType:(int)type;	// 0x318cfb05
// converted property getter: - (int)type;	// 0x317ab4e5
@end

