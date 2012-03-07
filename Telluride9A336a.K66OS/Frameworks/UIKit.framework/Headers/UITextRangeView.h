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
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x351c190d; S=0x35380405; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x35380605; S=0x35380615; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x3537ffe9; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x35380429; S=0x35380439; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x35380481; S=0x3538049d; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x35380625; S=0x35380635; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *container;	// G=0x351b97a5; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x351ba661; S=0x35380465; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x351c1991; S=0x353805e1; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x353804b1; S=0x353804cd; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x35380591; S=0x353805a9; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x35380665; S=0x351c19b1; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x353804e1; S=0x353804fd; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x35380541; S=0x35380551; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x35380511; S=0x3538052d; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x353806c5; S=0x353806d5; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x35380675; S=0x351c19a1; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x35380645; S=0x35380655; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x351b9bb5; S=0x351b92b5; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x3537f1fd; S=0x3537f20d; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x353806a5; S=0x353806b5; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x35380685; S=0x35380695; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x3537f1ed; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x351ba63d; S=0x35380449; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x351c193d; S=0x353805bd; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x35380561; S=0x3538057d; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x351b91ad
- (id)initWithFrame:(CGRect)frame textContainer:(id)container;	// 0x3537e2f1
// declared property getter: - (id)activeTouch;	// 0x351c190d
// declared property getter: - (BOOL)animateUpdate;	// 0x35380605
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x3537ff59
// declared property getter: - (BOOL)autoscrolled;	// 0x3537ffe9
// declared property getter: - (BOOL)baseIsStart;	// 0x35380429
// declared property getter: - (CGPoint)basePoint;	// 0x35380481
- (void)beginMagnifying;	// 0x35380021
- (void)cancelDelayedActions;	// 0x351c191d
// declared property getter: - (BOOL)commandsWereShowing;	// 0x35380625
// declared property getter: - (id)container;	// 0x351b97a5
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x35380361
- (void)dealloc;	// 0x351d18f9
- (void)didRotate;	// 0x3537fd51
- (void)didScroll;	// 0x3537fc91
- (void)doneMagnifying;	// 0x3537fbf1
// declared property getter: - (CGRect)endEdge;	// 0x351ba661
// declared property getter: - (id)endGrabber;	// 0x351c1991
// declared property getter: - (CGPoint)extentPoint;	// 0x353804b1
// declared property getter: - (double)firstMovedTime;	// 0x35380591
// declared property getter: - (BOOL)inGesture;	// 0x35380665
// declared property getter: - (CGPoint)initialBasePoint;	// 0x353804e1
// declared property getter: - (float)initialDistance;	// 0x35380541
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x35380511
- (void)inputViewDidChange;	// 0x3537fdc9
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x353806c5
- (void)inputViewWillChange;	// 0x3537fd99
// declared property getter: - (BOOL)isScrolling;	// 0x35380675
- (CGPoint)magnifierPoint;	// 0x35380241
// declared property getter: - (BOOL)magnifying;	// 0x35380645
// declared property getter: - (int)mode;	// 0x351b9bb5
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x3537fe89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x3537e32d
- (void)prepareForMagnification;	// 0x3537fb81
// declared property getter: - (id)rects;	// 0x3537f1fd
- (void)removeFromSuperview;	// 0x351c17f1
// declared property getter: - (BOOL)rotating;	// 0x353806a5
- (void)scaleDidChange;	// 0x3537fcf1
- (void)scaleWillChange;	// 0x3537fcc1
// declared property getter: - (BOOL)scaling;	// 0x35380685
- (void)selectionAnimationDidStop:(id)selectionAnimation finished:(id)finished;	// 0x3537fb39
// declared property getter: - (id)selectionView;	// 0x3537f1ed
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x35380405
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x35380615
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x35380439
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x3538049d
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x35380635
- (void)setEnclosingScrollViewsEnabled:(BOOL)enabled;	// 0x353803c5
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x35380465
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x353805e1
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x353804cd
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x353805a9
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x351c19b1
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x353804fd
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x35380551
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x3538052d
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x353806d5
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x351c19a1
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x35380655
// declared property setter: - (void)setMode:(int)mode;	// 0x351b92b5
// declared property setter: - (void)setRects:(id)rects;	// 0x3537f20d
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x353806b5
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x35380695
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x35380449
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x353805bd
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x3538057d
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x3537fee1
- (void)startAnimating;	// 0x3537fdf9
// declared property getter: - (CGRect)startEdge;	// 0x351ba63d
// declared property getter: - (id)startGrabber;	// 0x351c193d
- (void)stopAnimating;	// 0x3537fe41
// declared property getter: - (CGPoint)touchOffset;	// 0x35380561
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3537e3e1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3537f0fd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3537ed55
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3537e971
- (void)updateBaseAndExtentPointsFromEdges;	// 0x35380109
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x3537f631
- (void)updateDots;	// 0x351d1269
- (void)updateGrabbers;	// 0x351b97b5
- (void)updateRectViews;	// 0x351b9321
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x3537f545
- (void)updateSelectionWithPoint:(CGPoint)point;	// 0x3537f3dd
- (void)updateWithMagnifierTerminalPoint:(BOOL)magnifierTerminalPoint;	// 0x3537f729
- (void)willRotate;	// 0x3537fd21
- (void)willScroll;	// 0x3537fc61
@end
