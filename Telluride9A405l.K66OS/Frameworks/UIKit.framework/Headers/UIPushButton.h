/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIFont, NSString;

@interface UIPushButton : UIControl {
	NSString *_title;	// 72 = 0x48
	UIFont *_font;	// 76 = 0x4c
	CGSize _shadowOffset;	// 80 = 0x50
	CGSize _imageOffset;	// 88 = 0x58
	CGSize _titlePadding;	// 96 = 0x60
	CFDictionaryRef _info;	// 104 = 0x68
	float _minimumFontPointSize;	// 108 = 0x6c
	docFlags _pushButtonFlags;	// 112 = 0x70
}
@property(assign) BOOL autosizesToFit;	// G=0x32e50285; S=0x32cf6dc5; converted property
@property(assign) BOOL drawContentsCentered;	// G=0x32e507f1; S=0x32cf69f5; converted property
@property(assign) BOOL drawsShadow;	// G=0x32e507a5; S=0x32db75d5; converted property
@property(retain) id image;	// G=0x32e509ad; S=0x32d5b2cd; converted property
@property(assign) CGSize imageOffset;	// G=0x32e507d5; S=0x32cfd9c5; converted property
@property(assign) float minimumFontSize;	// G=0x32e50275; S=0x32e5022d; converted property
@property(assign, getter=isSelected) BOOL selected;	// G=0x32d72e39; S=0x32e501b5; converted property
@property(readonly, assign) CGSize shadowOffset;	// G=0x32e507b9; converted property
@property(retain) NSString *title;	// G=0x32e5021d; S=0x32cf6e29; converted property
@property(retain) id titleColor;	// G=0x32e509d5; S=0x32cf6bf9; converted property
@property(retain) id titleFont;	// G=0x32cfd9d9; S=0x32cf6ea5; converted property
+ (id)defaultFont;	// 0x32e50085
- (id)initWithFrame:(CGRect)frame;	// 0x32cf6611
- (id)initWithImage:(id)image;	// 0x32e500bd
- (id)initWithTitle:(id)title;	// 0x32e500a9
- (id)initWithTitle:(id)title autosizesToFit:(BOOL)fit;	// 0x32db756d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x32e50661
- (XXStruct_UUz0SD)_backgroundSlices:(CGSize)slices;	// 0x32e5084d
- (XXStruct_Xx1ZfA)_currentButtonStateInfo;	// 0x32e508c5
- (void)_drawBezelPartInRect:(CGRect)rect;	// 0x32cfe931
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x32cff0c1
- (void)_removePressFeedback:(id)feedback finished:(id)finished;	// 0x32d53695
- (id)_scriptingInfo;	// 0x32e509e9
- (void)_setAlwaysHandleScrollerMouseEvent:(BOOL)event;	// 0x32e50679
- (void)_setNeedsDisplay:(XXStruct_Xx1ZfA)display;	// 0x32e5092d
// converted property getter: - (BOOL)autosizesToFit;	// 0x32e50285
- (id)backgroundForState:(unsigned)state;	// 0x32cf6939
- (id)currentBackground;	// 0x32cf68f5
- (id)currentImage;	// 0x32cf681d
- (id)currentShadowColor;	// 0x32cff951
- (id)currentTitleColor;	// 0x32cf6d31
- (void)dealloc;	// 0x32d53605
- (void)drawButtonPart:(int)part inRect:(CGRect)rect;	// 0x32cfe8f1
// converted property getter: - (BOOL)drawContentsCentered;	// 0x32e507f1
- (void)drawImageAtPoint:(CGPoint)point fraction:(float)fraction;	// 0x32d00389
- (void)drawRect:(CGRect)rect;	// 0x32cfe8a1
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x32cff65d
// converted property getter: - (BOOL)drawsShadow;	// 0x32e507a5
// converted property getter: - (id)image;	// 0x32e509ad
- (id)imageForState:(unsigned)state;	// 0x32cf68c5
// converted property getter: - (CGSize)imageOffset;	// 0x32e507d5
- (BOOL)isPressed;	// 0x32e50199
// converted property getter: - (BOOL)isSelected;	// 0x32d72e39
// converted property getter: - (float)minimumFontSize;	// 0x32e50275
- (CGPoint)pressFeedbackPosition;	// 0x32e5029d
// converted property setter: - (void)setAutosizesToFit:(BOOL)fit;	// 0x32cf6dc5
- (void)setBackground:(id)background forState:(unsigned)state;	// 0x32cf6a9d
- (void)setDisabledDimsImage:(BOOL)image;	// 0x32e50805
// converted property setter: - (void)setDrawContentsCentered:(BOOL)centered;	// 0x32cf69f5
- (void)setDrawContentsCenteredHorizontally:(BOOL)horizontally;	// 0x32e50739
- (void)setDrawsImageOnRight:(BOOL)right;	// 0x32cf6f21
// converted property setter: - (void)setDrawsShadow:(BOOL)shadow;	// 0x32db75d5
- (void)setEnabled:(BOOL)enabled;	// 0x32e50109
- (void)setFrame:(CGRect)frame;	// 0x32cf6969
- (void)setHighlighted:(BOOL)highlighted;	// 0x32e502f9
- (void)setHighlightedTitleColor:(id)color;	// 0x32e509c1
// converted property setter: - (void)setImage:(id)image;	// 0x32d5b2cd
- (void)setImage:(id)image forState:(unsigned)state;	// 0x32cfd87d
// converted property setter: - (void)setImageOffset:(CGSize)offset;	// 0x32cfd9c5
// converted property setter: - (void)setMinimumFontSize:(float)size;	// 0x32e5022d
- (void)setNeedsDisplay;	// 0x32cf66f1
- (void)setPressedImage:(id)image;	// 0x32e50999
- (void)setReverseShadowDirectionWhenHighlighted:(BOOL)highlighted;	// 0x32e506f1
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x32e501b5
- (void)setShadowColor:(id)color;	// 0x32db75f9
- (void)setShadowColor:(id)color forState:(unsigned)state;	// 0x32db760d
- (void)setShadowOffset:(float)offset;	// 0x32e506b1
- (void)setShowPressFeedback:(BOOL)feedback;	// 0x32e50781
- (void)setStretchBackground:(BOOL)background;	// 0x32cf699d
// converted property setter: - (void)setTitle:(id)title;	// 0x32cf6e29
// converted property setter: - (void)setTitleColor:(id)color;	// 0x32cf6bf9
- (void)setTitleColor:(id)color forState:(unsigned)state;	// 0x32cf6c0d
// converted property setter: - (void)setTitleFont:(id)font;	// 0x32cf6ea5
- (void)setTitlePadding:(CGSize)padding;	// 0x32e5069d
- (void)setTracking:(BOOL)tracking;	// 0x32e505e9
- (id)shadowColorForState:(unsigned)state;	// 0x32db7731
// converted property getter: - (CGSize)shadowOffset;	// 0x32e507b9
- (void)sizeToFit;	// 0x32d5b2e1
- (unsigned)state;	// 0x32cf6861
// converted property getter: - (id)title;	// 0x32e5021d
// converted property getter: - (id)titleColor;	// 0x32e509d5
- (id)titleColorForState:(unsigned)state;	// 0x32cf6d95
// converted property getter: - (id)titleFont;	// 0x32cfd9d9
@end

