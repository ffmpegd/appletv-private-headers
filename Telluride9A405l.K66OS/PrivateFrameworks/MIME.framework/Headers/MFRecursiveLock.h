/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSRecursiveLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x311f94fd
- (id)init;	// 0x311f88dd
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x311f9495
- (void)dealloc;	// 0x311f9515
- (id)description;	// 0x311f9561
- (BOOL)isLockedByMe;	// 0x311f9075
- (void)lock;	// 0x311f96dd
- (BOOL)lockBeforeDate:(id)date;	// 0x311f9611
- (BOOL)tryLock;	// 0x311f9679
- (void)unlock;	// 0x311f95dd
@end

