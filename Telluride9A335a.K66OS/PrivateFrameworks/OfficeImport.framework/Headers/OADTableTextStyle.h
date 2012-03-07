/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject {
@private
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x35301ced; S=0x352d74ed; converted property
@property(retain) id color;	// G=0x35301cdd; S=0x352d7271; converted property
@property(retain) id fontReference;	// G=0x353cd20d; S=0x352d6ed5; converted property
@property(assign) int italic;	// G=0x353cd21d; S=0x353cd22d; converted property
+ (int)defaultBold;	// 0x353cd23d
+ (id)defaultColor;	// 0x353cd541
+ (id)defaultFontReference;	// 0x353cd4b1
+ (int)defaultItalic;	// 0x353cd241
+ (id)defaultStyle;	// 0x353cd3ad
- (id)init;	// 0x352d6e89
- (void)applyOverridesFrom:(id)from;	// 0x353cd589
// converted property getter: - (int)bold;	// 0x35301ced
// converted property getter: - (id)color;	// 0x35301cdd
- (void)dealloc;	// 0x352d85a1
// converted property getter: - (id)fontReference;	// 0x353cd20d
// converted property getter: - (int)italic;	// 0x353cd21d
// converted property setter: - (void)setBold:(int)bold;	// 0x352d74ed
// converted property setter: - (void)setColor:(id)color;	// 0x352d7271
// converted property setter: - (void)setFontReference:(id)reference;	// 0x352d6ed5
// converted property setter: - (void)setItalic:(int)italic;	// 0x353cd22d
- (id)shallowCopy;	// 0x353cd671
@end

