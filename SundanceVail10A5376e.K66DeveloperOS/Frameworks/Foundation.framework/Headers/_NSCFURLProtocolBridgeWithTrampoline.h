/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "_NSCFURLProtocolBridge.h"

@class NSCountedSet, NSThread, NSMutableArray;

@interface _NSCFURLProtocolBridgeWithTrampoline : _NSCFURLProtocolBridge {
	NSMutableArray *_workQueue;	// 24 = 0x18
	NSCountedSet *_runloops;	// 28 = 0x1c
	BOOL _canSignalDirectly;	// 32 = 0x20
	NSThread *_processThread;	// 36 = 0x24
}
- (id)initWithCFURLProtocol:(CFURLProtocolRef)cfurlprotocol request:(id)request protocolClass:(Class)aClass;	// 0x34df593d
- (void)dealloc;	// 0x34df5ac5
- (void)finalize;	// 0x34df5b29
- (void)processEventQ;	// 0x34df5741
- (void)pushEvent:(id)event from:(const char *)from;	// 0x34df5d75
- (void)releaseWorkQueue;	// 0x34df59e1
- (void)schedule:(CFRunLoopRef)schedule mode:(CFStringRef)mode;	// 0x34df5b69
- (BOOL)shouldSignalDirectly;	// 0x34df5cc9
- (void)unschedule:(CFRunLoopRef)unschedule mode:(CFStringRef)mode;	// 0x34df5c51
@end
