/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface NSFilePresenterRelinquishment : NSObject {
	NSCountedSet *_blockingAccessClaimIDs;	// 4 = 0x4
	id _reacquirer;	// 8 = 0x8
}
- (BOOL)addBlockingAccessClaimID:(id)anId;	// 0x319e8b19
- (void)dealloc;	// 0x319e8ab5
- (void)removeAllBlockingAccessClaimIDs;	// 0x319e8c6d
- (void)removeBlockingAccessClaimID:(id)anId;	// 0x319e8bf5
- (BOOL)setReacquirer:(id)reacquirer;	// 0x319e8ba1
@end

