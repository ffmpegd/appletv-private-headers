/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import </libobjc.A.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ML3DispatchQueue : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x315a463d; @synthesize=_identifier
@property(readonly, assign, nonatomic) BOOL isOnQueue;	// G=0x315a45e9; 
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;	// G=0x315a4651; S=0x315a4661; @synthesize=_queue
+ (id)currentQueueIdentifier;	// 0x315a4121
+ (id)serialQueueWithIdentifierPrefix:(id)identifierPrefix;	// 0x315a417d
- (id)init;	// 0x315a4405
- (id)initWithUniqueIdentifier:(id)uniqueIdentifier serial:(BOOL)serial;	// 0x315a4239
- (void).cxx_destruct;	// 0x315a4689
- (void)dispatchAsync:(id)async;	// 0x315a45a9
- (void)dispatchAsyncOrInvokeImmediately:(id)immediately;	// 0x315a4549
- (void)dispatchSync:(id)sync;	// 0x315a4509
- (void)dispatchSyncOrInvokeImmediately:(id)immediately;	// 0x315a44a9
// declared property getter: - (id)identifier;	// 0x315a463d
// declared property getter: - (BOOL)isOnQueue;	// 0x315a45e9
// declared property getter: - (id)queue;	// 0x315a4651
// declared property setter: - (void)setQueue:(id)queue;	// 0x315a4661
@end

