/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UILabeledPushButton : UIThreePartButton {
@private
	UILabel *_textLabel;	// 168 = 0xa8
	float _labelFontSize;	// 172 = 0xac
	float _labelOffset;	// 176 = 0xb0
}
@property(retain) id label;	// G=0x32240441; S=0x32240461; converted property
@property(assign, nonatomic) float labelFontSize;	// G=0x322403f1; S=0x32240411; 
@property(assign, nonatomic) float labelOffset;	// G=0x3223fc89; S=0x3223fc99; @synthesize=_labelOffset
- (void)_drawImageAndTextPartInRect:(CGRect)rect;	// 0x32240f3d
- (void)dealloc;	// 0x32240c2d
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x32240b65
// converted property getter: - (id)label;	// 0x32240441
// declared property getter: - (float)labelFontSize;	// 0x322403f1
// declared property getter: - (float)labelOffset;	// 0x3223fc89
- (void)layoutSubviews;	// 0x32241a55
- (void)setHighlighted:(BOOL)highlighted;	// 0x32240be5
// converted property setter: - (void)setLabel:(id)label;	// 0x32240461
// declared property setter: - (void)setLabelFontSize:(float)size;	// 0x32240411
// declared property setter: - (void)setLabelOffset:(float)offset;	// 0x3223fc99
@end

