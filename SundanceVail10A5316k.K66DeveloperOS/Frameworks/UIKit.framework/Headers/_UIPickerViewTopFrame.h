/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPickerViewTopFrame : UIView {
@private
	UIImage *_leftImage;	// 84 = 0x54
	UIImage *_middleImage;	// 88 = 0x58
	UIImage *_rightImage;	// 92 = 0x5c
	float _inset;	// 96 = 0x60
	float _shift;	// 100 = 0x64
}
- (id)initWithFrame:(CGRect)frame;	// 0x30201e51
- (void)dealloc;	// 0x30207d1d
- (void)drawRect:(CGRect)rect;	// 0x30204e1d
- (void)setInset:(float)inset;	// 0x30202125
- (void)setLeftImage:(id)image middleImage:(id)image2 rightImage:(id)image3;	// 0x30202011
- (void)setShift:(float)shift;	// 0x30202165
@end

