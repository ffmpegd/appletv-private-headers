/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BKSWorkspaceDelegate.h"
#import "AppleTV-Structs.h"

@class NSTimer, NSMutableArray, NSMutableDictionary, BRKeyEventData, BKSWorkspace, BREvent;
@protocol BRResponder;

__attribute__((visibility("hidden")))
@interface BRApplication : XXUnknownSuperclass <BKSWorkspaceDelegate> {
	BREvent *_currentEvent;	// 104 = 0x68
	NSTimer *_retriggerTimer;	// 108 = 0x6c
	NSMutableArray *_eventQueue;	// 112 = 0x70
	void *_autoreleasePoolMark;	// 116 = 0x74
	CFRunLoopSourceRef _source;	// 120 = 0x78
	CFRunLoopRef _mainRunLoop;	// 124 = 0x7c
	double _flushBeforeTimeStamp;	// 128 = 0x80
	long _retriggerCount;	// 136 = 0x88
	double _nextRetriggerDelay;	// 140 = 0x8c
	BOOL _handlingEvent;	// 148 = 0x94
	BOOL _isInModalLoop;	// 149 = 0x95
	BOOL _eventsBlocked;	// 150 = 0x96
	BOOL _isTerminating;	// 151 = 0x97
	double _startingTimeOfRepeatEvent;	// 152 = 0x98
	double _lastTimeRepeatEventSent;	// 160 = 0xa0
	int _repeatingEventValue;	// 168 = 0xa8
	BOOL _repeatEventProcessedFully;	// 172 = 0xac
	BRKeyEventData *_previousKeyEventPossiblyRepeating;	// 176 = 0xb0
	BOOL _previousKeyEventWasCleared;	// 180 = 0xb4
	BKSWorkspace *_workspace;	// 184 = 0xb8
	NSMutableDictionary *_launchedAppInfo;	// 188 = 0xbc
	NSTimer *_activityHoldTimer;	// 192 = 0xc0
	id<BRResponder> _firstResponder;	// 196 = 0xc4
	BOOL _wantsSpaceCharacters;	// 200 = 0xc8
}
@property(readonly, retain) BREvent *currentEvent;	// G=0x36fca5; converted property
@property(assign) id<BRResponder> firstResponder;	// G=0x370ec5; S=0x370ed9; @synthesize=_firstResponder
@property(assign) BOOL isInModalLoop;	// G=0x370951; S=0x370941; converted property
@property(readonly, assign) BOOL isTerminating;	// G=0x36fbf1; converted property
@property(readonly, assign) double nextRetriggerDelay;	// G=0x370bd5; converted property
@property(readonly, assign) long retriggerCount;	// G=0x370bc5; converted property
@property(assign, nonatomic) BOOL wantsSpaceCharacters;	// G=0x370ef1; S=0x370f01; @synthesize=_wantsSpaceCharacters
+ (void)_startStatusBarServerIfNecessary;	// 0x36faf5
+ (id)arrayByFilteringWordsInSet:(id)set fromArray:(id)array;	// 0x410dc9
+ (id)labelNoiseWords;	// 0x410bbd
+ (BOOL)registerAsSystemApp;	// 0x36faf9
+ (id)sharedApplication;	// 0x36f8a1
+ (id)substringStartingAtFirstNonNoiseWordFromString:(id)string;	// 0x410c61
- (id)init;	// 0x36f8cd
- (BOOL)_accessibilityIsSystemAppServer;	// 0x292221
- (id)_accessibilityResponderElement;	// 0x3716dd
- (void)_activityHoldTimerFired;	// 0x3716f9
- (void)_blockEvents;	// 0x370f11
- (id)_controlWithAccessibilityName:(id)accessibilityName inControl:(id)control matchedTerms:(unsigned *)terms prefixWins:(BOOL)wins useFocusProximity:(BOOL)proximity;	// 0x410e85
- (id)_decodeKeyUIEvent:(id)event simulatedEventType:(int)type simulatedKey:(unsigned short)key;	// 0x40fba1
- (void)_disposeWorkspace;	// 0x3715d5
- (void)_drainRunLoopPool;	// 0x371409
- (void)_dumpAccessibilityTags:(unsigned)tags;	// 0x4127e5
- (void)_dumpBindingInfo:(unsigned)info;	// 0x412a8d
- (void)_dumpControl:(id)control levelsDeep:(unsigned)deep usingBlock:(id)block;	// 0x41265d
- (void)_dumpControlGeometry:(unsigned)geometry;	// 0x412b95
- (void)_dumpStackGeometry:(unsigned)geometry;	// 0x412c39
- (id)_getWorkspaceCreatingIfNeeded:(BOOL)needed;	// 0x3714bd
- (void)_handler;	// 0x370f59
- (BOOL)_processForTypeahead:(id)typeahead wasHandledAlready:(BOOL)already;	// 0x40ff95
- (void)_processPotentialDebuggingHook:(unsigned)hook;	// 0x4125fd
- (void)_retriggerEvent:(id)event;	// 0x371461
- (void)_unblockEvents;	// 0x370f25
- (void)activateApplicationWithIdentifier:(id)identifier;	// 0x370bed
- (id)brApplicationDelegate;	// 0x36fafd
- (void)cancelRetriggerCurrentEvent;	// 0x370a81
- (id)controlWithName:(id)name prefixMatch:(BOOL)match useFocusProximity:(BOOL)proximity;	// 0x411909
// converted property getter: - (id)currentEvent;	// 0x36fca5
- (void)dealloc;	// 0x36fa91
- (void)dispatchEventOnEventThread:(id)thread;	// 0x370815
- (void)emptyQueue;	// 0x370845
- (BOOL)findAndSelectControlWithAccessibilityTag:(id)accessibilityTag;	// 0x411bb9
// declared property getter: - (id)firstResponder;	// 0x370ec5
- (BOOL)focusControl:(id)control;	// 0x411a21
// converted property getter: - (BOOL)isInModalLoop;	// 0x370951
// converted property getter: - (BOOL)isTerminating;	// 0x36fbf1
// converted property getter: - (double)nextRetriggerDelay;	// 0x370bd5
- (void)postEvent:(id)event;	// 0x3706ad
- (void)restart;	// 0x36fc01
// converted property getter: - (long)retriggerCount;	// 0x370bc5
- (void)retriggerCurrentEvent;	// 0x370961
- (void)retriggerCurrentEventAfterDelay:(double)delay;	// 0x3709e5
- (void)retriggerCurrentEventWithDecreasingDelay;	// 0x370979
- (void)sendEvent:(id)event;	// 0x36fcb5
// declared property setter: - (void)setFirstResponder:(id)responder;	// 0x370ed9
// converted property setter: - (void)setIsInModalLoop:(BOOL)modalLoop;	// 0x370941
// declared property setter: - (void)setWantsSpaceCharacters:(BOOL)characters;	// 0x370f01
- (void)terminate;	// 0x36fb0d
// declared property getter: - (BOOL)wantsSpaceCharacters;	// 0x370ef1
- (void)workspace:(id)workspace applicationActivated:(id)activated;	// 0x370d65
- (void)workspace:(id)workspace applicationDebugStateChanged:(id)changed newState:(BOOL)state;	// 0x370ec1
- (void)workspace:(id)workspace applicationDidBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x370c21
- (void)workspace:(id)workspace applicationDidFailToActivate:(id)application;	// 0x370d69
- (void)workspace:(id)workspace applicationDidFailToLaunch:(id)application;	// 0x370d61
- (void)workspace:(id)workspace applicationDidFinishLaunching:(id)application withInfo:(id)info;	// 0x370c41
- (void)workspace:(id)workspace applicationDidRemainReceiver:(id)application fromApplication:(id)application3;	// 0x370c25
- (void)workspace:(id)workspace applicationDidStartLaunching:(id)application;	// 0x370c39
- (void)workspace:(id)workspace applicationExited:(id)exited withInfo:(id)info;	// 0x370d71
- (void)workspace:(id)workspace applicationSuspended:(id)suspended withSettings:(id)settings;	// 0x370d6d
- (void)workspace:(id)workspace applicationSuspensionSettingsUpdated:(id)updated withSettings:(id)settings;	// 0x370eb5
- (id)workspace:(id)workspace applicationWillBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x370c1d
- (void)workspace:(id)workspace handleOpenURL:(id)url fromApplication:(id)application;	// 0x370eb9
- (void)workspace:(id)workspace handleStatusBarReturnActionFromApplication:(id)application statusBarStyle:(id)style;	// 0x370ebd
- (void)workspaceDidResume:(id)workspace;	// 0x370c35
- (void)workspaceDidSuspend:(id)workspace;	// 0x370c2d
- (void)workspaceWillResume:(id)workspace;	// 0x370c31
- (void)workspaceWillSuspend:(id)workspace;	// 0x370c29
@end
