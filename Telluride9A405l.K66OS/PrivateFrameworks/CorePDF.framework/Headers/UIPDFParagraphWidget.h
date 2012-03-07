/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "UIPDFSelectionWidget.h"

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget> {
	CAShapeLayer *_trackingBorder;	// 4 = 0x4
	CGRect _initialRect;	// 8 = 0x8
	BOOL _tracking;	// 24 = 0x18
	CGRect _currentTrackingRect;	// 28 = 0x1c
	CALayer *_leftGrabber;	// 44 = 0x2c
	CALayer *_rightGrabber;	// 48 = 0x30
	CALayer *_topGrabber;	// 52 = 0x34
	CALayer *_bottomGrabber;	// 56 = 0x38
	CALayer *_selectedGrabber;	// 60 = 0x3c
	CGRect _boundsInPDFSpace;	// 64 = 0x40
	UIPDFPageView *_pageView;	// 80 = 0x50
	CGPoint _initialSelectionPointOnPage;	// 84 = 0x54
}
@property(readonly, assign, nonatomic) CGPoint currentSelectionPointOnPage;	// G=0x31f85dd5; 
@property(readonly, assign, nonatomic) CGPoint initialSelectionPointOnPage;	// G=0x31f85ded; @synthesize=_initialSelectionPointOnPage
@property(assign, nonatomic) UIPDFPageView *pageView;	// G=0x31f85e05; S=0x31f85e15; @synthesize=_pageView
- (id)init;	// 0x31f8778d
- (CGRect)adjustRect:(CGRect)rect toPoint:(CGPoint)point;	// 0x31f86641
// declared property getter: - (CGPoint)currentSelectionPointOnPage;	// 0x31f85dd5
- (void)dealloc;	// 0x31f85ec1
- (void)endTracking;	// 0x31f8600d
- (void)hide;	// 0x31f85f01
- (BOOL)hitTest:(CGPoint)test fixedPoint:(CGPoint *)point preceeds:(BOOL *)preceeds;	// 0x31f86bc9
// declared property getter: - (CGPoint)initialSelectionPointOnPage;	// 0x31f85ded
- (void)layout;	// 0x31f86731
// declared property getter: - (id)pageView;	// 0x31f85e05
- (void)remove;	// 0x31f870dd
- (CGPoint)selectedPointFor:(CGPoint)aFor;	// 0x31f85db1
- (CGRect)selectionBoundsInEffectsSpace;	// 0x31f8767d
- (CGRect)selectionRectangle;	// 0x31f85fb1
// declared property setter: - (void)setPageView:(id)view;	// 0x31f85e15
- (void)setSelectedGrabber:(unsigned)grabber;	// 0x31f85dd1
- (void)setSelectedGrabberPosition:(CGRect)position;	// 0x31f86541
- (void)setSelection:(id)selection;	// 0x31f8717d
- (void)track:(CGPoint)track;	// 0x31f86105
- (CGPoint)viewOffset;	// 0x31f85db9
@end
