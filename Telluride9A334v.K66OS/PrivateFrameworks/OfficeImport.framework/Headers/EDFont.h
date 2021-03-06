/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDColorReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDFont : NSObject <NSCopying, EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mUnderline;	// 16 = 0x10
	int mScript;	// 20 = 0x14
	double mHeightInTwips;	// 24 = 0x18
	int mCharSet;	// 32 = 0x20
	int mFamily;	// 36 = 0x24
	unsigned mWeight;	// 40 = 0x28
	bool mBold;	// 44 = 0x2c
	bool mItalic;	// 45 = 0x2d
	bool mShadow;	// 46 = 0x2e
	bool mStrike;	// 47 = 0x2f
	bool mOutline;	// 48 = 0x30
	bool mUnderlineOverridden;	// 49 = 0x31
	bool mStrikeOverridden;	// 50 = 0x32
	bool mBoldOverridden;	// 51 = 0x33
	bool mWeightOverridden;	// 52 = 0x34
	bool mItalicOverridden;	// 53 = 0x35
	bool mHeightOverridden;	// 54 = 0x36
	bool mDoNotModify;	// 55 = 0x37
}
@property(assign, getter=isBold) bool bold;	// G=0x355ccba5; S=0x355bd1dd; converted property
@property(assign) int charSet;	// G=0x3572ed91; S=0x355bcf55; converted property
@property(retain) id color;	// G=0x355dcb45; S=0x35648ac1; converted property
@property(retain) id colorReference;	// G=0x356db781; S=0x355bd189; converted property
@property(assign) int family;	// G=0x3572eda1; S=0x355bcf75; converted property
@property(assign) double height;	// G=0x355ccbb5; S=0x355bceed; converted property
@property(assign, getter=isItalic) bool italic;	// G=0x355ccb95; S=0x355bd20d; converted property
@property(retain) id name;	// G=0x355ccbcd; S=0x355bce99; converted property
@property(assign, getter=isOutline) bool outline;	// G=0x3572ed81; S=0x355bd28d; converted property
@property(assign) int script;	// G=0x3572ed61; S=0x355bd2bd; converted property
@property(assign, getter=isShadow) bool shadow;	// G=0x3572ed71; S=0x355bd26d; converted property
@property(assign, getter=isStrike) bool strike;	// G=0x355dcaf5; S=0x355bd23d; converted property
@property(assign) int underline;	// G=0x355dcb15; S=0x355bd305; converted property
@property(assign) unsigned weight;	// G=0x3572edb1; S=0x355bcf25; converted property
+ (id)filterFontName:(id)name;	// 0x3572ee11
+ (id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;	// 0x3572edd1
+ (id)fontWithResources:(id)resources;	// 0x3572ee65
+ (id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;	// 0x3572edd5
- (id)initWithResources:(id)resources;	// 0x355bcaa9
// converted property getter: - (int)charSet;	// 0x3572ed91
// converted property getter: - (id)color;	// 0x355dcb45
// converted property getter: - (id)colorReference;	// 0x356db781
- (id)copyWithZone:(NSZone *)zone;	// 0x35648a3d
- (void)dealloc;	// 0x355f2b1d
// converted property getter: - (int)family;	// 0x3572eda1
- (id)filteredName;	// 0x3572ef0d
// converted property getter: - (double)height;	// 0x355ccbb5
// converted property getter: - (bool)isBold;	// 0x355ccba5
- (bool)isBoldOverridden;	// 0x355dcac5
- (BOOL)isEqual:(id)equal;	// 0x35648cfd
- (BOOL)isEqualToFont:(id)font;	// 0x35648d59
- (bool)isHeightOverridden;	// 0x355dcc69
// converted property getter: - (bool)isItalic;	// 0x355ccb95
- (bool)isItalicOverridden;	// 0x355dcad5
// converted property getter: - (bool)isOutline;	// 0x3572ed81
// converted property getter: - (bool)isShadow;	// 0x3572ed71
// converted property getter: - (bool)isStrike;	// 0x355dcaf5
- (bool)isStrikeOverridden;	// 0x355dcae5
- (bool)isUnderlineOverridden;	// 0x355dcb05
- (bool)isWeightOverridden;	// 0x3572edc1
- (id)lassoName;	// 0x3572eeb1
// converted property getter: - (id)name;	// 0x355ccbcd
// converted property getter: - (int)script;	// 0x3572ed61
// converted property setter: - (void)setBold:(bool)bold;	// 0x355bd1dd
// converted property setter: - (void)setCharSet:(int)set;	// 0x355bcf55
// converted property setter: - (void)setColor:(id)color;	// 0x35648ac1
// converted property setter: - (void)setColorReference:(id)reference;	// 0x355bd189
- (void)setDoNotModify:(bool)modify;	// 0x355bd335
// converted property setter: - (void)setFamily:(int)family;	// 0x355bcf75
// converted property setter: - (void)setHeight:(double)height;	// 0x355bceed
// converted property setter: - (void)setItalic:(bool)italic;	// 0x355bd20d
// converted property setter: - (void)setName:(id)name;	// 0x355bce99
// converted property setter: - (void)setOutline:(bool)outline;	// 0x355bd28d
// converted property setter: - (void)setScript:(int)script;	// 0x355bd2bd
// converted property setter: - (void)setShadow:(bool)shadow;	// 0x355bd26d
// converted property setter: - (void)setStrike:(bool)strike;	// 0x355bd23d
// converted property setter: - (void)setUnderline:(int)underline;	// 0x355bd305
// converted property setter: - (void)setWeight:(unsigned)weight;	// 0x355bcf25
// converted property getter: - (int)underline;	// 0x355dcb15
// converted property getter: - (unsigned)weight;	// 0x3572edb1
@end

