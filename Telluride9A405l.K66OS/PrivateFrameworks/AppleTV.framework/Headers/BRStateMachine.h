/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, NSRunLoop, NSString, NSMutableDictionary;

@interface BRStateMachine : NSObject {
@private
	NSRunLoop *_runloop;	// 4 = 0x4
	NSTimer *_timer;	// 8 = 0x8
	NSMutableArray *_events;	// 12 = 0xc
	NSMutableDictionary *_handlers;	// 16 = 0x10
	NSMutableDictionary *_defaultHandlers;	// 20 = 0x14
	BOOL shouldProcessEvents;	// 24 = 0x18
	NSString *_currentState;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	BOOL _immediate;	// 36 = 0x24
	BOOL _ignoreRecursiveEvents;	// 37 = 0x25
}
@property(readonly, assign) NSString *currentState;	// G=0x35ed6331; @synthesize=_currentState
@property(assign, nonatomic) BOOL ignoreRecursiveEvents;	// G=0x35ed6369; S=0x35ed6379; @synthesize=_ignoreRecursiveEvents
@property(readonly, assign) BOOL immediate;	// G=0x35ed6359; @synthesize=_immediate
@property(readonly, assign) NSString *name;	// G=0x35ed6345; @synthesize=_name
@property(assign, nonatomic) BOOL shouldProcessEvents;	// G=0x35ed6311; S=0x35ed6321; @synthesize
+ (void)deregisterStateMachine:(id)machine;	// 0x35ed555d
+ (void)initialize;	// 0x35ed543d
+ (void)registerStateMachine:(id)machine;	// 0x35ed5491
+ (id)stateMachineWithName:(id)name;	// 0x35ed5655
- (id)initWithName:(id)name initialState:(id)state immediateMode:(BOOL)mode;	// 0x35ed5739
- (id)_eventHandlerForEvent:(id)event;	// 0x35ed6721
- (void)_processNextEvent;	// 0x35ed6389
// declared property getter: - (id)currentState;	// 0x35ed6331
- (void)dealloc;	// 0x35ed586d
- (void)deregisterHandlers;	// 0x35ed5f25
// declared property getter: - (BOOL)ignoreRecursiveEvents;	// 0x35ed6369
// declared property getter: - (BOOL)immediate;	// 0x35ed6359
- (void)logUnhandledEvents;	// 0x35ed5f61
// declared property getter: - (id)name;	// 0x35ed6345
- (void)postEvent:(id)event withContext:(id)context;	// 0x35ed59dd
- (void)postEvent:(id)event withContext:(id)context userInfo:(id)info;	// 0x35ed5a01
- (void)purgeEventQueue;	// 0x35ed5d29
- (void)registerDefaultHandlerForEvent:(id)event withBlock:(id)block;	// 0x35ed5ea9
- (void)registerHandlerForEvent:(id)event onState:(id)state withBlock:(id)block;	// 0x35ed5de1
// declared property setter: - (void)setIgnoreRecursiveEvents:(BOOL)events;	// 0x35ed6379
// declared property setter: - (void)setShouldProcessEvents:(BOOL)processEvents;	// 0x35ed6321
// declared property getter: - (BOOL)shouldProcessEvents;	// 0x35ed6311
@end

