/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"

@class OADTableStyle, NSArray, NSString;

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent> {
	NSString *mStyleId;	// 28 = 0x1c
	OADTableStyle *mStyle;	// 32 = 0x20
	BOOL mRightToLeft;	// 36 = 0x24
	BOOL mFirstRow;	// 37 = 0x25
	BOOL mFirstColumn;	// 38 = 0x26
	BOOL mLastRow;	// 39 = 0x27
	BOOL mLastColumn;	// 40 = 0x28
	BOOL mBandRow;	// 41 = 0x29
	BOOL mBandColumn;	// 42 = 0x2a
	NSArray *mEffects;	// 44 = 0x2c
}
@property(assign) BOOL bandColumn;	// G=0x34a534a1; S=0x349912a1; converted property
@property(assign) BOOL bandRow;	// G=0x34993a09; S=0x349912b1; converted property
@property(retain) id effects;	// G=0x34a53515; S=0x349912d1; converted property
@property(assign) BOOL firstColumn;	// G=0x34a53471; S=0x34991261; converted property
@property(assign) BOOL firstRow;	// G=0x3499298d; S=0x34991271; converted property
@property(assign) BOOL lastColumn;	// G=0x34a53491; S=0x34991281; converted property
@property(assign) BOOL lastRow;	// G=0x34a53481; S=0x34991291; converted property
@property(assign) BOOL rightToLeft;	// G=0x34a53461; S=0x349912c1; converted property
@property(retain) id style;	// G=0x349924b1; S=0x3499130d; converted property
@property(retain) id styleId;	// G=0x34a53451; S=0x3498d8d5; converted property
+ (id)defaultProperties;	// 0x3498d69d
- (id)initWithDefaults;	// 0x3498d6e5
// converted property getter: - (BOOL)bandColumn;	// 0x34a534a1
// converted property getter: - (BOOL)bandRow;	// 0x34993a09
- (void)dealloc;	// 0x3498e73d
// converted property getter: - (id)effects;	// 0x34a53515
// converted property getter: - (BOOL)firstColumn;	// 0x34a53471
// converted property getter: - (BOOL)firstRow;	// 0x3499298d
- (BOOL)hasBandsNormalToDir:(int)dir;	// 0x34a534b1
- (BOOL)hasEffects;	// 0x34a53545
- (BOOL)hasVectorNormalToDir:(int)dir atExtremePos:(int)extremePos;	// 0x34a534d5
// converted property getter: - (BOOL)lastColumn;	// 0x34a53491
// converted property getter: - (BOOL)lastRow;	// 0x34a53481
// converted property getter: - (BOOL)rightToLeft;	// 0x34a53461
// converted property setter: - (void)setBandColumn:(BOOL)column;	// 0x349912a1
// converted property setter: - (void)setBandRow:(BOOL)row;	// 0x349912b1
// converted property setter: - (void)setEffects:(id)effects;	// 0x349912d1
// converted property setter: - (void)setFirstColumn:(BOOL)column;	// 0x34991261
// converted property setter: - (void)setFirstRow:(BOOL)row;	// 0x34991271
// converted property setter: - (void)setLastColumn:(BOOL)column;	// 0x34991281
// converted property setter: - (void)setLastRow:(BOOL)row;	// 0x34991291
// converted property setter: - (void)setRightToLeft:(BOOL)left;	// 0x349912c1
// converted property setter: - (void)setStyle:(id)style;	// 0x3499130d
// converted property setter: - (void)setStyleId:(id)anId;	// 0x3498d8d5
// converted property getter: - (id)style;	// 0x349924b1
// converted property getter: - (id)styleId;	// 0x34a53451
@end

