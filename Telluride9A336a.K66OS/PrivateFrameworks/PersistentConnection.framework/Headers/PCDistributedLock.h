/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "NSLocking.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PCDistributedLock : NSObject <NSLocking> {
@private
	NSString *_path;	// 4 = 0x4
	int _fd;	// 8 = 0x8
}
- (id)initWithName:(id)name;	// 0x3466b911
- (id)initWithPath:(id)path;	// 0x3466b555
- (BOOL)_lockBlocking:(BOOL)blocking;	// 0x3466b681
- (void)dealloc;	// 0x3466b851
- (void)lock;	// 0x3466b655
- (BOOL)tryLock;	// 0x3466b669
- (void)unlock;	// 0x3466b5bd
@end

