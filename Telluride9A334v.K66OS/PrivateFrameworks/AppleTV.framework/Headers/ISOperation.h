/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSOperation.h> // Unknown library

@class NSError, NSLock, NSArray, NSRunLoop, NSString, SSOperationProgress;
@protocol ISOperationDelegate;

__attribute__((visibility("hidden")))
@interface ISOperation : NSOperation {
@private
	id<ISOperationDelegate> _delegate;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSLock *_lock;	// 20 = 0x14
	NSRunLoop *_operationRunLoop;	// 24 = 0x18
	ISOperation *_parentOperation;	// 28 = 0x1c
	SSOperationProgress *_progress;	// 32 = 0x20
	BOOL _shouldMessageMainThread;	// 36 = 0x24
	NSString *_powerAssertionIdentifier;	// 40 = 0x28
	ISOperation *_subOperation;	// 44 = 0x2c
	NSArray *_serializationLockIdentifiers;	// 48 = 0x30
	BOOL _shouldRunWithBackgroundPriority;	// 52 = 0x34
	BOOL _success;	// 53 = 0x35
	id _threadSafeDelegate;	// 56 = 0x38
}
@property(assign) id<ISOperationDelegate> delegate;	// G=0x33345fa9; S=0x33346009; 
@property(retain) NSError *error;	// G=0x33346e6d; S=0x33346e81; @synthesize=_error
@property(retain) NSRunLoop *operationRunLoop;	// G=0x33346ea5; S=0x33346eb9; @synthesize=_operationRunLoop
@property(retain) ISOperation *parentOperation;	// G=0x33346edd; S=0x33346ef1; @synthesize=_parentOperation
@property(retain) NSString *powerAssertionIdentifier;	// G=0x33346f15; S=0x33346f29; @synthesize=_powerAssertionIdentifier
@property(readonly, assign, nonatomic) SSOperationProgress *progress;	// G=0x33345b9d; 
@property(readonly, assign) int progressWeight;	// G=0x33345bad; 
@property(copy) NSArray *serializationLockIdentifiers;	// G=0x33346961; S=0x333469c1; 
@property(assign) BOOL shouldMessageMainThread;	// G=0x33346165; S=0x33346101; 
@property(assign) BOOL shouldRunWithBackgroundPriority;	// G=0x33346f4d; S=0x33346f5d; @synthesize=_shouldRunWithBackgroundPriority
@property(retain) ISOperation *subOperation;	// G=0x33346f6d; S=0x33346f81; @synthesize=_subOperation
@property(assign) BOOL success;	// G=0x33346fa5; S=0x33346fb5; @synthesize=_success
@property(readonly, assign) id threadSafeDelegate;	// G=0x333461a1; 
@property(readonly, assign) NSString *uniqueKey;	// G=0x33346201; 
- (id)init;	// 0x33345a61
- (void)_dispatchCompletionBlock;	// 0x33346a49
- (void)_failAfterException;	// 0x33346add
- (void)_main:(BOOL)main;	// 0x33346b31
- (void)_sendErrorToDelegate:(id)delegate;	// 0x33346d11
- (void)_sendSuccessToDelegate;	// 0x33346d8d
- (void)_sendWillStartToDelegate;	// 0x33346dfd
- (id)authenticatedAccountDSID;	// 0x333522fd
- (void)cancel;	// 0x33346205
- (BOOL)copyAccountID:(id *)anId byAuthenticatingWithContext:(id)context returningError:(id *)error;	// 0x33352325
- (id)copyActivePowerAssertionIdentifiers;	// 0x33346719
- (id)copySerializationLocks;	// 0x33346799
- (void)dealloc;	// 0x33345ac5
// declared property getter: - (id)delegate;	// 0x33345fa9
// declared property getter: - (id)error;	// 0x33346e6d
- (BOOL)loadSoftwareMapReturningError:(id *)error;	// 0x33354485
- (BOOL)loadURLBagWithContext:(id)context returningError:(id *)error;	// 0x33356865
- (void)lock;	// 0x333468b9
- (void)main;	// 0x3334625d
// declared property getter: - (id)operationRunLoop;	// 0x33346ea5
// declared property getter: - (id)parentOperation;	// 0x33346edd
// declared property getter: - (id)powerAssertionIdentifier;	// 0x33346f15
// declared property getter: - (id)progress;	// 0x33345b9d
// declared property getter: - (int)progressWeight;	// 0x33345bad
- (void)run;	// 0x33345bb1
- (void)run:(BOOL)run;	// 0x333468d9
- (long)runRunLoopUntilStopped;	// 0x33345be5
- (BOOL)runSubOperation:(id)operation onQueue:(id)queue error:(id *)error;	// 0x33345e81
- (BOOL)runSubOperation:(id)operation returningError:(id *)error;	// 0x33345c6d
- (void)sendProgressToDelegate;	// 0x333468f9
// declared property getter: - (id)serializationLockIdentifiers;	// 0x33346961
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33346009
// declared property setter: - (void)setError:(id)error;	// 0x33346e81
// declared property setter: - (void)setOperationRunLoop:(id)loop;	// 0x33346eb9
// declared property setter: - (void)setParentOperation:(id)operation;	// 0x33346ef1
// declared property setter: - (void)setPowerAssertionIdentifier:(id)identifier;	// 0x33346f29
// declared property setter: - (void)setSerializationLockIdentifiers:(id)identifiers;	// 0x333469c1
// declared property setter: - (void)setShouldMessageMainThread:(BOOL)messageMainThread;	// 0x33346101
// declared property setter: - (void)setShouldRunWithBackgroundPriority:(BOOL)runWithBackgroundPriority;	// 0x33346f5d
// declared property setter: - (void)setSubOperation:(id)operation;	// 0x33346f81
// declared property setter: - (void)setSuccess:(BOOL)success;	// 0x33346fb5
- (BOOL)shouldFailAfterUniquePredecessorError:(id)error;	// 0x33346161
// declared property getter: - (BOOL)shouldMessageMainThread;	// 0x33346165
// declared property getter: - (BOOL)shouldRunWithBackgroundPriority;	// 0x33346f4d
- (void)stopRunLoop;	// 0x33345f51
// declared property getter: - (id)subOperation;	// 0x33346f6d
// declared property getter: - (BOOL)success;	// 0x33346fa5
// declared property getter: - (id)threadSafeDelegate;	// 0x333461a1
// declared property getter: - (id)uniqueKey;	// 0x33346201
- (void)unlock;	// 0x33346a29
@end

