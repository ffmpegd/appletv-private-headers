/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKControl.h"

@class DPTextLayer, SKImageLayer, CAFilter;

@interface SKButton : SKControl {
	CAFilter *_buttonDownFilter;	// 68 = 0x44
	int _type;	// 72 = 0x48
	BOOL _value;	// 76 = 0x4c
	CGColorRef _bgColor;	// 80 = 0x50
	DPTextLayer *_textLayer;	// 84 = 0x54
	SKImageLayer *_imageLayer;	// 88 = 0x58
	bool isClick;	// 92 = 0x5c
}
@property(retain) id text;	// G=0x331142cd; S=0x331142ed; converted property
@property(assign) BOOL value;	// G=0x33114399; S=0x331143a9; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x331140e1
- (void)dealloc;	// 0x331141e9
- (void)drawInContext:(CGContextRef)context;	// 0x33114749
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x331147f1
- (BOOL)push;	// 0x3311434d
- (void)setBackgroundColor:(CGColorRef)color;	// 0x33114451
- (void)setBounds:(CGRect)bounds;	// 0x33114261
- (void)setButtonType:(int)type;	// 0x33114401
- (void)setFontColor:(CGColorRef)color;	// 0x3311432d
- (void)setFontSize:(int)size;	// 0x3311430d
- (void)setImage:(id)image;	// 0x33114485
- (void)setImageFrame:(CGRect)frame;	// 0x33114579
// converted property setter: - (void)setText:(id)text;	// 0x331142ed
- (void)setTextBottomJustified:(BOOL)justified;	// 0x33114559
// converted property setter: - (void)setValue:(BOOL)value;	// 0x331143a9
// converted property getter: - (id)text;	// 0x331142cd
// converted property getter: - (BOOL)value;	// 0x33114399
@end
