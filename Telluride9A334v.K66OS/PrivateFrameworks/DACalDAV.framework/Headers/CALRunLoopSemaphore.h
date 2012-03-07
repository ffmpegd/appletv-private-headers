/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "DACalDAV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock;

@interface CALRunLoopSemaphore : NSObject {
	CFRunLoopRef _rloop;	// 4 = 0x4
	int _count;	// 8 = 0x8
	int _pipe[2];	// 12 = 0xc
	CFSocketRef _socket;	// 20 = 0x14
	CFRunLoopSourceRef _socketSource;	// 24 = 0x18
	NSLock *_countLock;	// 28 = 0x1c
}
- (id)init;	// 0x35b557f1
- (id)initWithCFRunLoop:(CFRunLoopRef)cfrunLoop;	// 0x35b55815
- (void)awake;	// 0x35b557ed
- (void)dealloc;	// 0x35b55945
- (void)down;	// 0x35b55a99
- (void)finalize;	// 0x35b559fd
- (void)up;	// 0x35b55b61
- (int)value;	// 0x35b55bd1
@end

