/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIViewController.h> // Unknown library
#import "MPAVControllerNode.h"

@class NSTimer, MPTransitionController, MPAVItem, MPAVController;

@interface MPViewController : UIViewController <MPAVControllerNode> {
	id _delegate;	// 156 = 0x9c
	NSTimer *_idleTimerDisablerTimer;	// 160 = 0xa0
	int _interfaceOrientation;	// 164 = 0xa4
	MPAVItem *_item;	// 168 = 0xa8
	MPAVController *_player;	// 172 = 0xac
	MPViewController *_pushedViewController;	// 176 = 0xb0
	MPTransitionController *_pushedTransitionController;	// 180 = 0xb4
	id _popViewControllerHandler;	// 184 = 0xb8
	unsigned _appearing : 1;	// 188 = 0xbc
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;	// 188 = 0xbc
	unsigned _showOverlayWhileAppearingDisabled : 1;	// 188 = 0xbc
	int _playerLockedCount;	// 192 = 0xc0
}
@property(assign, getter=isAppearing) BOOL appearing;	// G=0x35b64e35; S=0x35b65435; converted property
@property(assign, nonatomic) id delegate;	// G=0x35b65729; S=0x35b65719; 
@property(assign, nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;	// G=0x35b6541d; S=0x35b65599; 
@property(retain, nonatomic) MPAVItem *item;	// G=0x35b65af5; S=0x35b65b05; @synthesize=_item
@property(assign, nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;	// G=0x35b64e71; S=0x35b64e85; 
@property(assign, nonatomic) int orientation;	// G=0x35b65b29; S=0x35b65679; @synthesize=_interfaceOrientation
@property(retain, nonatomic) MPAVController *player;	// G=0x35b65ae5; S=0x35b65481; @synthesize=_player
@property(copy, nonatomic) id popViewControllerHandler;	// G=0x35b65271; S=0x35b65b39; @synthesize=_popViewControllerHandler
- (id)init;	// 0x35b64b01
- (BOOL)_canReloadView;	// 0x35b65a2d
- (void)_disableIdleTimer:(id)timer;	// 0x35b65419
- (void)_popTransitionEnded:(id)ended;	// 0x35b65a31
- (void)_pushTransitionEnded:(id)ended;	// 0x35b65ac5
- (void)addChildViewController:(id)controller;	// 0x35b658c5
- (void)applicationDidResumeEventsOnly;	// 0x35b64e61
- (void)applicationDidSuspendEventsOnly;	// 0x35b64e51
- (void)beginIgnoringChangeTypes:(unsigned)types;	// 0x35b64cbd
- (void)beginTransitionOverlayHidding;	// 0x35b64d61
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x35b64d59
- (void)clearWeakReferencesToObject:(id)object;	// 0x35b656cd
- (id)copyOverlayViewForTransitionToItem:(id)item;	// 0x35b64d5d
- (void)dealloc;	// 0x35b64b69
// declared property getter: - (id)delegate;	// 0x35b65729
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35b64d91
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)interfaceOrientation;	// 0x35b64d95
- (void)endIgnoringChangeTypes:(unsigned)types;	// 0x35b64d99
- (void)endTransitionOverlayHiddingWithTransferedOverlayView:(id)transferedOverlayView;	// 0x35b64d79
// declared property getter: - (BOOL)idleTimerDisabled;	// 0x35b6541d
// converted property getter: - (BOOL)isAppearing;	// 0x35b64e35
// declared property getter: - (id)item;	// 0x35b65af5
- (void)lockPlayer;	// 0x35b65459
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x35b64fa5
// declared property getter: - (BOOL)observesApplicationSuspendResumeEventsOnly;	// 0x35b64e71
// declared property getter: - (int)orientation;	// 0x35b65b29
// declared property getter: - (id)player;	// 0x35b65ae5
- (id)popViewControllerAnimated:(BOOL)animated;	// 0x35b65175
// declared property getter: - (id)popViewControllerHandler;	// 0x35b65271
- (void)pushViewController:(id)controller withTransition:(id)transition;	// 0x35b64fa9
- (void)removeChildViewController:(id)controller;	// 0x35b65979
// converted property setter: - (void)setAppearing:(BOOL)appearing;	// 0x35b65435
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35b65719
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x35b65599
// declared property setter: - (void)setItem:(id)item;	// 0x35b65b05
// declared property setter: - (void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)only;	// 0x35b64e85
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x35b65679
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x35b6568d
// declared property setter: - (void)setPlayer:(id)player;	// 0x35b65481
// declared property setter: - (void)setPopViewControllerHandler:(id)handler;	// 0x35b65b39
- (void)setView:(id)view;	// 0x35b65739
- (void)startTicking;	// 0x35b64e49
- (void)stopTicking;	// 0x35b64e4d
- (void)unlockPlayer;	// 0x35b6546d
- (void)viewDidAppear:(BOOL)view;	// 0x35b6579d
- (void)viewDidDisappear:(BOOL)view;	// 0x35b6587d
- (void)viewWillAppear:(BOOL)view;	// 0x35b657e1
- (void)viewWillDisappear:(BOOL)view;	// 0x35b65825
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x35b65415
@end

