/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMultiPartWidgetLayer;

__attribute__((visibility("hidden")))
@interface BRTabControlItem : BRControl {
	id _opaqueIdentifier;	// 84 = 0x54
	BRMultiPartWidgetLayer *_baseControl;	// 88 = 0x58
	BRTextControl *_label;	// 92 = 0x5c
}
@property(retain) id identifier;	// G=0x30da69; S=0x30da79; converted property
@property(retain) BRTextControl *label;	// G=0x30dabd; S=0x30dafd; converted property
- (id)init;	// 0x30d8e5
- (id)accessibilityLabel;	// 0x30de8d
- (void)dealloc;	// 0x30d9f1
// converted property getter: - (id)identifier;	// 0x30da69
- (BOOL)isAccessibilityElement;	// 0x30dee5
// converted property getter: - (id)label;	// 0x30dabd
- (void)layoutSubcontrols;	// 0x30dcd1
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x30da79
// converted property setter: - (void)setLabel:(id)label;	// 0x30dafd
- (void)setLabelAttributes:(id)attributes;	// 0x30dbad
- (void)setLabelOpacity:(float)opacity;	// 0x30dc05
- (void)setTabImages:(id)images;	// 0x30dc25
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30ddb1
@end
