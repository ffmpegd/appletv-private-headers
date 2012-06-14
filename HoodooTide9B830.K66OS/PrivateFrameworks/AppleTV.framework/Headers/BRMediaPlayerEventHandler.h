/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRResponder.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class BRMediaPlayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerEventHandler : NSObject <BRResponder> {
@private
	BRMediaPlayer *_player;	// 4 = 0x4
	BOOL _waitingForUp;	// 8 = 0x8
	BOOL _inChapterSkipMode;	// 9 = 0x9
	double _virtualChapterMark;	// 12 = 0xc
	NSTimer *_chapterSelectionModeTimer;	// 20 = 0x14
	int _preShuttleState;	// 24 = 0x18
	long _shuttleSpeed;	// 28 = 0x1c
	int _shuttleDirection;	// 32 = 0x20
	BOOL _inShuttleMode;	// 36 = 0x24
	BOOL _readyToInitiateShuttle;	// 37 = 0x25
	NSTimer *_shuttleChapterSkipTimer;	// 40 = 0x28
	CGPoint _initialTouchPosition;	// 44 = 0x2c
	CGPoint _lastTouchPosition;	// 52 = 0x34
	CGPoint _lastTouchDelta;	// 60 = 0x3c
	double _shuttleFinishedTime;	// 68 = 0x44
}
+ (id)handlerWithPlayer:(id)player;	// 0x32a87841
- (id)initWithPlayer:(id)player;	// 0x32a87755
- (BOOL)_changePlayerStateTo:(int)to;	// 0x32a89c8d
- (BOOL)_changePlayerStateTo:(int)to onButtonDown:(id)down retrigger:(BOOL)retrigger;	// 0x32a89d29
- (BOOL)_chapterSkipSupported;	// 0x32a8a28d
- (BOOL)_chapteringSupported;	// 0x32a89fc1
- (BOOL)_defaultEventHandler:(id)handler;	// 0x32a87ad5
- (void)_endChapterSelectionMode:(id)mode;	// 0x32a893dd
- (void)_handleAccessibilityOutputForState:(int)state;	// 0x32a89a41
- (BOOL)_handleEventWhileChapterSelecting:(id)selecting;	// 0x32a8872d
- (BOOL)_handleEventWhileFF1:(id)a1;	// 0x32a88c6d
- (BOOL)_handleEventWhileFF2:(id)a2;	// 0x32a88cf9
- (BOOL)_handleEventWhileFF3:(id)a3;	// 0x32a88da1
- (BOOL)_handleEventWhileLoading:(id)loading;	// 0x32a88565
- (BOOL)_handleEventWhilePaused:(id)paused;	// 0x32a88475
- (BOOL)_handleEventWhilePlaying:(id)playing;	// 0x32a88b21
- (BOOL)_handleEventWhileREW1:(id)a1;	// 0x32a88e49
- (BOOL)_handleEventWhileREW2:(id)a2;	// 0x32a88ed5
- (BOOL)_handleEventWhileREW3:(id)a3;	// 0x32a88f7d
- (BOOL)_handleEventWhileSlowForward1:(id)a1;	// 0x32a89025
- (BOOL)_handleEventWhileSlowForward2:(id)a2;	// 0x32a890b1
- (BOOL)_handleEventWhileSlowForward3:(id)a3;	// 0x32a89159
- (BOOL)_handleEventWhileSlowRewind1:(id)a1;	// 0x32a89201
- (BOOL)_handleEventWhileSlowRewind2:(id)a2;	// 0x32a8928d
- (BOOL)_handleEventWhileSlowRewind3:(id)a3;	// 0x32a89335
- (BOOL)_handleForwardEvent:(id)event;	// 0x32a87c89
- (BOOL)_handleLeftEvent:(id)event;	// 0x32a881b9
- (BOOL)_handleLeftEventWhileChapterSkipping:(id)skipping;	// 0x32a883d9
- (BOOL)_handleRewindEvent:(id)event;	// 0x32a87e5d
- (BOOL)_handleRightEvent:(id)event;	// 0x32a88035
- (BOOL)_handleRightEventWhileChapterSkipping:(id)skipping;	// 0x32a8833d
- (BOOL)_handleTouchEvent:(id)event;	// 0x32a8a3d1
- (BOOL)_handleTouchMultiSwipeLeftEvent:(id)event;	// 0x32a8a829
- (BOOL)_handleTouchMultiSwipeRightEvent:(id)event;	// 0x32a8a7c5
- (BOOL)_handleTouchSwipeEvent:(id)event;	// 0x32a8a669
- (BOOL)_handleTouchSwipeLeftEvent:(id)event;	// 0x32a8a761
- (BOOL)_handleTouchSwipeRightEvent:(id)event;	// 0x32a8a6fd
- (BOOL)_handleTrickPlayWhileLoading:(id)loading;	// 0x32a886e1
- (void)_initiateShuttleAction;	// 0x32a8a915
- (BOOL)_isFavoriteRadioStation;	// 0x32a8a329
- (BOOL)_performNextThingButtonAction:(id)action;	// 0x32a89561
- (BOOL)_performPreviousThingButtonAction:(id)action;	// 0x32a89401
- (void)_performShuttle:(long)shuttle;	// 0x32a89e15
- (void)_performShuttleExit;	// 0x32a89da9
- (BOOL)_performSkipBackwardAction:(id)action;	// 0x32a89691
- (BOOL)_performSkipForwardAction:(id)action;	// 0x32a895d5
- (BOOL)_performVolumeDownAction:(id)action;	// 0x32a898d5
- (BOOL)_performVolumeUpAction:(id)action;	// 0x32a89769
- (void)_playSoundForState:(int)state;	// 0x32a89da5
- (void)_playerAssetChanged:(id)changed;	// 0x32a87a21
- (void)_playerStateChanged:(id)changed;	// 0x32a87a95
- (void)_setInChapterSkipMode:(BOOL)chapterSkipMode;	// 0x32a8a069
- (void)_setShuttleSpeed:(int)speed;	// 0x32a8a88d
- (void)_touchRepeatCancel;	// 0x32a8aa61
- (void)_touchRepeatEvent;	// 0x32a8aa91
- (BOOL)brEventAction:(id)action;	// 0x32a87909
- (BOOL)brKeyEvent:(id)event;	// 0x32a87a0d
- (void)dealloc;	// 0x32a8788d
- (BOOL)showingChapterMarks;	// 0x32a87a11
@end
