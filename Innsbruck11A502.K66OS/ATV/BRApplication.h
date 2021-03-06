/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CATVApplication.h"
#import "AppleTV-Structs.h"

@class BREvent, NSMutableArray;
@protocol BRResponder;

__attribute__((visibility("hidden")))
@interface BRApplication : CATVApplication {
	BREvent *_currentEvent;	// 108 = 0x6c
	NSMutableArray *_eventQueue;	// 112 = 0x70
	CFRunLoopSourceRef _source;	// 116 = 0x74
	CFRunLoopRef _mainRunLoop;	// 120 = 0x78
	double _flushBeforeTimeStamp;	// 124 = 0x7c
	BOOL _handlingEvent;	// 132 = 0x84
	BOOL _eventsBlocked;	// 133 = 0x85
	BOOL _wantsSpaceCharacters;	// 134 = 0x86
	id<BRResponder> _firstBRResponder;	// 136 = 0x88
}
@property(readonly, retain) BREvent *currentEvent;	// G=0xf2b5; converted property
@property(retain) id firstBRResponder;	// G=0xf23d; S=0xf251; converted property
@property(assign) BOOL wantsSpaceCharacters;	// G=0xf295; S=0xf2a5; converted property
+ (void)_setupLogging;	// 0xec9d
+ (BOOL)registerAsSystemApp;	// 0xf5e9
+ (id)sharedApplication;	// 0xec71
- (id)init;	// 0xefd1
- (void).cxx_destruct;	// 0xf7fd
- (id)BRApplicationDelegate;	// 0xf22d
- (id)_accessibilityResponderElement;	// 0xfca9
- (void)_handler;	// 0xf845
- (BOOL)_processForTypeahead:(id)typeahead wasHandledAlready:(BOOL)already;	// 0x417b95
- (BOOL)_willSendEventForHandling:(id *)handling;	// 0xfb55
- (void)adjustToDisplayChange;	// 0xf5b1
- (void)applicationWillTerminate;	// 0xf211
- (void)blockEvents;	// 0xf569
// converted property getter: - (id)currentEvent;	// 0xf2b5
- (void)dealloc;	// 0xf199
- (void)dispatchEventOnEventThread:(id)thread;	// 0xf449
- (void)emptyQueue;	// 0xf479
- (void)endScreenSaverTest;	// 0x4d76f9
- (void)failedTest:(id)test options:(id)options error:(id)error;	// 0x4d7385
- (void)finishedTest:(id)test options:(id)options;	// 0x4d7359
// converted property getter: - (id)firstBRResponder;	// 0xf23d
- (void)postEvent:(id)event;	// 0xf2c9
- (BOOL)runTest:(id)test options:(id)options;	// 0x4d7221
// converted property setter: - (void)setFirstBRResponder:(id)responder;	// 0xf251
// converted property setter: - (void)setWantsSpaceCharacters:(BOOL)characters;	// 0xf2a5
- (void)setupDisplayManagement;	// 0xf1e1
- (void)startLogTest:(id)test;	// 0x4d745d
- (void)startMoviePreviewPlayTest:(id)test;	// 0x4d77e5
- (void)startScreenSaverTest:(id)test;	// 0x4d7611
- (void)startYouTubePlayTest:(id)test;	// 0x4d74dd
- (void)startedTest:(id)test options:(id)options;	// 0x4d732d
- (void)submitAggregateReportingNow;	// 0xf5cd
- (void)unblockEvents;	// 0xf57d
// converted property getter: - (BOOL)wantsSpaceCharacters;	// 0xf295
@end

