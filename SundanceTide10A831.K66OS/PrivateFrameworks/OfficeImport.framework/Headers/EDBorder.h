/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDColorReference;

@interface EDBorder : NSObject {
	EDResources *mResources;	// 4 = 0x4
	int mType;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mDiagonalType;	// 16 = 0x10
}
@property(assign) int diagonalType;	// G=0x36b80c6d; S=0x36bef041; converted property
@property(assign) int type;	// G=0x36a8ee9d; S=0x36bef031; converted property
+ (id)borderWithType:(int)type color:(id)color diagonalType:(int)type3 resources:(id)resources;	// 0x36beefd1
+ (id)borderWithType:(int)type color:(id)color resources:(id)resources;	// 0x36beef71
+ (id)borderWithType:(int)type colorReference:(id)reference diagonalType:(int)type3 resources:(id)resources;	// 0x36a624ed
+ (id)borderWithType:(int)type colorReference:(id)reference resources:(id)resources;	// 0x36a623e9
+ (id)borderWithType:(int)type resources:(id)resources;	// 0x36a62429
- (id)initWithResources:(id)resources;	// 0x36a62485
- (id)color;	// 0x36a8efbd
- (id)colorReference;	// 0x36b80c5d
- (void)dealloc;	// 0x36a6ca2d
// converted property getter: - (int)diagonalType;	// 0x36b80c6d
- (unsigned)hash;	// 0x36bef005
- (BOOL)isEqual:(id)equal;	// 0x36a6273d
- (BOOL)isEqualToBorder:(id)border;	// 0x36a62799
// converted property setter: - (void)setDiagonalType:(int)type;	// 0x36bef041
// converted property setter: - (void)setType:(int)type;	// 0x36bef031
// converted property getter: - (int)type;	// 0x36a8ee9d
@end
