/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BKSWorkspaceDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, BKSWorkspace, BRKeyEventData, BREvent, NSTimer, NSMutableArray;
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
@property(readonly, retain) BREvent *currentEvent;	// G=0x3633ed; converted property
@property(assign) id<BRResponder> firstResponder;	// G=0x3645a9; S=0x3645bd; @synthesize=_firstResponder
@property(assign) BOOL isInModalLoop;	// G=0x364061; S=0x364051; converted property
@property(readonly, assign) BOOL isTerminating;	// G=0x363339; converted property
@property(readonly, assign) double nextRetriggerDelay;	// G=0x3642e5; converted property
@property(readonly, assign) long retriggerCount;	// G=0x3642d5; converted property
@property(assign, nonatomic) BOOL wantsSpaceCharacters;	// G=0x3645d5; S=0x3645e5; @synthesize=_wantsSpaceCharacters
+ (void)_startStatusBarServerIfNecessary;	// 0x36323d
+ (id)arrayByFilteringWordsInSet:(id)set fromArray:(id)array;	// 0x401edd
+ (id)labelNoiseWords;	// 0x401cd1
+ (BOOL)registerAsSystemApp;	// 0x363241
+ (id)sharedApplication;	// 0x362fe9
+ (id)substringStartingAtFirstNonNoiseWordFromString:(id)string;	// 0x401d75
- (id)init;	// 0x363015
- (BOOL)_accessibilityIsSystemAppServer;	// 0x287269
- (id)_accessibilityResponderElement;	// 0x364dc1
- (void)_activityHoldTimerFired;	// 0x364ddd
- (void)_blockEvents;	// 0x3645f5
- (id)_controlWithAccessibilityName:(id)accessibilityName inControl:(id)control matchedTerms:(unsigned *)terms prefixWins:(BOOL)wins useFocusProximity:(BOOL)proximity;	// 0x401f99
- (id)_decodeKeyUIEvent:(id)event;	// 0x400d0d
- (void)_disposeWorkspace;	// 0x364cb9
- (void)_drainRunLoopPool;	// 0x364aed
- (void)_dumpAccessibilityTags:(unsigned)tags;	// 0x4036d5
- (void)_dumpBindingInfo:(unsigned)info;	// 0x4038e1
- (void)_dumpControl:(id)control levelsDeep:(unsigned)deep usingBlock:(id)block;	// 0x40354d
- (void)_dumpControlGeometry:(unsigned)geometry;	// 0x4039e9
- (void)_dumpStackGeometry:(unsigned)geometry;	// 0x403a8d
- (id)_getWorkspaceCreatingIfNeeded:(BOOL)needed;	// 0x364ba1
- (void)_handler;	// 0x36463d
- (BOOL)_processForTypeahead:(id)typeahead wasHandledAlready:(BOOL)already;	// 0x4010e9
- (void)_processPotentialDebuggingHook:(unsigned)hook;	// 0x4034ed
- (void)_retriggerEvent:(id)event;	// 0x364b45
- (void)_unblockEvents;	// 0x364609
- (void)activateApplicationWithIdentifier:(id)identifier;	// 0x3642fd
- (id)brApplicationDelegate;	// 0x363245
- (void)cancelRetriggerCurrentEvent;	// 0x364191
- (id)controlWithName:(id)name prefixMatch:(BOOL)match useFocusProximity:(BOOL)proximity;	// 0x402911
// converted property getter: - (id)currentEvent;	// 0x3633ed
- (void)dealloc;	// 0x3631d9
- (void)dispatchEventOnEventThread:(id)thread;	// 0x363f25
- (void)emptyQueue;	// 0x363f55
// declared property getter: - (id)firstResponder;	// 0x3645a9
- (void)focusControl:(id)control;	// 0x402a29
// converted property getter: - (BOOL)isInModalLoop;	// 0x364061
// converted property getter: - (BOOL)isTerminating;	// 0x363339
// converted property getter: - (double)nextRetriggerDelay;	// 0x3642e5
- (void)postEvent:(id)event;	// 0x363dbd
- (void)restart;	// 0x363349
// converted property getter: - (long)retriggerCount;	// 0x3642d5
- (void)retriggerCurrentEvent;	// 0x364071
- (void)retriggerCurrentEventAfterDelay:(double)delay;	// 0x3640f5
- (void)retriggerCurrentEventWithDecreasingDelay;	// 0x364089
- (void)sendEvent:(id)event;	// 0x3633fd
// declared property setter: - (void)setFirstResponder:(id)responder;	// 0x3645bd
// converted property setter: - (void)setIsInModalLoop:(BOOL)modalLoop;	// 0x364051
// declared property setter: - (void)setWantsSpaceCharacters:(BOOL)characters;	// 0x3645e5
- (void)terminate;	// 0x363255
// declared property getter: - (BOOL)wantsSpaceCharacters;	// 0x3645d5
- (void)workspace:(id)workspace applicationActivated:(id)activated;	// 0x364475
- (void)workspace:(id)workspace applicationDebugStateChanged:(id)changed newState:(BOOL)state;	// 0x3645a5
- (void)workspace:(id)workspace applicationDidBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x364331
- (void)workspace:(id)workspace applicationDidFailToActivate:(id)application;	// 0x364479
- (void)workspace:(id)workspace applicationDidFailToLaunch:(id)application;	// 0x364471
- (void)workspace:(id)workspace applicationDidFinishLaunching:(id)application withInfo:(id)info;	// 0x364351
- (void)workspace:(id)workspace applicationDidRemainReceiver:(id)application fromApplication:(id)application3;	// 0x364335
- (void)workspace:(id)workspace applicationDidStartLaunching:(id)application;	// 0x364349
- (void)workspace:(id)workspace applicationExited:(id)exited withInfo:(id)info;	// 0x364481
- (void)workspace:(id)workspace applicationSuspended:(id)suspended withSettings:(id)settings;	// 0x36447d
- (void)workspace:(id)workspace applicationSuspensionSettingsUpdated:(id)updated withSettings:(id)settings;	// 0x364599
- (id)workspace:(id)workspace applicationWillBecomeReceiver:(id)application fromApplication:(id)application3;	// 0x36432d
- (void)workspace:(id)workspace handleOpenURL:(id)url fromApplication:(id)application;	// 0x36459d
- (void)workspace:(id)workspace handleStatusBarReturnActionFromApplication:(id)application statusBarStyle:(id)style;	// 0x3645a1
- (void)workspaceDidResume:(id)workspace;	// 0x364345
- (void)workspaceDidSuspend:(id)workspace;	// 0x36433d
- (void)workspaceWillResume:(id)workspace;	// 0x364341
- (void)workspaceWillSuspend:(id)workspace;	// 0x364339
@end

