/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, UIWebDragDotView, NSArray;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UIWebTextRangeView : UIView {
@private
	UIView<UITextSelectingContainer> *m_container;	// 44 = 0x2c
	NSArray *_rects;	// 48 = 0x30
	NSMutableArray *_rectViews;	// 52 = 0x34
	UIWebDragDotView *_topDot;	// 56 = 0x38
	UIWebDragDotView *_bottomDot;	// 60 = 0x3c
	BOOL _magnifying;	// 64 = 0x40
}
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x321d7141; 
@property(copy, nonatomic) NSArray *rects;	// G=0x321d7159; S=0x321d72e1; @synthesize=_rects
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x321d7399
- (CGRect)boundingRect;	// 0x321d7b45
// declared property getter: - (id)container;	// 0x321d7141
- (void)dealloc;	// 0x321d7521
- (void)doneMagnifying;	// 0x321d71d9
- (CGPoint)endCorner;	// 0x321d8181
- (CGRect)endEdge;	// 0x321d75a1
- (void)geometryChanged;	// 0x321d7155
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x321d7151
- (void)prepareForMagnification;	// 0x321d725d
- (CGRect)rectAtIndex:(int)index;	// 0x321d7a81
- (id)rectViewAtIndex:(int)index;	// 0x321d7355
// declared property getter: - (id)rects;	// 0x321d7159
- (void)removeFromSuperview;	// 0x321d74bd
// declared property setter: - (void)setRects:(id)rects;	// 0x321d72e1
- (CGPoint)startCorner;	// 0x321d7f79
- (CGRect)startEdge;	// 0x321d7619
- (void)updateDragDots;	// 0x321d78e9
- (void)updateRectViews;	// 0x321d7691
@end
