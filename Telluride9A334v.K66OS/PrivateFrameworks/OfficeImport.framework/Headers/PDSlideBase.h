/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTableStyle, OADBackground, NSString, PDAnimation, PDTransition, NSArray;

__attribute__((visibility("hidden")))
@interface PDSlideBase : NSObject {
@private
	NSString *mName;	// 4 = 0x4
	NSArray *mDrawables;	// 8 = 0x8
	OADBackground *mBackground;	// 12 = 0xc
	PDAnimation *mAnimation;	// 16 = 0x10
	PDTransition *mTransition;	// 20 = 0x14
	OADTableStyle *mDefaultTableStyle;	// 24 = 0x18
	unsigned mIsHidden : 1;	// 28 = 0x1c
	unsigned mIsDoneWithContent : 1;	// 28 = 0x1c
}
@property(retain) id background;	// G=0x3556b70d; S=0x3556ab2d; converted property
@property(retain) id defaultTableStyle;	// G=0x356fae81; S=0x3569260d; converted property
@property(assign) BOOL isHidden;	// G=0x3556adcd; S=0x3569fb45; converted property
@property(retain) id name;	// G=0x356fae45; S=0x35692cc9; converted property
@property(retain) id transition;	// G=0x35692d9d; S=0x3562aaa9; converted property
+ (int)inheritedPlaceholderType:(int)type;	// 0x35565da5
- (id)init;	// 0x354e9f11
- (void)addSlideNumberPlaceholder:(id)placeholder;	// 0x355a5b6d
- (id)animation;	// 0x356fae55
// converted property getter: - (id)background;	// 0x3556b70d
- (id)colorMap;	// 0x356fae79
- (id)colorScheme;	// 0x356fae71
- (void)dealloc;	// 0x3556d285
// converted property getter: - (id)defaultTableStyle;	// 0x356fae81
- (id)defaultTheme;	// 0x356fae65
- (void)doneWithContent;	// 0x356fb069
- (id)drawables;	// 0x3556be99
- (id)drawingTheme;	// 0x356fae91
- (id)fontScheme;	// 0x356fae75
- (void)generatePpt9Animations:(id)animations;	// 0x356fae95
- (BOOL)hasPpt10Animations;	// 0x356fb039
- (BOOL)hasPpt9Animations;	// 0x356faf79
// converted property getter: - (BOOL)isHidden;	// 0x3556adcd
- (id)masterGraphicForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x356a6715
// converted property getter: - (id)name;	// 0x356fae45
- (id)parentShapePropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x356a6711
- (id)parentSlideBase;	// 0x356fae6d
- (id)parentTextBodyPropertiesForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x356a670d
- (id)parentTextStyleForPlaceholderType:(int)placeholderType placeholderTypeIndex:(int)index defaultTextListStyle:(id)style overrideIndex:(BOOL)index4;	// 0x356a6709
- (id)parentTextStyleForTables;	// 0x356fae69
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index overrideIndex:(BOOL)index3;	// 0x35564b8d
- (id)placeholderWithType:(int)type placeholderTypeIndex:(int)index useBaseTypeMatch:(BOOL)match overrideIndex:(BOOL)index4;	// 0x35564bb1
// converted property setter: - (void)setBackground:(id)background;	// 0x3556ab2d
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x3569260d
- (void)setDrawables:(id)drawables defaultTextListStyle:(id)style;	// 0x35565461
- (void)setInheritedTextStyle:(id)style placeholderType:(int)type defaultTextListStyle:(id)style3;	// 0x356fb139
// converted property setter: - (void)setIsHidden:(BOOL)hidden;	// 0x3569fb45
// converted property setter: - (void)setName:(id)name;	// 0x35692cc9
- (void)setPpt9AnimationDataForCacheItem:(id)cacheItem order:(int)order;	// 0x356fb151
// converted property setter: - (void)setTransition:(id)transition;	// 0x3562aaa9
- (id)styleMatrix;	// 0x356fae7d
// converted property getter: - (id)transition;	// 0x35692d9d
@end

