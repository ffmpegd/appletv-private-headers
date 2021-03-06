/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIFont, NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView {
	NSString *m_string;	// 84 = 0x54
	int m_type;	// 88 = 0x58
	int m_edgeType;	// 92 = 0x5c
	UIFont *m_textFont;	// 96 = 0x60
	BOOL m_animating;	// 100 = 0x64
	BOOL m_isLongString;	// 101 = 0x65
}
@property(assign, nonatomic) BOOL animating;	// G=0x32d32091; S=0x32cab019; @synthesize=m_animating
@property(assign, nonatomic) BOOL isLongString;	// G=0x32d320a1; S=0x32d320b1; @synthesize=m_isLongString
- (id)initWithFrame:(CGRect)frame string:(id)string type:(int)type edgeType:(int)type4;	// 0x32c5451d
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x32d31e69
// declared property getter: - (BOOL)animating;	// 0x32d32091
- (void)dealloc;	// 0x32c56909
- (void)drawRect:(CGRect)rect;	// 0x32c553bd
// declared property getter: - (BOOL)isLongString;	// 0x32d320a1
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x32d31e65
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32d31fdd
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32d32055
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x32cab019
- (void)setEdgeType:(int)type;	// 0x32caaf29
// declared property setter: - (void)setIsLongString:(BOOL)string;	// 0x32d320b1
@end

