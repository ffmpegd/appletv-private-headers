/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UICalloutBarOverlay : UIView {
@private
	CGRect m_arrowRect;	// 48 = 0x30
	float m_dividerOffsets[12];	// 64 = 0x40
	BOOL highlighted;	// 112 = 0x70
	CGRect highlightRect;	// 116 = 0x74
}
@property(assign, nonatomic) CGRect highlightRect;	// G=0x32f42801; S=0x32d7f019; @synthesize
@property(assign, nonatomic) BOOL highlighted;	// G=0x32f427f1; S=0x32d8187d; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x32d7ef85
- (void)dealloc;	// 0x32f41f59
- (void)drawRect:(CGRect)rect;	// 0x32f41f85
// declared property getter: - (CGRect)highlightRect;	// 0x32f42801
// declared property getter: - (BOOL)highlighted;	// 0x32f427f1
- (void)setDividerOffsets:(float *)offsets;	// 0x32ddc519
// declared property setter: - (void)setHighlightRect:(CGRect)rect;	// 0x32d7f019
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x32d8187d
- (void)setHighlighted:(BOOL)highlighted forFrame:(CGRect)frame;	// 0x32d81829
@end

