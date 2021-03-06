/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImageView.h"
#import "UIKit-Structs.h"

@class UIToolbar, _UISwappableImageViewAnimationProxy;

__attribute__((visibility("hidden")))
@interface UISwappableImageView : UIImageView {
@private
	id _value;	// 52 = 0x34
	id _alternate;	// 56 = 0x38
	float _scale;	// 60 = 0x3c
	BOOL _showAlternate;	// 64 = 0x40
	BOOL _flipped;	// 65 = 0x41
	BOOL _updateImage;	// 66 = 0x42
	BOOL _bezel;	// 67 = 0x43
	int _bezelStyle;	// 68 = 0x44
	int _currentAnimation;	// 72 = 0x48
	UIToolbar *_buttonBar;	// 76 = 0x4c
	int _buttonTag;	// 80 = 0x50
	_UISwappableImageViewAnimationProxy *_proxy;	// 84 = 0x54
	int _barButtonItemStyle;	// 88 = 0x58
	BOOL _didDisableWindowAutorotation;	// 92 = 0x5c
	id _didFinishTarget;	// 96 = 0x60
	SEL _didFinishSelector;	// 100 = 0x64
}
- (id)initWithImage:(id)image alternateImage:(id)image2 barStyle:(int)style barButtonItemStyle:(int)style4 tintColor:(id)color bezel:(BOOL)bezel;	// 0x300cecf9
- (void)_willMoveToWindow:(id)window;	// 0x300d3661
- (void)animateImage:(float)image withButtonBar:(id)buttonBar withTag:(int)tag target:(id)target didFinishSelector:(SEL)selector;	// 0x30221ca9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x30221f41
- (void)dealloc;	// 0x300d6e09
- (void)setBezelStyleForBarStyle:(int)barStyle tintColor:(id)color;	// 0x300cf1a5
- (void)setBezelStyleForBarStyle:(int)barStyle tintColor:(id)color iconTintColor:(id)color3 iconTintColorDidChange:(BOOL)iconTintColor;	// 0x300cf1c9
- (void)setFlipped:(BOOL)flipped;	// 0x30221bb1
- (void)setImage:(id)image;	// 0x302220b1
- (void)showAlternateImage:(BOOL)image;	// 0x30221b75
- (void)updateImageIfNeeded;	// 0x30221b61
- (void)updateImageIfNeededWithTintColor:(id)tintColor;	// 0x300cf335
@end

