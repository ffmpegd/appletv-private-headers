/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiGraphics : NSObject {
@private
	CGRect _imageRect;	// 4 = 0x4
	UIKBThemeRef _categoryTheme;	// 20 = 0x14
	UIKBThemeRef _categorySelectedTheme;	// 24 = 0x18
	UIKBThemeRef _controlTheme;	// 28 = 0x1c
	UIKBThemeRef _controlPressedTheme;	// 32 = 0x20
	UIKBThemeRef _dividerTheme;	// 36 = 0x24
	UIKBThemeRef _darkDividerTheme;	// 40 = 0x28
	UIKBThemeRef _selectedDividerTheme;	// 44 = 0x2c
	UIKBThemeRef _backgroundTheme;	// 48 = 0x30
	CGColorRef _selectedDividerStart;	// 52 = 0x34
	CGColorRef _symbolColor;	// 56 = 0x38
	CGGradientRef _darkDividerGradient;	// 60 = 0x3c
	CGGradientRef _selectedGradient;	// 64 = 0x40
	CGGradientRef _selectedDividerGradient;	// 68 = 0x44
	CGGradientRef _backgroundGradient;	// 72 = 0x48
}
+ (id)emojiWithName:(id)name;	// 0x354075e1
+ (id)imageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;	// 0x354054c9
+ (void)mapImagesIfNecessary;	// 0x354074b5
+ (id)sharedInstance;	// 0x35404b95
- (id)init;	// 0x35404ab1
- (id)backgroundGradientGenerator:(id)generator;	// 0x354060b5
- (id)categoryKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x35406e51
- (id)categoryNatureGenerator:(id)generator;	// 0x354059ad
- (id)categoryObjectsGenerator:(id)generator;	// 0x35405a05
- (id)categoryPeopleGenerator:(id)generator;	// 0x35405931
- (id)categoryPlacesGenerator:(id)generator;	// 0x35405a5d
- (id)categoryRecentsGenerator:(id)generator;	// 0x354058d9
- (id)categorySymbolsGenerator:(id)generator;	// 0x35405ab5
- (id)categoryWithSymbol:(id)symbol pressed:(id)pressed;	// 0x3540574d
- (id)controlDeleteGenerator:(id)generator;	// 0x35405dfd
- (id)controlDeleteKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x35406d05
- (id)controlDismissKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x35406a8d
- (id)controlInternationalGenerator:(id)generator;	// 0x35405d91
- (id)controlInternationalKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x354069b5
- (id)controlSpaceKeyGenerator:(BOOL)generator rect:(CGRect)rect;	// 0x35406ddd
- (id)controlWithSymbol:(id)symbol corners:(int)corners padding:(CGSize)padding generator:(id)generator;	// 0x35405b0d
- (UIKBThemeRef)createProtoThemeForKey:(id)key keyboard:(id)keyboard state:(int)state;	// 0x35406659
- (id)darkDividerGenerator:(id)generator;	// 0x3540570d
- (void)dealloc;	// 0x35404af9
- (id)dividerGenerator:(id)generator;	// 0x354056ed
- (id)dividerWithTheme:(UIKBThemeRef)theme;	// 0x354055d1
- (void)drawTopEdgeInContext:(CGContextRef)context withTheme:(UIKBThemeRef)theme;	// 0x3540551d
- (id)emojiPressedGenerator:(id)generator rect:(CGRect)rect;	// 0x354062b5
- (id)generateImageWithRect:(CGRect)rect name:(id)name pressed:(BOOL)pressed;	// 0x35405325
- (void)initializeThemes;	// 0x35404c89
- (id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size;	// 0x35406969
- (id)keyImageWithDisplayString:(id)displayString state:(int)state rect:(CGRect)rect fontSize:(float)size offset:(CGPoint)offset;	// 0x3540685d
- (id)pageIndicatorCurrentGenerator:(id)generator;	// 0x35406079
- (id)pageIndicatorGenerator:(id)generator;	// 0x35405e61
- (id)protoKeyWithDisplayString:(id)displayString;	// 0x35406721
- (id)protoKeyboard;	// 0x354067d9
- (void)releaseThemes;	// 0x35404bdd
- (id)selectedDividerGenerator:(id)generator;	// 0x3540572d
@end

