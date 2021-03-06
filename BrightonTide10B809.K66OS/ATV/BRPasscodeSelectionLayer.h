/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, BRImageControl, BRTextControl, BRPasscodeSelectionWidget;

__attribute__((visibility("hidden")))
@interface BRPasscodeSelectionLayer : BRControl {
	NSArray *_backgroundLayers;	// 84 = 0x54
	NSArray *_digitLayers;	// 88 = 0x58
	NSArray *_bulletLayers;	// 92 = 0x5c
	BRImageControl *_arrowsLayer;	// 96 = 0x60
	BRPasscodeSelectionWidget *_selectionWidget;	// 100 = 0x64
	BRTextControl *_doneLayer;	// 104 = 0x68
	BOOL _isUserEditable;	// 108 = 0x6c
	unsigned _numDigits;	// 112 = 0x70
	BOOL _hideDigits;	// 116 = 0x74
	int _selection;	// 120 = 0x78
}
@property(retain) id passcode;	// G=0x368b29; S=0x368c91; converted property
- (id)initWithNumDigits:(unsigned)numDigits userEditable:(BOOL)editable hideDigits:(BOOL)digits;	// 0x367d85
- (void)_adjustDigitVisibility:(id)visibility;	// 0x36a445
- (CGRect)_arrowsFrameForSelection:(int)selection;	// 0x369c75
- (id)_buildArrowsLayer;	// 0x369671
- (id)_buildBackgroundLayers;	// 0x3692bd
- (id)_buildBulletLayers;	// 0x369505
- (id)_buildDigitLayers;	// 0x3693bd
- (id)_buildDoneLayer;	// 0x36972d
- (CGRect)_cellFrameForSelection:(int)selection;	// 0x369e7d
- (CGRect)_digitFrameForSelection:(int)selection digit:(id)digit;	// 0x369d81
- (void)_hideDigitAtIndex:(int)index;	// 0x36a3ad
- (float)_layoutUIWithHeight:(float)height;	// 0x369809
- (CGRect)_selectionWidgetFrameForSelection:(int)selection;	// 0x369bb5
- (void)_setDigitHighlighted:(BOOL)highlighted atIndex:(int)index;	// 0x36a1e9
- (void)_setDigitValue:(id)value atIndex:(int)index;	// 0x36a2d9
- (void)_setSelection:(int)selection;	// 0x369fa5
- (id)accessibilityLabel;	// 0x36a4ad
- (id)accessibilityTraitsList;	// 0x36a62d
- (void)dealloc;	// 0x367fc9
- (BOOL)decrementSelection;	// 0x36865d
- (BOOL)digitsHidden;	// 0x369075
- (BOOL)doneButtonSelected;	// 0x368e95
- (void)hideDigits:(int)digits;	// 0x369085
- (BOOL)incrementSelection;	// 0x368425
- (BOOL)moveSelectionLeft;	// 0x368345
- (BOOL)moveSelectionRight;	// 0x368251
// converted property getter: - (id)passcode;	// 0x368b29
- (CGRect)preferredFrameForScreenSize:(CGSize)screenSize;	// 0x36807d
- (void)reset;	// 0x368edd
- (void)setFrame:(CGRect)frame;	// 0x368f7d
// converted property setter: - (void)setPasscode:(id)passcode;	// 0x368c91
- (BOOL)setSelection:(int)selection;	// 0x368a45
- (BOOL)setValueAtSelection:(int)selection;	// 0x368885
- (void)showDigits;	// 0x36917d
- (float)widthOfDigitsForScreenSize:(CGSize)screenSize;	// 0x3681d1
@end

