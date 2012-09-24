/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDDifferentialStyle, EDCollection;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {
	EDCollection *mDifferentialStyles;	// 4 = 0x4
	int mType;	// 8 = 0x8
	unsigned mBandSize;	// 12 = 0xc
	EDDifferentialStyle *mDifferentialStyle;	// 16 = 0x10
}
@property(assign) unsigned bandSize;	// G=0x3500f725; S=0x35087661; converted property
@property(retain) id differentialStyle;	// G=0x35010359; S=0x34ff2bf5; converted property
@property(assign) int type;	// G=0x35087651; S=0x34ff2b95; converted property
+ (id)tableStyleElementWithResources:(id)resources;	// 0x3501a93d
- (id)initWithResources:(id)resources;	// 0x34ff27b5
// converted property getter: - (unsigned)bandSize;	// 0x3500f725
- (id)copyWithZone:(NSZone *)zone;	// 0x350875f9
- (void)dealloc;	// 0x34ffb4a1
// converted property getter: - (id)differentialStyle;	// 0x35010359
- (int)key;	// 0x34ff2c39
// converted property setter: - (void)setBandSize:(unsigned)size;	// 0x35087661
// converted property setter: - (void)setDifferentialStyle:(id)style;	// 0x34ff2bf5
- (void)setDifferentialStyleWithIndex:(unsigned)index;	// 0x34ff2bb9
// converted property setter: - (void)setType:(int)type;	// 0x34ff2b95
// converted property getter: - (int)type;	// 0x35087651
@end
