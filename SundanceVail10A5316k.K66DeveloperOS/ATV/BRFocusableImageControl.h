/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageControl.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRFocusableImageControl : BRImageControl {
	BRImage *_focusedImage;	// 100 = 0x64
	BRImage *_unfocusedImage;	// 104 = 0x68
	BRImage *_disabledImage;	// 108 = 0x6c
	BOOL _dimsWhenDisabled;	// 112 = 0x70
	BOOL _disabled;	// 113 = 0x71
}
@property(assign) BOOL dimsWhenDisabled;	// G=0x29f721; S=0x29f6f5; converted property
@property(assign) BOOL disabled;	// G=0x29f685; S=0x29f651; converted property
@property(retain) BRImage *disabledImage;	// G=0x29f6e5; S=0x29f695; converted property
@property(retain) BRImage *focusedImage;	// G=0x29f5e1; S=0x29f591; converted property
@property(retain) BRImage *unfocusedImage;	// G=0x29f641; S=0x29f5f1; converted property
- (void)_updateDim;	// 0x29f91d
- (void)_updateImage;	// 0x29f881
- (void)controlWasFocused;	// 0x29f731
- (void)controlWasUnfocused;	// 0x29f789
- (void)dealloc;	// 0x29f519
// converted property getter: - (BOOL)dimsWhenDisabled;	// 0x29f721
// converted property getter: - (BOOL)disabled;	// 0x29f685
// converted property getter: - (id)disabledImage;	// 0x29f6e5
// converted property getter: - (id)focusedImage;	// 0x29f5e1
- (id)preferredActionForKey:(id)key;	// 0x29f7e1
// converted property setter: - (void)setDimsWhenDisabled:(BOOL)disabled;	// 0x29f6f5
// converted property setter: - (void)setDisabled:(BOOL)disabled;	// 0x29f651
// converted property setter: - (void)setDisabledImage:(id)image;	// 0x29f695
// converted property setter: - (void)setFocusedImage:(id)image;	// 0x29f591
// converted property setter: - (void)setUnfocusedImage:(id)image;	// 0x29f5f1
// converted property getter: - (id)unfocusedImage;	// 0x29f641
@end

