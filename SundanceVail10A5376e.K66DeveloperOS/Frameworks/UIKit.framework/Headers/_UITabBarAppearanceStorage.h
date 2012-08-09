/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIColor, _UITabBarItemAppearanceStorage, UIImage, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _UITabBarAppearanceStorage : NSObject {
	NSMutableDictionary *_dividerImages;	// 4 = 0x4
	UIImage *backgroundImage;	// 8 = 0x8
	UIImage *shadowImage;	// 12 = 0xc
	UIImage *selectionIndicatorImage;	// 16 = 0x10
	UIColor *tintColor;	// 20 = 0x14
	UIColor *selectedImageTintColor;	// 24 = 0x18
	_UITabBarItemAppearanceStorage *tabItemAppearanceStorage;	// 28 = 0x1c
}
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x302dabe9; S=0x302dabf9; @synthesize
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x3049c089; S=0x3049c099; @synthesize
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x302dad89; S=0x302dad99; @synthesize
@property(retain, nonatomic) UIImage *shadowImage;	// G=0x302dac09; S=0x302daf31; @synthesize
@property(retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;	// G=0x3049bf51; S=0x3049bf15; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3049c069; S=0x3049c079; @synthesize
- (id)_dividerImageForLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x302db335
- (void)_setDividerImage:(id)image forLeftButtonState:(unsigned)leftButtonState rightButtonState:(unsigned)state;	// 0x302db3d1
- (id)_tabItemAppearanceStorage;	// 0x302dd311
// declared property getter: - (id)backgroundImage;	// 0x302dabe9
- (void)dealloc;	// 0x3049bfa1
// declared property getter: - (id)selectedImageTintColor;	// 0x3049c089
// declared property getter: - (id)selectionIndicatorImage;	// 0x302dad89
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x302dabf9
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x3049c099
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x302dad99
// declared property setter: - (void)setShadowImage:(id)image;	// 0x302daf31
// declared property setter: - (void)setTabItemAppearanceStorage:(id)storage;	// 0x3049bf15
// declared property setter: - (void)setTintColor:(id)color;	// 0x3049c079
// declared property getter: - (id)shadowImage;	// 0x302dac09
// declared property getter: - (id)tabItemAppearanceStorage;	// 0x3049bf51
// declared property getter: - (id)tintColor;	// 0x3049c069
@end
