/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIImageView, UIColor;

__attribute__((visibility("hidden")))
@interface UIWebDragDotView : UIView {
	UIColor *m_insertionPointColor;	// 96 = 0x60
	UIColor *m_selectionBarColor;	// 100 = 0x64
	UIImageView *m_dot;	// 104 = 0x68
	int m_orientation;	// 108 = 0x6c
	CGRect m_stickFrame;	// 112 = 0x70
	CGRect m_dotFrame;	// 128 = 0x80
}
@property(assign, nonatomic) BOOL showsBall;	// G=0x2f7511f5; S=0x2f751221; 
- (id)initWithEdge:(CGRect)edge container:(id)container orientation:(int)orientation;	// 0x2f75030d
- (void)dealloc;	// 0x2f750505
- (void)drawRect:(CGRect)rect;	// 0x2f750e35
- (BOOL)isPointedDown;	// 0x2f75059d
- (BOOL)isPointedLeft;	// 0x2f7505e5
- (BOOL)isPointedRight;	// 0x2f7505cd
- (BOOL)isPointedUp;	// 0x2f7505b5
- (BOOL)isVertical;	// 0x2f75057d
- (void)setEdge:(CGRect)edge;	// 0x2f750731
// declared property setter: - (void)setShowsBall:(BOOL)ball;	// 0x2f751221
// declared property getter: - (BOOL)showsBall;	// 0x2f7511f5
- (CGRect)stickFrameForEdge:(CGRect)edge withOverlap:(float)overlap;	// 0x2f7505fd
@end

