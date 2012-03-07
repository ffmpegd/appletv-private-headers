/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UITouch, UITextSelectionView, UISelectionGrabber, NSMutableArray, NSArray;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
@private
	UITextSelectionView *m_selectionView;	// 48 = 0x30
	UIView<UITextSelectingContainer> *m_container;	// 52 = 0x34
	int m_mode;	// 56 = 0x38
	NSArray *m_rects;	// 60 = 0x3c
	NSMutableArray *m_rectViews;	// 64 = 0x40
	UITouch *m_activeTouch;	// 68 = 0x44
	CGRect m_startEdge;	// 72 = 0x48
	CGRect m_endEdge;	// 88 = 0x58
	CGPoint m_basePoint;	// 104 = 0x68
	CGPoint m_extentPoint;	// 112 = 0x70
	CGPoint m_initialBasePoint;	// 120 = 0x78
	CGPoint m_initialExtentPoint;	// 128 = 0x80
	float m_initialDistance;	// 136 = 0x88
	CGPoint m_touchOffset;	// 140 = 0x8c
	double m_firstMovedTime;	// 148 = 0x94
	UISelectionGrabber *m_startGrabber;	// 156 = 0x9c
	UISelectionGrabber *m_endGrabber;	// 160 = 0xa0
	BOOL m_animateUpdate;	// 164 = 0xa4
	BOOL m_baseIsStart;	// 165 = 0xa5
	BOOL m_commandsWereShowing;	// 166 = 0xa6
	BOOL m_inGesture;	// 167 = 0xa7
	BOOL m_magnifying;	// 168 = 0xa8
	BOOL m_scrolling;	// 169 = 0xa9
	BOOL m_scaling;	// 170 = 0xaa
	BOOL m_rotating;	// 171 = 0xab
	BOOL m_inputViewIsChanging;	// 172 = 0xac
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x3013690d; S=0x302f5405; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x302f5605; S=0x302f5615; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x302f4fe9; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x302f5429; S=0x302f5439; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x302f5481; S=0x302f549d; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x302f5625; S=0x302f5635; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x3012e7a5; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x3012f661; S=0x302f5465; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x30136991; S=0x302f55e1; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x302f54b1; S=0x302f54cd; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x302f5591; S=0x302f55a9; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x302f5665; S=0x301369b1; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x302f54e1; S=0x302f54fd; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x302f5541; S=0x302f5551; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x302f5511; S=0x302f552d; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x302f56c5; S=0x302f56d5; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x302f5675; S=0x301369a1; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x302f5645; S=0x302f5655; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x3012ebb5; S=0x3012e2b5; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x302f41fd; S=0x302f420d; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x302f56a5; S=0x302f56b5; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x302f5685; S=0x302f5695; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x302f41ed; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x3012f63d; S=0x302f5449; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x3013693d; S=0x302f55bd; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x302f5561; S=0x302f557d; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x3012e1ad
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x302f32f1
// declared property getter: - (id)activeTouch;	// 0x3013690d
// declared property getter: - (BOOL)animateUpdate;	// 0x302f5605
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x302f4f59
// declared property getter: - (BOOL)autoscrolled;	// 0x302f4fe9
// declared property getter: - (BOOL)baseIsStart;	// 0x302f5429
// declared property getter: - (CGPoint)basePoint;	// 0x302f5481
- (void)beginMagnifying;	// 0x302f5021
- (void)cancelDelayedActions;	// 0x3013691d
// declared property getter: - (BOOL)commandsWereShowing;	// 0x302f5625
// declared property getter: - (id)container;	// 0x3012e7a5
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x302f5361
- (void)dealloc;	// 0x301468f9
- (void)didRotate;	// 0x302f4d51
- (void)didScroll;	// 0x302f4c91
- (void)doneMagnifying;	// 0x302f4bf1
// declared property getter: - (CGRect)endEdge;	// 0x3012f661
// declared property getter: - (id)endGrabber;	// 0x30136991
// declared property getter: - (CGPoint)extentPoint;	// 0x302f54b1
// declared property getter: - (double)firstMovedTime;	// 0x302f5591
// declared property getter: - (BOOL)inGesture;	// 0x302f5665
// declared property getter: - (CGPoint)initialBasePoint;	// 0x302f54e1
// declared property getter: - (float)initialDistance;	// 0x302f5541
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x302f5511
- (void)inputViewDidChange;	// 0x302f4dc9
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x302f56c5
- (void)inputViewWillChange;	// 0x302f4d99
// declared property getter: - (BOOL)isScrolling;	// 0x302f5675
- (CGPoint)magnifierPoint;	// 0x302f5241
// declared property getter: - (BOOL)magnifying;	// 0x302f5645
// declared property getter: - (int)mode;	// 0x3012ebb5
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x302f4e89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x302f332d
- (void)prepareForMagnification;	// 0x302f4b81
// declared property getter: - (id)rects;	// 0x302f41fd
- (void)removeFromSuperview;	// 0x301367f1
// declared property getter: - (BOOL)rotating;	// 0x302f56a5
- (void)scaleDidChange;	// 0x302f4cf1
- (void)scaleWillChange;	// 0x302f4cc1
// declared property getter: - (BOOL)scaling;	// 0x302f5685
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x302f4b39
// declared property getter: - (id)selectionView;	// 0x302f41ed
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x302f5405
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x302f5615
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x302f5439
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x302f549d
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x302f5635
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x302f53c5
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x302f5465
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x302f55e1
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x302f54cd
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x302f55a9
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x301369b1
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x302f54fd
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x302f5551
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x302f552d
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x302f56d5
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x301369a1
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x302f5655
// declared property setter: - (void)setMode:(int)mode;	// 0x3012e2b5
// declared property setter: - (void)setRects:(id)rects;	// 0x302f420d
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x302f56b5
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x302f5695
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x302f5449
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x302f55bd
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x302f557d
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x302f4ee1
- (void)startAnimating;	// 0x302f4df9
// declared property getter: - (CGRect)startEdge;	// 0x3012f63d
// declared property getter: - (id)startGrabber;	// 0x3013693d
- (void)stopAnimating;	// 0x302f4e41
// declared property getter: - (CGPoint)touchOffset;	// 0x302f5561
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302f33e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302f40fd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302f3d55
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302f3971
- (void)updateBaseAndExtentPointsFromEdges;	// 0x302f5109
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x302f4631
- (void)updateDots;	// 0x30146269
- (void)updateGrabbers;	// 0x3012e7b5
- (void)updateRectViews;	// 0x3012e321
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x302f4545
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x302f43dd
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x302f4729
- (void)willRotate;	// 0x302f4d21
- (void)willScroll;	// 0x302f4c61
@end

