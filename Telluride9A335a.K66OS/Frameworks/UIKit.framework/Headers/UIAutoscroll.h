/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIView, NSTimer;
@protocol UIAutoscrollContainer;

__attribute__((visibility("hidden")))
@interface UIAutoscroll : NSObject {
@private
	id m_target;	// 4 = 0x4
	CGPoint m_point;	// 8 = 0x8
	UIView<UIAutoscrollContainer> *m_scrollContainer;	// 16 = 0x10
	int m_directions;	// 20 = 0x14
	double m_repeatInterval;	// 24 = 0x18
	NSTimer *m_timer;	// 32 = 0x20
	int m_count;	// 36 = 0x24
	BOOL m_active;	// 40 = 0x28
}
@property(assign, nonatomic) BOOL active;	// G=0x33b97739; S=0x33b97749; @synthesize=m_active
@property(assign, nonatomic) int count;	// G=0x33b97719; S=0x33b97729; @synthesize=m_count
@property(assign, nonatomic) int directions;	// G=0x33b976cd; S=0x33b976dd; @synthesize=m_directions
@property(assign, nonatomic) CGPoint point;	// G=0x33b9769d; S=0x33b976b9; @synthesize=m_point
@property(assign, nonatomic) double repeatInterval;	// G=0x33b976ed; S=0x33b97705; @synthesize=m_repeatInterval
@property(retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer;	// G=0x33b97669; S=0x33b97679; @synthesize=m_scrollContainer
@property(retain, nonatomic) id target;	// G=0x33b97635; S=0x33b97645; @synthesize=m_target
// declared property getter: - (BOOL)active;	// 0x33b97739
// declared property getter: - (int)count;	// 0x33b97719
- (void)dealloc;	// 0x33b97185
// declared property getter: - (int)directions;	// 0x33b976cd
- (void)invalidate;	// 0x33b974a9
// declared property getter: - (CGPoint)point;	// 0x33b9769d
// declared property getter: - (double)repeatInterval;	// 0x33b976ed
// declared property getter: - (id)scrollContainer;	// 0x33b97669
// declared property setter: - (void)setActive:(BOOL)active;	// 0x33b97749
// declared property setter: - (void)setCount:(int)count;	// 0x33b97729
// declared property setter: - (void)setDirections:(int)directions;	// 0x33b976dd
// declared property setter: - (void)setPoint:(CGPoint)point;	// 0x33b976b9
// declared property setter: - (void)setRepeatInterval:(double)interval;	// 0x33b97705
// declared property setter: - (void)setScrollContainer:(id)container;	// 0x33b97679
// declared property setter: - (void)setTarget:(id)target;	// 0x33b97645
- (BOOL)startAutoscroll:(id)autoscroll scrollContainer:(id)container point:(CGPoint)point directions:(int)directions repeatInterval:(double)interval;	// 0x33b971c5
// declared property getter: - (id)target;	// 0x33b97635
- (void)timerFired:(id)fired;	// 0x33b975b9
@end

