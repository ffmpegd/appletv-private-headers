/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIView.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class NSMutableArray, NSArray, TPBottomBar, NSObject, TPBottomGrabberLockBar, UITableView;
@protocol TPIncomingCallOptionsViewDelegate, TPBottomGrabberBar;

@interface TPIncomingCallOptionsView : UIView <UITableViewDelegate, UITableViewDataSource> {
	TPBottomGrabberLockBar *_lockBar;	// 84 = 0x54
	TPBottomBar<TPBottomGrabberBar> *_grabberBar;	// 88 = 0x58
	TPBottomBar<TPBottomGrabberBar> *_displayedGrabberBar;	// 92 = 0x5c
	UITableView *_optionsView;	// 96 = 0x60
	UIView *_footerView;	// 100 = 0x64
	UIView *_headerView;	// 104 = 0x68
	NSMutableArray *_buttons;	// 108 = 0x6c
	BOOL _usesLockBar;	// 112 = 0x70
	int _viewType;	// 116 = 0x74
	BOOL _optionsShown;	// 120 = 0x78
	BOOL _scrolling;	// 121 = 0x79
	NSArray *_lockBarGrabberGestureRecognizers;	// 124 = 0x7c
	NSArray *_doubleButtonBarGrabberGestureRecognizers;	// 128 = 0x80
	CGPoint _gestureInitialTouchPoint;	// 132 = 0x84
	CGPoint _gestureLastTouchPoint;	// 140 = 0x8c
	CGPoint _gestureVelocity;	// 148 = 0x94
	float _maxImageWidth;	// 156 = 0x9c
	float _maxImageHeight;	// 160 = 0xa0
	float _buttonContentInset;	// 164 = 0xa4
	NSObject<TPIncomingCallOptionsViewDelegate> *_incomingOptionsDelegate;	// 168 = 0xa8
}
@property(readonly, assign) BOOL hasGrabberImage;	// G=0x355e5f85; 
@property(assign, nonatomic) NSObject<TPIncomingCallOptionsViewDelegate> *incomingOptionsDelegate;	// G=0x355e5f31; S=0x355e5cf5; @synthesize=_incomingOptionsDelegate
@property(assign, nonatomic) BOOL optionsShown;	// G=0x355e7599; S=0x355e607d; @synthesize=_optionsShown
@property(readonly, assign) BOOL scrolling;	// G=0x355e7055; converted property
@property(assign, nonatomic) BOOL usesLockBar;	// G=0x355e7589; S=0x355e6051; @synthesize=_usesLockBar
- (id)initForIncomingCallWaitingWithFrame:(CGRect)frame;	// 0x355e5b09
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x355e5add
- (id)initForIncomingFaceTimeWithFrame:(CGRect)frame;	// 0x355e5b35
- (id)initWithFrame:(CGRect)frame;	// 0x355e5b61
- (void)_accept;	// 0x355e6319
- (void)_buttonClicked:(id)clicked;	// 0x355e61ed
- (void)_decline;	// 0x355e62e9
- (id)_initForType:(int)type frame:(CGRect)frame;	// 0x355e54c9
- (void)_singleButtonClicked;	// 0x355e6349
- (float)barHeight;	// 0x355e6f11
- (void)dealloc;	// 0x355e5bdd
- (id)displayedGrabberBar;	// 0x355e700d
// declared property getter: - (BOOL)hasGrabberImage;	// 0x355e5f85
// declared property getter: - (id)incomingOptionsDelegate;	// 0x355e5f31
- (void)layoutSubviews;	// 0x355e6c45
- (void)lockBarUnlocked:(id)unlocked;	// 0x355e61bd
- (float)optionsHeight;	// 0x355e6f2d
// declared property getter: - (BOOL)optionsShown;	// 0x355e7599
- (id)recommendedBackgroundColor;	// 0x355e701d
- (void)reloadData;	// 0x355e6169
- (void)scrollViewDidBeginScrolling;	// 0x355e7289
- (void)scrollViewDidEndScrollingWithShownPixels:(float)scrollView;	// 0x355e72d1
- (void)scrollViewDidShowPixels:(float)scrollView;	// 0x355e7069
// converted property getter: - (BOOL)scrolling;	// 0x355e7055
- (void)setGrabberImage:(id)image;	// 0x355e5f41
// declared property setter: - (void)setIncomingOptionsDelegate:(id)delegate;	// 0x355e5cf5
- (void)setLockBarLabel:(id)label;	// 0x355e5fd1
// declared property setter: - (void)setOptionsShown:(BOOL)shown;	// 0x355e607d
// declared property setter: - (void)setUsesLockBar:(BOOL)bar;	// 0x355e6051
- (void)setWellAlpha:(float)alpha;	// 0x355e5ff1
- (void)start;	// 0x355e6189
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x355e63f1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x355e69a1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x355e6379
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x355e6905
- (void)tap:(id)tap;	// 0x355e69a5
// declared property getter: - (BOOL)usesLockBar;	// 0x355e7589
@end

