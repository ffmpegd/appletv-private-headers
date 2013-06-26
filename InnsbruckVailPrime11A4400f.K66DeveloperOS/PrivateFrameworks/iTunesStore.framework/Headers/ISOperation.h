/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSOperation.h>

@class NSError, NSLock, NSRunLoop, SSOperationProgress, NSArray, NSMutableArray, NSString;
@protocol ISOperationDelegate;

@interface ISOperation : NSOperation {
	id<ISOperationDelegate> _delegate;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSLock *_lock;	// 20 = 0x14
	NSRunLoop *_operationRunLoop;	// 24 = 0x18
	ISOperation *_parentOperation;	// 28 = 0x1c
	SSOperationProgress *_progress;	// 32 = 0x20
	BOOL _shouldMessageMainThread;	// 36 = 0x24
	NSString *_powerAssertionIdentifier;	// 40 = 0x28
	NSArray *_serializationLockIdentifiers;	// 44 = 0x2c
	NSMutableArray *_subOperations;	// 48 = 0x30
	BOOL _shouldRunWithBackgroundPriority;	// 52 = 0x34
	BOOL _stopped;	// 53 = 0x35
	BOOL _success;	// 54 = 0x36
	id _threadSafeDelegate;	// 56 = 0x38
}
@property(assign) id<ISOperationDelegate> delegate;	// G=0x33c67709; S=0x33c67769; 
@property(retain) NSError *error;	// G=0x33c68a99; S=0x33c68aad; @synthesize=_error
@property(retain) NSRunLoop *operationRunLoop;	// G=0x33c68abd; S=0x33c68ad1; @synthesize=_operationRunLoop
@property(retain) ISOperation *parentOperation;	// G=0x33c68ae1; S=0x33c68af5; @synthesize=_parentOperation
@property(retain) NSString *powerAssertionIdentifier;	// G=0x33c68b05; S=0x33c68b19; @synthesize=_powerAssertionIdentifier
@property(readonly, assign, nonatomic) SSOperationProgress *progress;	// G=0x33c67069; 
@property(readonly, assign) int progressWeight;	// G=0x33c670c9; 
@property(copy) NSArray *serializationLockIdentifiers;	// G=0x33c684fd; S=0x33c6855d; 
@property(assign) BOOL shouldMessageMainThread;	// G=0x33c678b9; S=0x33c67855; 
@property(assign) BOOL shouldRunWithBackgroundPriority;	// G=0x33c68b29; S=0x33c68b41; @synthesize=_shouldRunWithBackgroundPriority
@property(assign) BOOL success;	// G=0x33c68b59; S=0x33c68b71; @synthesize=_success
@property(readonly, assign) id threadSafeDelegate;	// G=0x33c678f5; 
@property(readonly, assign) NSString *uniqueKey;	// G=0x33c67955; 
- (id)init;	// 0x33c66f29
- (void)_addSubOperation:(id)operation;	// 0x33c685e5
- (void)_failAfterException;	// 0x33c68651
- (void)_keepAliveTimer:(id)timer;	// 0x33c686a5
- (void)_main:(BOOL)main;	// 0x33c686b5
- (void)_removeSubOperation:(id)operation;	// 0x33c6890d
- (void)_sendErrorToDelegate:(id)delegate;	// 0x33c6892d
- (void)_sendSuccessToDelegate;	// 0x33c689b1
- (void)_sendWillStartToDelegate;	// 0x33c68a25
- (id)authenticatedAccountDSID;	// 0x33c7edd1
- (void)cancel;	// 0x33c67959
- (BOOL)copyAccountID:(id *)anId byAuthenticatingWithContext:(id)context returningError:(id *)error;	// 0x33c7edf9
- (id)copyActivePowerAssertionIdentifiers;	// 0x33c67eb5
- (id)copySerializationLocks;	// 0x33c67f35
- (void)dealloc;	// 0x33c66f8d
// declared property getter: - (id)delegate;	// 0x33c67709
- (void)dispatchCompletionBlock;	// 0x33c68075
// declared property getter: - (id)error;	// 0x33c68a99
- (BOOL)loadSoftwareMapReturningError:(id *)error;	// 0x33c7e5cd
- (BOOL)loadURLBagWithContext:(id)context returningError:(id *)error;	// 0x33c71d05
- (id)loadedURLBagWithContext:(id)context returningError:(id *)error;	// 0x33c71c65
- (void)lock;	// 0x33c68111
- (void)main;	// 0x33c67a05
// declared property getter: - (id)operationRunLoop;	// 0x33c68abd
// declared property getter: - (id)parentOperation;	// 0x33c68ae1
// declared property getter: - (id)powerAssertionIdentifier;	// 0x33c68b05
// declared property getter: - (id)progress;	// 0x33c67069
// declared property getter: - (int)progressWeight;	// 0x33c670c9
- (void)releasePowerAssertionsDuringBlock:(id)block;	// 0x33c68131
- (void)run;	// 0x33c670cd
- (void)run:(BOOL)run;	// 0x33c683e1
- (long)runRunLoopUntilStopped;	// 0x33c67101
- (BOOL)runSubOperation:(id)operation onQueue:(id)queue error:(id *)error;	// 0x33c67435
- (BOOL)runSubOperation:(id)operation returningError:(id *)error;	// 0x33c67201
- (void)sendDidTakeSerializationLocks;	// 0x33c683f9
- (void)sendProgressToDelegate;	// 0x33c68449
// declared property getter: - (id)serializationLockIdentifiers;	// 0x33c684fd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c67769
// declared property setter: - (void)setError:(id)error;	// 0x33c68aad
// declared property setter: - (void)setOperationRunLoop:(id)loop;	// 0x33c68ad1
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x33c68af5
// declared property setter: - (void)setPowerAssertionIdentifier:(id)identifier;	// 0x33c68b19
// declared property setter: - (void)setSerializationLockIdentifiers:(id)identifiers;	// 0x33c6855d
// declared property setter: - (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x33c67855
// declared property setter: - (void)setShouldRunWithBackgroundPriority:(BOOL)runWithBackgroundPriority;	// 0x33c68b41
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x33c68b71
- (BOOL)shouldFailAfterUniquePredecessorError:(id)error;	// 0x33c678b5
// declared property getter: - (BOOL)shouldMessageMainThread;	// 0x33c678b9
// declared property getter: - (BOOL)shouldRunWithBackgroundPriority;	// 0x33c68b29
- (BOOL)stopRunLoop;	// 0x33c67545
// declared property getter: - (BOOL)success;	// 0x33c68b59
// declared property getter: - (id)threadSafeDelegate;	// 0x33c678f5
// declared property getter: - (id)uniqueKey;	// 0x33c67955
- (void)unlock;	// 0x33c685c5
@end
