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
@property(assign) BOOL dimsWhenDisabled;	// G=0x33c9f9; S=0x33c9cd; converted property
@property(assign) BOOL disabled;	// G=0x33c95d; S=0x33c929; converted property
@property(retain) ATVImage *disabledImage;	// G=0x33c9bd; S=0x33c96d; converted property
@property(retain) ATVImage *focusedImage;	// G=0x33c8b9; S=0x33c869; converted property
@property(retain) ATVImage *unfocusedImage;	// G=0x33c919; S=0x33c8c9; converted property
- (void)_updateDim;	// 0x33cbf5
- (void)_updateImage;	// 0x33cb59
- (void)controlWasFocused;	// 0x33ca09
- (void)controlWasUnfocused;	// 0x33ca61
- (void)dealloc;	// 0x33c7f1
// converted property getter: - (BOOL)dimsWhenDisabled;	// 0x33c9f9
// converted property getter: - (BOOL)disabled;	// 0x33c95d
// converted property getter: - (id)disabledImage;	// 0x33c9bd
// converted property getter: - (id)focusedImage;	// 0x33c8b9
- (id)preferredActionForKey:(id)key;	// 0x33cab9
// converted property setter: - (void)setDimsWhenDisabled:(BOOL)disabled;	// 0x33c9cd
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x33c929
// converted property setter: - (void)setDisabledImage:(id)image;	// 0x33c96d
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x33c869
// converted property setter: - (void)setUnfocusedImage:(id)image;	// 0x33c8c9
// converted property getter: - (id)unfocusedImage;	// 0x33c919
@end
