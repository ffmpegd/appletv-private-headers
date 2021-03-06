/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRMultiPartWidgetLayer;

__attribute__((visibility("hidden")))
@interface BRTabControlItem : BRControl {
	id _opaqueIdentifier;	// 80 = 0x50
	BRMultiPartWidgetLayer *_baseControl;	// 84 = 0x54
	BRTextControl *_label;	// 88 = 0x58
}
@property(retain) id identifier;	// G=0x2d2ce9; S=0x2d2cf9; converted property
@property(retain) BRTextControl *label;	// G=0x2d2d3d; S=0x2d2d7d; converted property
- (id)init;	// 0x2d2b65
- (id)accessibilityLabel;	// 0x2d310d
- (void)dealloc;	// 0x2d2c71
// converted property getter: - (id)identifier;	// 0x2d2ce9
- (BOOL)isAccessibilityElement;	// 0x2d3165
// converted property getter: - (id)label;	// 0x2d2d3d
- (void)layoutSubcontrols;	// 0x2d2f51
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x2d2cf9
// converted property setter: - (void)setLabel:(id)label;	// 0x2d2d7d
- (void)setLabelAttributes:(id)attributes;	// 0x2d2e2d
- (void)setLabelOpacity:(float)opacity;	// 0x2d2e85
- (void)setTabImages:(id)images;	// 0x2d2ea5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d3031
@end

