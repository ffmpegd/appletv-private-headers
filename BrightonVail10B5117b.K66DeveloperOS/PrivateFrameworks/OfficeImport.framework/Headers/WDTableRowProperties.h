/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {
	WDTableProperties *mTableProperties;	// 4 = 0x4
	WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
	unsigned mOriginal : 1;	// 12 = 0xc
	unsigned mTracked : 1;	// 12 = 0xc
	unsigned mResolved : 1;	// 12 = 0xc
	XXStruct_98qQxD mOriginalProperties;	// 16 = 0x10
	XXStruct_98qQxD mTrackedProperties;	// 44 = 0x2c
}
@property(assign) BOOL header;	// G=0x34c99405; S=0x34b2b87d; converted property
@property(assign) long height;	// G=0x34b2cb0d; S=0x34b2b9bd; converted property
@property(assign) int heightType;	// G=0x34c992d9; S=0x34b2b96d; converted property
@property(assign) int resolveMode;	// G=0x34c98d99; S=0x34b2a041; converted property
@property(assign) short widthAfter;	// G=0x34c99081; S=0x34b31d15; converted property
@property(assign) int widthAfterType;	// G=0x34c991ad; S=0x34b31d65; converted property
@property(assign) short widthBefore;	// G=0x34c98e29; S=0x34b31325; converted property
@property(assign) int widthBeforeType;	// G=0x34c98f55; S=0x34b31375; converted property
- (id)init;	// 0x34c98d59
- (id)initWithDocument:(id)document;	// 0x34abf25d
- (id).cxx_construct;	// 0x34abf259
- (void)addProperties:(id)properties;	// 0x34c98de1
- (void)addPropertiesValues:(XXStruct_98qQxD *)values to:(XXStruct_98qQxD *)to;	// 0x34c99655
- (id)characterProperties;	// 0x34ade361
- (id)copyWithZone:(NSZone *)zone;	// 0x34c9953d
- (void)dealloc;	// 0x34ae2321
// converted property getter: - (BOOL)header;	// 0x34c99405
// converted property getter: - (long)height;	// 0x34b2cb0d
// converted property getter: - (int)heightType;	// 0x34c992d9
- (BOOL)isHeaderOverridden;	// 0x34c99499
- (BOOL)isHeightOverridden;	// 0x34ade601
- (BOOL)isHeightTypeOverridden;	// 0x34c99365
- (BOOL)isWidthAfterOverridden;	// 0x34c9910d
- (BOOL)isWidthAfterTypeOverridden;	// 0x34c99239
- (BOOL)isWidthBeforeOverridden;	// 0x34c98eb5
- (BOOL)isWidthBeforeTypeOverridden;	// 0x34c98fe1
// converted property getter: - (int)resolveMode;	// 0x34c98d99
// converted property setter: - (void)setHeader:(BOOL)header;	// 0x34b2b87d
// converted property setter: - (void)setHeight:(long)height;	// 0x34b2b9bd
// converted property setter: - (void)setHeightType:(int)type;	// 0x34b2b96d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x34b2a041
// converted property setter: - (void)setWidthAfter:(short)after;	// 0x34b31d15
// converted property setter: - (void)setWidthAfterType:(int)type;	// 0x34b31d65
// converted property setter: - (void)setWidthBefore:(short)before;	// 0x34b31325
// converted property setter: - (void)setWidthBeforeType:(int)type;	// 0x34b31375
- (id)tableProperties;	// 0x34abf4e1
// converted property getter: - (short)widthAfter;	// 0x34c99081
// converted property getter: - (int)widthAfterType;	// 0x34c991ad
// converted property getter: - (short)widthBefore;	// 0x34c98e29
// converted property getter: - (int)widthBeforeType;	// 0x34c98f55
@end

