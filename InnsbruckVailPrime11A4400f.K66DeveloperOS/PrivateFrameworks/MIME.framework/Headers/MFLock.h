/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFLockObject.h"
#import <Foundation/NSLock.h>

@class NSString;

@interface MFLock : NSLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x312eb22d
- (id)init;	// 0x312eb245
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x312eb271
- (void)dealloc;	// 0x312eb4c9
- (id)description;	// 0x312eb431
- (BOOL)isLockedByMe;	// 0x312eb2d5
- (void)lock;	// 0x312eb2e1
- (BOOL)lockBeforeDate:(id)date;	// 0x312eb399
- (BOOL)tryLock;	// 0x312eb339
- (void)unlock;	// 0x312eb3fd
@end

