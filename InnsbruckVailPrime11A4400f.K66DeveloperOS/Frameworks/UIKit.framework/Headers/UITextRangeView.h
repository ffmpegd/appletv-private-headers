/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UITouch, NSMutableArray, UITextSelectionView, NSArray, UISelectionGrabber;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextRangeView : UIView {
	UITextSelectionView *m_selectionView;	// 96 = 0x60
	UIResponder<UITextInput> *m_container;	// 100 = 0x64
	int m_mode;	// 104 = 0x68
	NSArray *m_rects;	// 108 = 0x6c
	NSMutableArray *m_rectViews;	// 112 = 0x70
	UITouch *m_activeTouch;	// 116 = 0x74
	CGRect m_startEdge;	// 120 = 0x78
	CGRect m_endEdge;	// 136 = 0x88
	CGPoint m_basePoint;	// 152 = 0x98
	CGPoint m_extentPoint;	// 160 = 0xa0
	CGPoint m_initialBasePoint;	// 168 = 0xa8
	CGPoint m_initialExtentPoint;	// 176 = 0xb0
	float m_initialDistance;	// 184 = 0xb8
	CGPoint m_touchOffset;	// 188 = 0xbc
	double m_firstMovedTime;	// 196 = 0xc4
	UISelectionGrabber *m_startGrabber;	// 204 = 0xcc
	UISelectionGrabber *m_endGrabber;	// 208 = 0xd0
	BOOL m_animateUpdate;	// 212 = 0xd4
	BOOL m_baseIsStart;	// 213 = 0xd5
	BOOL m_commandsWereShowing;	// 214 = 0xd6
	BOOL m_inGesture;	// 215 = 0xd7
	BOOL m_magnifying;	// 216 = 0xd8
	BOOL m_scrolling;	// 217 = 0xd9
	BOOL m_scaling;	// 218 = 0xda
	BOOL m_rotating;	// 219 = 0xdb
	BOOL m_inputViewIsChanging;	// 220 = 0xdc
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x2f4ea465; S=0x2f731e9d; @synthesize=m_activeTouch
@property(assign, nonatomic) BOOL animateUpdate;	// G=0x2f731fe5; S=0x2f731ff5; @synthesize=m_animateUpdate
@property(readonly, assign, nonatomic) BOOL autoscrolled;	// G=0x2f731a89; 
@property(assign, nonatomic) BOOL baseIsStart;	// G=0x2f571c85; S=0x2f731ead; @synthesize=m_baseIsStart
@property(assign, nonatomic) CGPoint basePoint;	// G=0x2f731ebd; S=0x2f571cb5; @synthesize=m_basePoint
@property(assign, nonatomic) BOOL commandsWereShowing;	// G=0x2f732005; S=0x2f732015; @synthesize=m_commandsWereShowing
@property(readonly, assign, nonatomic) UIResponder<UITextInput> *container;	// G=0x2f4e5395; 
@property(assign, nonatomic) CGRect endEdge;	// G=0x2f571c99; S=0x2f571b09; @synthesize=m_endEdge
@property(retain, nonatomic) UISelectionGrabber *endGrabber;	// G=0x2f4ea4ad; S=0x2f731fd5; @synthesize=m_endGrabber
@property(assign, nonatomic) CGPoint extentPoint;	// G=0x2f731ed9; S=0x2f571ce9; @synthesize=m_extentPoint
@property(assign, nonatomic) double firstMovedTime;	// G=0x2f731f99; S=0x2f731fb1; @synthesize=m_firstMovedTime
@property(assign, nonatomic) BOOL inGesture;	// G=0x2f732045; S=0x2f4ea4cd; @synthesize=m_inGesture
@property(assign, nonatomic) CGPoint initialBasePoint;	// G=0x2f731ef5; S=0x2f731f0d; @synthesize=m_initialBasePoint
@property(assign, nonatomic) float initialDistance;	// G=0x2f731f4d; S=0x2f731f5d; @synthesize=m_initialDistance
@property(assign, nonatomic) CGPoint initialExtentPoint;	// G=0x2f731f21; S=0x2f731f39; @synthesize=m_initialExtentPoint
@property(assign, nonatomic) BOOL inputViewIsChanging;	// G=0x2f7320a5; S=0x2f7320b5; @synthesize=m_inputViewIsChanging
@property(assign, nonatomic) BOOL isScrolling;	// G=0x2f732055; S=0x2f4ea4bd; @synthesize=m_scrolling
@property(assign, nonatomic) BOOL magnifying;	// G=0x2f732025; S=0x2f732035; @synthesize=m_magnifying
@property(assign, nonatomic) int mode;	// G=0x2f4e5bfd; S=0x2f4e4e61; @synthesize=m_mode
@property(retain, nonatomic) NSArray *rects;	// G=0x2f4e5c0d; S=0x2f57123d; @synthesize=m_rects
@property(assign, nonatomic) BOOL rotating;	// G=0x2f732085; S=0x2f732095; @synthesize=m_rotating
@property(assign, nonatomic) BOOL scaling;	// G=0x2f732065; S=0x2f732075; @synthesize=m_scaling
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x2f572e0d; 
@property(assign, nonatomic) CGRect startEdge;	// G=0x2f571ccd; S=0x2f5718ad; @synthesize=m_startEdge
@property(retain, nonatomic) UISelectionGrabber *startGrabber;	// G=0x2f4ea49d; S=0x2f731fc5; @synthesize=m_startGrabber
@property(assign, nonatomic) CGPoint touchOffset;	// G=0x2f731f6d; S=0x2f731f85; @synthesize=m_touchOffset
- (id)initWithFrame:(CGRect)frame selectionView:(id)view;	// 0x2f4e4d41
- (BOOL)_endIsHorizontal;	// 0x2f571d71
- (CGRect)_selectionClipRect;	// 0x2f4e53a5
- (BOOL)_startIsHorizontal;	// 0x2f571d01
// declared property getter: - (id)activeTouch;	// 0x2f4ea465
// declared property getter: - (BOOL)animateUpdate;	// 0x2f731fe5
- (CGPoint)applyTouchOffset:(CGPoint)offset;	// 0x2f731a05
// declared property getter: - (BOOL)autoscrolled;	// 0x2f731a89
// declared property getter: - (BOOL)baseIsStart;	// 0x2f571c85
// declared property getter: - (CGPoint)basePoint;	// 0x2f731ebd
- (void)beginMagnifying;	// 0x2f731abd
- (void)cancelDelayedActions;	// 0x2f4ea479
// declared property getter: - (BOOL)commandsWereShowing;	// 0x2f732005
// declared property getter: - (id)container;	// 0x2f4e5395
- (CGPoint)convertFromMagnifierPoint:(CGPoint)magnifierPoint;	// 0x2f731e19
- (void)dealloc;	// 0x2f4f0691
- (void)didRotate;	// 0x2f7317f9
- (void)didScroll;	// 0x2f731739
- (void)doneMagnifying;	// 0x2f731699
// declared property getter: - (CGRect)endEdge;	// 0x2f571c99
// declared property getter: - (id)endGrabber;	// 0x2f4ea4ad
// declared property getter: - (CGPoint)extentPoint;	// 0x2f731ed9
// declared property getter: - (double)firstMovedTime;	// 0x2f731f99
// declared property getter: - (BOOL)inGesture;	// 0x2f732045
// declared property getter: - (CGPoint)initialBasePoint;	// 0x2f731ef5
// declared property getter: - (float)initialDistance;	// 0x2f731f4d
// declared property getter: - (CGPoint)initialExtentPoint;	// 0x2f731f21
- (void)inputViewDidChange;	// 0x2f731871
// declared property getter: - (BOOL)inputViewIsChanging;	// 0x2f7320a5
- (void)inputViewWillChange;	// 0x2f731841
// declared property getter: - (BOOL)isScrolling;	// 0x2f732055
- (CGPoint)magnifierPoint;	// 0x2f731bb1
// declared property getter: - (BOOL)magnifying;	// 0x2f732025
// declared property getter: - (int)mode;	// 0x2f4e5bfd
- (BOOL)pointCloserToEnd:(CGPoint)end startEdge:(CGRect)edge endEdge:(CGRect)edge3;	// 0x2f731939
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f7309b1
- (void)prepareForMagnification;	// 0x2f731629
// declared property getter: - (id)rects;	// 0x2f4e5c0d
- (void)removeFromSuperview;	// 0x2f4ea345
// declared property getter: - (BOOL)rotating;	// 0x2f732085
- (void)scaleDidChange;	// 0x2f731799
- (void)scaleWillChange;	// 0x2f731769
// declared property getter: - (BOOL)scaling;	// 0x2f732065
// declared property getter: - (id)selectionView;	// 0x2f572e0d
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x2f731e9d
// declared property setter: - (void)setAnimateUpdate:(BOOL)update;	// 0x2f731ff5
// declared property setter: - (void)setBaseIsStart:(BOOL)start;	// 0x2f731ead
// declared property setter: - (void)setBasePoint:(CGPoint)point;	// 0x2f571cb5
// declared property setter: - (void)setCommandsWereShowing:(BOOL)showing;	// 0x2f732015
// declared property setter: - (void)setEndEdge:(CGRect)edge;	// 0x2f571b09
// declared property setter: - (void)setEndGrabber:(id)grabber;	// 0x2f731fd5
// declared property setter: - (void)setExtentPoint:(CGPoint)point;	// 0x2f571ce9
// declared property setter: - (void)setFirstMovedTime:(double)time;	// 0x2f731fb1
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x2f4ea4cd
// declared property setter: - (void)setInitialBasePoint:(CGPoint)point;	// 0x2f731f0d
// declared property setter: - (void)setInitialDistance:(float)distance;	// 0x2f731f5d
// declared property setter: - (void)setInitialExtentPoint:(CGPoint)point;	// 0x2f731f39
// declared property setter: - (void)setInputViewIsChanging:(BOOL)changing;	// 0x2f7320b5
// declared property setter: - (void)setIsScrolling:(BOOL)scrolling;	// 0x2f4ea4bd
- (void)setMagnifierOrientation;	// 0x2f730a6d
// declared property setter: - (void)setMagnifying:(BOOL)magnifying;	// 0x2f732035
// declared property setter: - (void)setMode:(int)mode;	// 0x2f4e4e61
// declared property setter: - (void)setRects:(id)rects;	// 0x2f57123d
// declared property setter: - (void)setRotating:(BOOL)rotating;	// 0x2f732095
// declared property setter: - (void)setScaling:(BOOL)scaling;	// 0x2f732075
// declared property setter: - (void)setStartEdge:(CGRect)edge;	// 0x2f5718ad
// declared property setter: - (void)setStartGrabber:(id)grabber;	// 0x2f731fc5
// declared property setter: - (void)setTouchOffset:(CGPoint)offset;	// 0x2f731f85
- (void)setTouchOffset:(CGPoint)offset touchPoint:(CGPoint)point;	// 0x2f731991
- (void)startAnimating;	// 0x2f7318a1
// declared property getter: - (CGRect)startEdge;	// 0x2f571ccd
// declared property getter: - (id)startGrabber;	// 0x2f4ea49d
- (void)stopAnimating;	// 0x2f7318ed
// declared property getter: - (CGPoint)touchOffset;	// 0x2f731f6d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f730ae1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f7313fd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f7312fd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f730ff9
- (void)updateBaseAndExtentPointsFromEdges;	// 0x2f571b2d
- (void)updateBaseIsStartWithDocumentPoint:(CGPoint)documentPoint;	// 0x2f731521
- (void)updateDots;	// 0x2f4efa31
- (void)updateGrabbers;	// 0x2f4e5411
- (void)updateRectViews;	// 0x2f4e4ecd
- (void)updateSelectionWithDocumentPoint:(CGPoint)documentPoint;	// 0x2f7314e1
- (void)willRotate;	// 0x2f7317c9
- (void)willScroll;	// 0x2f731709
@end
