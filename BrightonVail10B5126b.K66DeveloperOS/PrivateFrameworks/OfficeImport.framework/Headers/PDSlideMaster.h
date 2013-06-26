/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "PDSlideBase.h"

@class OADTheme, OADTextListStyle, NSMutableArray, OADColorMap;

@interface PDSlideMaster : PDSlideBase {
	NSMutableArray *mSlideLayouts;	// 32 = 0x20
	OADTheme *mTheme;	// 36 = 0x24
	OADColorMap *mColorMap;	// 40 = 0x28
	OADTextListStyle *mTitleTextStyle;	// 44 = 0x2c
	OADTextListStyle *mBodyTextStyle;	// 48 = 0x30
	OADTextListStyle *mOtherTextStyle;	// 52 = 0x34
}
@property(retain) id bodyTextStyle;	// G=0x3486aa21; S=0x3481f411; converted property
@property(retain) id otherTextStyle;	// G=0x34935f2d; S=0x3481f45d; converted property
@property(retain, nonatomic) NSMutableArray *slideLayouts;	// G=0x34a85ed5; S=0x34a85ee5; @synthesize=mSlideLayouts
@property(retain) id theme;	// G=0x3481c665; S=0x34a85d4d; converted property
@property(retain) id titleTextStyle;	// G=0x3486a92d; S=0x3481f175; converted property
- (id)init;	// 0x3481c271
- (id)initWithDefaultsAndTheme:(id)defaultsAndTheme;	// 0x34a85aa1
- (id)addSlideLayout;	// 0x3486f045
- (void)addSlideLayout:(id)layout;	// 0x3486f165
// converted property getter: - (id)bodyTextStyle;	// 0x3486aa21
- (id)colorMap;	// 0x3481f4ad
- (id)colorScheme;	// 0x34875f1d
- (void)dealloc;	// 0x34889219
- (id)defaultTheme;	// 0x3498b14d
- (void)doneWithContent;	// 0x34a85d91
- (id)drawingTheme;	// 0x34a85e69
- (id)fontScheme;	// 0x349364dd
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486aa19
// converted property getter: - (id)otherTextStyle;	// 0x34935f2d
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486aa15
- (id)parentSlideBase;	// 0x34a85d8d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486aa0d
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x3486a8d9
- (id)parentTextStyleForTables;	// 0x34990fb5
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x3486f2c9
// converted property setter: - (void)setBodyTextStyle:(id)style;	// 0x3481f411
// converted property setter: - (void)setOtherTextStyle:(id)style;	// 0x3481f45d
// declared property setter: - (void)setSlideLayouts:(id)layouts;	// 0x34a85ee5
// converted property setter: - (void)setTheme:(id)theme;	// 0x34a85d4d
// converted property setter: - (void)setTitleTextStyle:(id)style;	// 0x3481f175
- (id)slideLayoutAtIndex:(unsigned)index;	// 0x3487150d
- (unsigned)slideLayoutCount;	// 0x348714ed
- (id)slideLayoutOfType:(int)type;	// 0x348717ad
// declared property getter: - (id)slideLayouts;	// 0x34a85ed5
- (id)styleMatrix;	// 0x34963c55
// converted property getter: - (id)theme;	// 0x3481c665
// converted property getter: - (id)titleTextStyle;	// 0x3486a92d
@end
