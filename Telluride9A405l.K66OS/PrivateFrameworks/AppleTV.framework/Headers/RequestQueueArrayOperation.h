/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "RequestQueueOperation.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RequestQueueArrayOperation : RequestQueueOperation {
@private
	NSArray *_operations;	// 80 = 0x50
	BOOL _shouldContinueAfterFailure;	// 84 = 0x54
}
@property(readonly, assign) NSArray *operations;	// G=0x35f67879; @synthesize=_operations
@property(assign) BOOL shouldContinueAfterFailure;	// G=0x35f67889; S=0x35f67899; @synthesize=_shouldContinueAfterFailure
- (id)init;	// 0x35f6765d
- (id)initWithOperations:(id)operations;	// 0x35f67671
- (void)dealloc;	// 0x35f676d5
// declared property getter: - (id)operations;	// 0x35f67879
- (void)run;	// 0x35f67721
// declared property setter: - (void)setShouldContinueAfterFailure:(BOOL)continueAfterFailure;	// 0x35f67899
// declared property getter: - (BOOL)shouldContinueAfterFailure;	// 0x35f67889
@end
