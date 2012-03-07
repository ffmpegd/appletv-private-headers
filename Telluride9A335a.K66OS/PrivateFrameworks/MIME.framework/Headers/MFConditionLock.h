/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSConditionLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x32fc6a51
- (id)init;	// 0x32fc5949
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x32fc540d
- (id)initWithName:(id)name condition:(int)condition andDelegate:(id)delegate;	// 0x32fc69e9
- (void)dealloc;	// 0x32fc6a69
- (id)description;	// 0x32fc6ab5
- (BOOL)isLockedByMe;	// 0x32fc60a1
- (BOOL)lockBeforeDate:(id)date;	// 0x32fc6c09
- (BOOL)lockWhenCondition:(int)condition beforeDate:(id)date;	// 0x32fc6b9d
- (void)unlock;	// 0x32fc6b69
- (void)unlockWithCondition:(int)condition;	// 0x32fc6b31
@end

