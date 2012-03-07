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
+ (void)initialize;	// 0x32fc6511
- (id)init;	// 0x32fc58f1
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x32fc64a9
- (void)dealloc;	// 0x32fc6529
- (id)description;	// 0x32fc6575
- (BOOL)isLockedByMe;	// 0x32fc6089
- (void)lock;	// 0x32fc66f1
- (BOOL)lockBeforeDate:(id)date;	// 0x32fc6625
- (BOOL)tryLock;	// 0x32fc668d
- (void)unlock;	// 0x32fc65f1
@end

