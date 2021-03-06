/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"


@interface MSObjectQueue : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	CFDictionaryRef _statements;	// 8 = 0x8
}
@property(readonly, assign) long long count;	// G=0x3376aa0d; 
- (id)initWithPath:(id)path;	// 0x3376a5c5
- (id)_objectWrapperFromQueueQuery:(sqlite3_stmt *)queueQuery outSize:(long long *)size;	// 0x3376ad19
- (sqlite3_stmt *)_statementLabel:(id)label query:(const char *)query;	// 0x3376a959
- (id)allObjectWrappersMaxCount:(long long)count;	// 0x3376ae35
- (void)appendObjectWrappers:(id)wrappers;	// 0x3376aa61
- (void)commitErrorCountsForObjectWrappers:(id)objectWrappers;	// 0x3376b641
- (void)commitObjectsWrappers:(id)wrappers;	// 0x3376b8a9
// declared property getter: - (long long)count;	// 0x3376aa0d
- (void)dealloc;	// 0x3376a8ad
- (id)objectWrappersWithZeroSizeMaxCount:(long long)zeroSizeMaxCount;	// 0x3376b009
- (void)removeObjectWrappersFromQueue:(id)queue;	// 0x3376b431
- (id)smallestObjectWrappersTargetTotalSize:(long long)size maxCount:(long long)count;	// 0x3376b1dd
@end

