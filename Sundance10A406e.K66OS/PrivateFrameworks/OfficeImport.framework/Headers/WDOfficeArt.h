/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, OADDrawable;

@interface WDOfficeArt : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	OADDrawable *mDrawable;	// 12 = 0xc
	bool mFloating;	// 16 = 0x10
}
@property(retain) id drawable;	// G=0x34f45cbd; S=0x34f44f31; converted property
@property(assign, getter=isFloating) bool floating;	// G=0x34f45ce5; S=0x34f45c99; converted property
@property(retain) id imageBlipRef;	// G=0x3510855d; S=0x351085e1; converted property
@property(retain) id properties;	// G=0x34f4a5cd; S=0x34f42241; converted property
+ (int)textBoxTextTypeForRegularTextType:(int)regularTextType;	// 0x351087a9
- (id)initWithParagraph:(id)paragraph;	// 0x34f420d9
- (void)checkForFloating:(id)floating;	// 0x34f88961
- (void)clearDrawable;	// 0x35108531
- (void)clearProperties;	// 0x35108501
- (void)dealloc;	// 0x34f4a5dd
// converted property getter: - (id)drawable;	// 0x34f45cbd
// converted property getter: - (id)imageBlipRef;	// 0x3510855d
- (id)imageData;	// 0x35108661
- (id)imageName;	// 0x35108715
- (BOOL)isDrawableOverridden;	// 0x34f45ccd
// converted property getter: - (bool)isFloating;	// 0x34f45ce5
- (id)overrideDrawable;	// 0x3510852d
- (void)propagateTextTypeToDrawables;	// 0x34f45d29
// converted property getter: - (id)properties;	// 0x34f4a5cd
- (int)runType;	// 0x34f55855
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x34f44f31
// converted property setter: - (void)setFloating:(bool)floating;	// 0x34f45c99
// converted property setter: - (void)setImageBlipRef:(id)ref;	// 0x351085e1
// converted property setter: - (void)setProperties:(id)properties;	// 0x34f42241
- (void)setTextType:(int)type recursivelyToDrawable:(id)drawable;	// 0x34f45da1
@end
