/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIView.h> // Unknown library
#import "TelephonyUI-Structs.h"
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
@property(readonly, assign) BOOL hasGrabberImage;	// G=0x3511ab75; 
@property(assign, nonatomic) NSObject<TPIncomingCallOptionsViewDelegate> *incomingOptionsDelegate;	// G=0x3511ab21; S=0x3511a8e5; @synthesize=_incomingOptionsDelegate
@property(assign, nonatomic) BOOL optionsShown;	// G=0x3511c171; S=0x3511ac6d; @synthesize=_optionsShown
@property(readonly, assign) BOOL scrolling;	// G=0x3511bc2d; converted property
@property(assign, nonatomic) BOOL usesLockBar;	// G=0x3511c161; S=0x3511ac41; @synthesize=_usesLockBar
- (id)initForIncomingCallWaitingWithFrame:(CGRect)frame;	// 0x3511a6f9
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x3511a6cd
- (id)initForIncomingFaceTimeWithFrame:(CGRect)frame;	// 0x3511a725
- (id)initWithFrame:(CGRect)frame;	// 0x3511a751
- (void)_accept;	// 0x3511af09
- (void)_buttonClicked:(id)clicked;	// 0x3511addd
- (void)_decline;	// 0x3511aed9
- (id)_initForType:(int)type frame:(CGRect)frame;	// 0x3511a0b9
- (void)_singleButtonClicked;	// 0x3511af39
- (float)barHeight;	// 0x3511bae9
- (void)dealloc;	// 0x3511a7cd
- (id)displayedGrabberBar;	// 0x3511bbe5
// declared property getter: - (BOOL)hasGrabberImage;	// 0x3511ab75
// declared property getter: - (id)incomingOptionsDelegate;	// 0x3511ab21
- (void)layoutSubviews;	// 0x3511b81d
- (void)lockBarUnlocked:(id)unlocked;	// 0x3511adad
- (float)optionsHeight;	// 0x3511bb05
// declared property getter: - (BOOL)optionsShown;	// 0x3511c171
- (id)recommendedBackgroundColor;	// 0x3511bbf5
- (void)reloadData;	// 0x3511ad59
- (void)scrollViewDidBeginScrolling;	// 0x3511be61
- (void)scrollViewDidEndScrollingWithShownPixels:(float)scrollView;	// 0x3511bea9
- (void)scrollViewDidShowPixels:(float)scrollView;	// 0x3511bc41
// converted property getter: - (BOOL)scrolling;	// 0x3511bc2d
- (void)setGrabberImage:(id)image;	// 0x3511ab31
// declared property setter: - (void)setIncomingOptionsDelegate:(id)delegate;	// 0x3511a8e5
- (void)setLockBarLabel:(id)label;	// 0x3511abc1
// declared property setter: - (void)setOptionsShown:(BOOL)shown;	// 0x3511ac6d
// declared property setter: - (void)setUsesLockBar:(BOOL)bar;	// 0x3511ac41
- (void)setWellAlpha:(float)alpha;	// 0x3511abe1
- (void)start;	// 0x3511ad79
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3511afe1
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3511b591
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3511af69
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x3511b4f5
- (void)tap:(id)tap;	// 0x3511b595
// declared property getter: - (BOOL)usesLockBar;	// 0x3511c161
@end

