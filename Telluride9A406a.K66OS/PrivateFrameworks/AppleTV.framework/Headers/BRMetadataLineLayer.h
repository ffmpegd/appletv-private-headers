/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl;

__attribute__((visibility("hidden")))
@interface BRMetadataLineLayer : BRControl {
@private
	BRTextControl *_labelLayer;	// 48 = 0x30
	BRControl *_valueLayer;	// 52 = 0x34
	float _maxLabelWidth;	// 56 = 0x38
}
- (id)initWithLabel:(id)label value:(id)value;	// 0x3308d579
- (id)accessibilityLabel;	// 0x3308d721
- (void)dealloc;	// 0x3308d691
- (id)label;	// 0x3308d6f1
- (void)layoutSubcontrols;	// 0x3308d85d
- (void)setMaxLabelWidth:(float)width;	// 0x3308d779
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3308d799
- (id)value;	// 0x3308d711
@end
