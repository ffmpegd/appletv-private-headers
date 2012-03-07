/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView : UIView {
@private
	NSString *m_string;	// 48 = 0x30
	int m_type;	// 52 = 0x34
	int m_edgeType;	// 56 = 0x38
	UIFont *m_textFont;	// 60 = 0x3c
	BOOL m_animating;	// 64 = 0x40
	BOOL m_isLongString;	// 65 = 0x41
}
@property(assign, nonatomic) BOOL animating;	// G=0x33ba097d; S=0x33b207a1; @synthesize=m_animating
@property(assign, nonatomic) BOOL isLongString;	// G=0x33ba098d; S=0x33ba099d; @synthesize=m_isLongString
- (id)initWithFrame:(CGRect)frame string:(id)string type:(int)type edgeType:(int)type4;	// 0x33b1d615
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x33ba0775
// declared property getter: - (BOOL)animating;	// 0x33ba097d
- (void)dealloc;	// 0x33b1fa89
- (void)drawRect:(CGRect)rect;	// 0x33b1e2fd
// declared property getter: - (BOOL)isLongString;	// 0x33ba098d
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x33ba0771
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x33ba08c1
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x33ba0941
// declared property setter: - (void)setAnimating:(BOOL)animating;	// 0x33b207a1
- (void)setEdgeType:(int)type;	// 0x33b206bd
// declared property setter: - (void)setIsLongString:(BOOL)string;	// 0x33ba099d
@end

