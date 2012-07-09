/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSString, Protocol;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface IMRemoteObjectInternal : NSObject {
	NSRecursiveLock *_lock;	// 4 = 0x4
	NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_queue;	// 12 = 0xc
	long _deathPostPredicate;	// 16 = 0x10
	Protocol *_protocol;	// 20 = 0x14
	NSString *_portName;	// 24 = 0x18
	BOOL _willBeTerminated;	// 28 = 0x1c
	unsigned _queuedMessages;	// 32 = 0x20
	unsigned _MaxQueuedMessages;	// 36 = 0x24
	int _pid;	// 40 = 0x28
}
@end
