/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
	BRTextControl *_labelLayer;	// 84 = 0x54
	BRControl *_valueLayer;	// 88 = 0x58
	float _maxLabelWidth;	// 92 = 0x5c
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x2f9a75
- (id)accessibilityLabel;	// 0x2f9c15
- (void)dealloc;	// 0x2f9b81
- (id)label;	// 0x2f9be5
- (void)layoutSubcontrols;	// 0x2f9d3d
- (void)setMaxLabelWidth:(float)width;	// 0x2f9c6d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f9c8d
- (id)value;	// 0x2f9c05
@end

