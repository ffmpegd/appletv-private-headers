/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageControl.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface BRFocusableImageControl : BRImageControl {
	ATVImage *_focusedImage;	// 104 = 0x68
	ATVImage *_unfocusedImage;	// 108 = 0x6c
	ATVImage *_disabledImage;	// 112 = 0x70
	BOOL _dimsWhenDisabled;	// 116 = 0x74
	BOOL _disabled;	// 117 = 0x75
}
@property(assign) BOOL dimsWhenDisabled;	// G=0x379f81; S=0x379f55; converted property
@property(assign) BOOL disabled;	// G=0x379ee5; S=0x379eb1; converted property
@property(retain) ATVImage *disabledImage;	// G=0x379f45; S=0x379ef5; converted property
@property(retain) ATVImage *focusedImage;	// G=0x379e41; S=0x379df1; converted property
@property(retain) ATVImage *unfocusedImage;	// G=0x379ea1; S=0x379e51; converted property
- (void)_updateDim;	// 0x37a17d
- (void)_updateImage;	// 0x37a0e1
- (void)controlWasFocused;	// 0x379f91
- (void)controlWasUnfocused;	// 0x379fe9
- (void)dealloc;	// 0x379d79
// converted property getter: - (BOOL)dimsWhenDisabled;	// 0x379f81
// converted property getter: - (BOOL)disabled;	// 0x379ee5
// converted property getter: - (id)disabledImage;	// 0x379f45
// converted property getter: - (id)focusedImage;	// 0x379e41
- (id)preferredActionForKey:(id)key;	// 0x37a041
// converted property setter: - (void)setDimsWhenDisabled:(BOOL)disabled;	// 0x379f55
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x379eb1
// converted property setter: - (void)setDisabledImage:(id)image;	// 0x379ef5
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x379df1
// converted property setter: - (void)setUnfocusedImage:(id)image;	// 0x379e51
// converted property getter: - (id)unfocusedImage;	// 0x379ea1
@end

