/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWebTextRangeView, NSTimer, UIWebSelectionOutline, UIWebSelectionHandle, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionNode;

__attribute__((visibility("hidden")))
@interface UIWebSelectionView : UIView {
@private
	UIView *_center;	// 44 = 0x2c
	CGRect _selectionFrame;	// 48 = 0x30
	UIWebSelectionHandle *_top;	// 64 = 0x40
	UIWebSelectionHandle *_right;	// 68 = 0x44
	UIWebSelectionHandle *_bottom;	// 72 = 0x48
	UIWebSelectionHandle *_left;	// 76 = 0x4c
	UIWebSelectionOutline *_outline;	// 80 = 0x50
	UIWebTextRangeView *_textRangeView;	// 84 = 0x54
	UIWebDocumentView *_documentView;	// 88 = 0x58
	UIWebSelectionNode *_selectionNode;	// 92 = 0x5c
	UIWebSelectionGraph *_selectionGraph;	// 96 = 0x60
	float _growThreshold;	// 100 = 0x64
	float _shrinkThreshold;	// 104 = 0x68
	struct {
		UIWebSelectionHandle *scrollingHandle;
		double startTime;
		int direction;
		NSTimer *timer;
	} _autoscrollData;	// 108 = 0x6c
	struct {
		UIWebSelectionHandle *activeHandle;
		CGPoint handleCenterStart;
		float handleOffset;
	} _blockSelectionData;	// 128 = 0x80
	struct {
		UIWebSelectionHandle *start;
		UIWebSelectionHandle *end;
		CGSize startingOffset;
		BOOL anchorAtStart;
		struct {
			BOOL flipPossible;
			BOOL rectsChanged;
			CGRect originalSelectionRect;
		} flipData;
	} _rangedSelectionData;	// 144 = 0x90
	BOOL _creatingSelection;	// 184 = 0xb8
	int _nestedLayoutCalls;	// 188 = 0xbc
	BOOL _calloutBarIsHideBeforeRotation;	// 192 = 0xc0
	BOOL _rotating;	// 193 = 0xc1
}
@property(readonly, assign, nonatomic) UIWebSelection *selection;	// G=0x302d3485; 
@property(assign, nonatomic) CGRect selectionFrame;	// G=0x302d2fad; S=0x30185131; 
@property(retain, nonatomic) UIWebSelectionNode *selectionNode;	// G=0x30185121; S=0x302d5ebd; @synthesize=_selectionNode
- (id)initWithWebDocumentView:(id)webDocumentView;	// 0x300fd8fd
- (void)_didScroll;	// 0x302d383d
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x302d2fc9
- (id)activeHandle;	// 0x302d47c5
- (BOOL)activelyManipulatingBlockSelectionHandle;	// 0x302d3411
- (BOOL)activelyManipulatingTextSelectionHandle;	// 0x302d344d
- (void)animateSloppyReleaseOfHandleInText:(id)text withMagnifier:(id)magnifier;	// 0x302d5a49
- (int)autoscrollDirectionsForHandle:(id)handle;	// 0x302d6135
- (void)autoscrollTimerFired:(id)fired;	// 0x302d5be1
- (void)calloutBar:(id)bar selectedCommand:(id)command;	// 0x302d3c25
- (BOOL)canFlip;	// 0x302d59c5
- (void)clearSelection;	// 0x3018507d
- (void)computeExpandAndContractThresholdsForActiveHandle;	// 0x302d62d9
- (void)considerFlipping;	// 0x302d591d
- (void)contractForActiveHandle;	// 0x302d67b9
- (void)dealloc;	// 0x302d3d81
- (CGRect)desiredBox;	// 0x302d7119
- (void)endSelectionCreationWithPoint:(CGPoint)point;	// 0x302d409d
- (void)expandForActiveHandle;	// 0x302d6849
- (id)handleWithPosition:(int)position;	// 0x300fddcd
- (id)handles;	// 0x302d3a41
- (void)hideControls;	// 0x30185049
- (void)hideControlsBeforeRotation;	// 0x302d3b61
- (void)hideCopyCallout;	// 0x3018505d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x302d3d49
- (void)layoutChanged;	// 0x300ff47d
- (id)nodeInPristineGraphAtPoint:(CGPoint)point;	// 0x302d35e5
- (void)removeFromSuperview;	// 0x3017fced
- (void)resetSelection;	// 0x302d515d
- (void)scaleChanged;	// 0x302d3fe1
// declared property getter: - (id)selection;	// 0x302d3485
- (void)selectionChanged;	// 0x302d36a5
// declared property getter: - (CGRect)selectionFrame;	// 0x302d2fad
// declared property getter: - (id)selectionNode;	// 0x30185121
- (void)setHandleCenters;	// 0x301851d5
// declared property setter: - (void)setSelectionFrame:(CGRect)frame;	// 0x30185131
- (void)setSelectionFrame:(CGRect)frame animated:(BOOL)animated;	// 0x302d3ab1
// declared property setter: - (void)setSelectionNode:(id)node;	// 0x302d5ebd
- (void)shiftWebRangeSelectionAnimationDidStop:(id)shiftWebRangeSelectionAnimation finished:(id)finished;	// 0x302d37b1
- (BOOL)shouldContractForActiveHandle;	// 0x302d3879
- (BOOL)shouldExpandForActiveHandle;	// 0x302d395d
- (BOOL)shouldSwitchToBlockModeForHandle:(id)handle;	// 0x302d6015
- (void)showControls;	// 0x302d5579
- (void)showControlsAfterRotation;	// 0x302d3be5
- (void)showCopyCallout;	// 0x302d68d9
- (void)startSelectionCreationWithPoint:(CGPoint)point;	// 0x302d487d
- (void)stopAnyAutoscrolling;	// 0x302d37c5
- (void)switchToBlockModeForHandle:(id)handle;	// 0x302d4669
- (void)switchToTextModeForHandle:(id)handle;	// 0x302d4391
- (id)tintView;	// 0x300fdacd
- (void)touchChanged:(id)changed forHandle:(id)handle;	// 0x302d4b01
- (void)touchChanged:(id)changed forHandleInText:(id)text;	// 0x302d6d55
- (void)updateAutoscrollForHandle:(id)handle;	// 0x302d5d8d
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;	// 0x302d57a5
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;	// 0x302d3369
- (void)updateFrameAndHandles;	// 0x302d5291
- (void)updateSelectionCreationWithPoint:(CGPoint)point;	// 0x302d34a9
- (void)updateSelectionRects;	// 0x302d3721
@end
