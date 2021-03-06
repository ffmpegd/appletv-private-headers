/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>
#import "ISStoreURLOperationDelegate.h"

@class NSString, NSURL, SBKStoreAuthenticationController, SSAccount, NSOperationQueue, NSMutableArray, SBKTaskAssertion, SBKTransaction;
@protocol OS_dispatch_queue, SBKTransactionControllerDelegate;

@interface SBKTransactionController : NSObject <ISStoreURLOperationDelegate> {
	BOOL _enabled;	// 4 = 0x4
	BOOL _shouldAuthenticateIfNecessary;	// 5 = 0x5
	BOOL _isResolvingError;	// 6 = 0x6
	id<SBKTransactionControllerDelegate> _delegate;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	NSURL *_requestURL;	// 16 = 0x10
	SBKStoreAuthenticationController *_authenticationController;	// 20 = 0x14
	SSAccount *_account;	// 24 = 0x18
	NSObject<OS_dispatch_queue> *_queue;	// 28 = 0x1c
	NSOperationQueue *_operationQueue;	// 32 = 0x20
	NSMutableArray *_pendingTransactions;	// 36 = 0x24
	SBKTransaction *_currentTransaction;	// 40 = 0x28
	SBKTaskAssertion *_backgroundTaskAssertion;	// 44 = 0x2c
	id _networkTypeObserver;	// 48 = 0x30
	int _conflictResolutionAttempts;	// 52 = 0x34
}
@property(retain) SSAccount *account;	// G=0x327ac3b5; S=0x327ac3c9; @synthesize=_account
@property(retain) SBKStoreAuthenticationController *authenticationController;	// G=0x327ac361; S=0x327ac375; @synthesize=_authenticationController
@property(retain) SBKTaskAssertion *backgroundTaskAssertion;	// G=0x327ac499; S=0x327ac4ad; @synthesize=_backgroundTaskAssertion
@property(assign) int conflictResolutionAttempts;	// G=0x327ac4f1; S=0x327ac505; @synthesize=_conflictResolutionAttempts
@property(retain) SBKTransaction *currentTransaction;	// G=0x327ac445; S=0x327ac459; @synthesize=_currentTransaction
@property(assign) __weak id<SBKTransactionControllerDelegate> delegate;	// G=0x327ac2ed; S=0x327ac30d; @synthesize=_delegate
@property(readonly, assign) NSString *domain;	// G=0x327ac321; @synthesize=_domain
@property(readonly, assign, getter=isEnabled) BOOL enabled;	// G=0x327ac349; @synthesize=_enabled
@property(readonly, assign, getter=isIdle) BOOL idle;	// G=0x327a860d; 
@property(assign) BOOL isResolvingError;	// G=0x327ac469; S=0x327ac481; @synthesize=_isResolvingError
@property(assign) __weak id networkTypeObserver;	// G=0x327ac4bd; S=0x327ac4dd; @synthesize=_networkTypeObserver
@property(retain) NSOperationQueue *operationQueue;	// G=0x327ac3fd; S=0x327ac411; @synthesize=_operationQueue
@property(retain) NSMutableArray *pendingTransactions;	// G=0x327ac421; S=0x327ac435; @synthesize=_pendingTransactions
@property(retain) NSObject<OS_dispatch_queue> *queue;	// G=0x327ac3d9; S=0x327ac3ed; @synthesize=_queue
@property(readonly, assign) NSURL *requestURL;	// G=0x327ac335; @synthesize=_requestURL
@property(assign) BOOL shouldAuthenticateIfNecessary;	// G=0x327ac385; S=0x327ac39d; @synthesize=_shouldAuthenticateIfNecessary
- (id)initWithDomain:(id)domain requestURL:(id)url;	// 0x327a79f9
- (void).cxx_destruct;	// 0x327ac51d
- (void)_becomeDelegateForOperation:(id)operation;	// 0x327a8c99
- (void)_beginBackgroundTask;	// 0x327a8dd5
- (BOOL)_delegateShouldScheduleTransaction:(id)_delegate error:(id *)error;	// 0x327ab545
- (void)_delegateTransactionDidCancel:(id)_delegateTransaction withError:(id)error;	// 0x327ab8b5
- (BOOL)_delegateTransactionDidFail:(id)_delegateTransaction withError:(id)error;	// 0x327ab6a9
- (void)_delegateTransactionDidFinish:(id)_delegateTransaction;	// 0x327abad1
- (void)_endBackgroundTask;	// 0x327a8e55
- (void)_onQueue_addPendingTransaction:(id)transaction;	// 0x327a9f11
- (BOOL)_onQueue_authenticationCanProcessTransaction:(id)transaction error:(id *)error;	// 0x327aa2cd
- (void)_onQueue_beginBackgroundTask;	// 0x327a8ed5
- (BOOL)_onQueue_canScheduleTransaction:(id)transaction error:(id *)error;	// 0x327a9f9d
- (void)_onQueue_cancelAllPendingTransactions:(id)transactions;	// 0x327a9209
- (void)_onQueue_cancelTransaction:(id)transaction error:(id)error;	// 0x327a9425
- (BOOL)_onQueue_clampsCanScheduleTransaction:(id)transaction error:(id *)error;	// 0x327aa26d
- (id)_onQueue_clampsController;	// 0x327a85b1
- (void)_onQueue_currentTransactionDidFinish;	// 0x327aa399
- (void)_onQueue_endBackgroundTask;	// 0x327a9151
- (BOOL)_onQueue_isEnabledForTransaction:(id)transaction error:(id *)error;	// 0x327aa125
- (BOOL)_onQueue_isIdle;	// 0x327a85cd
- (BOOL)_onQueue_isTransactionValid:(id)valid error:(id *)error;	// 0x327aa18d
- (void)_onQueue_performCancelErrorHandlingForError:(id)error;	// 0x327ab419
- (void)_onQueue_performDefaultErrorHandlingForError:(id)error;	// 0x327ab495
- (void)_onQueue_performRetryErrorHandlingForError:(id)error;	// 0x327ab2f1
- (void)_onQueue_processCurrentTransaction;	// 0x327a999d
- (void)_onQueue_processOperationOutput:(id)output operation:(id)operation operationAuthenticated:(BOOL)authenticated;	// 0x327aa9f5
- (void)_onQueue_processPendingTransactions;	// 0x327a97a5
- (void)_onQueue_resolveError:(id)error resolution:(int)resolution;	// 0x327ab1f9
- (void)_onQueue_scheduleTransaction:(id)transaction isRetry:(BOOL)retry;	// 0x327a9bb9
- (void)_onQueue_transactionDidCancel:(id)_onQueue_transaction withError:(id)error;	// 0x327aa681
- (void)_onQueue_transactionDidFail:(id)_onQueue_transaction withError:(id)error;	// 0x327aa4dd
- (void)_processDataInResponse:(id)response;	// 0x327aa851
- (void)_resignDelegateForOperation:(id)operation;	// 0x327a8c15
- (void)_resolveError:(id)error resolution:(int)resolution;	// 0x327a8cfd
- (BOOL)_sendFinishedBlockForTransaction:(id)transaction success:(BOOL)success cancelled:(BOOL)cancelled error:(id)error handledAsFinishedBlock:(BOOL *)block;	// 0x327ab615
// declared property getter: - (id)account;	// 0x327ac3b5
// declared property getter: - (id)authenticationController;	// 0x327ac361
// declared property getter: - (id)backgroundTaskAssertion;	// 0x327ac499
- (void)cancelAllTransactions;	// 0x327a89e9
- (void)cancelAllTransactionsCancelCode:(int)code;	// 0x327a8af5
- (void)cancelScheduledTransaction:(id)transaction;	// 0x327a88dd
// declared property getter: - (int)conflictResolutionAttempts;	// 0x327ac4f1
// declared property getter: - (id)currentTransaction;	// 0x327ac445
- (void)dealloc;	// 0x327a7f89
// declared property getter: - (id)delegate;	// 0x327ac2ed
// declared property getter: - (id)domain;	// 0x327ac321
// declared property getter: - (BOOL)isEnabled;	// 0x327ac349
// declared property getter: - (BOOL)isIdle;	// 0x327a860d
// declared property getter: - (BOOL)isResolvingError;	// 0x327ac469
// declared property getter: - (id)networkTypeObserver;	// 0x327ac4bd
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x327a8159
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x327abdd5
- (void)operation:(id)operation failedWithError:(id)error;	// 0x327abf39
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x327abcb9
// declared property getter: - (id)operationQueue;	// 0x327ac3fd
// declared property getter: - (id)pendingTransactions;	// 0x327ac421
// declared property getter: - (id)queue;	// 0x327ac3d9
// declared property getter: - (id)requestURL;	// 0x327ac335
- (void)scheduleTransaction:(id)transaction;	// 0x327a8759
- (void)scheduleTransaction:(id)transaction withTransactionFinishedBlock:(id)transactionFinishedBlock;	// 0x327a86e9
// declared property setter: - (void)setAccount:(id)account;	// 0x327ac3c9
// declared property setter: - (void)setAuthenticationController:(id)controller;	// 0x327ac375
// declared property setter: - (void)setBackgroundTaskAssertion:(id)assertion;	// 0x327ac4ad
// declared property setter: - (void)setConflictResolutionAttempts:(int)attempts;	// 0x327ac505
// declared property setter: - (void)setCurrentTransaction:(id)transaction;	// 0x327ac459
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x327ac30d
// declared property setter: - (void)setIsResolvingError:(BOOL)error;	// 0x327ac481
// declared property setter: - (void)setNetworkTypeObserver:(id)observer;	// 0x327ac4dd
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x327ac411
// declared property setter: - (void)setPendingTransactions:(id)transactions;	// 0x327ac435
// declared property setter: - (void)setQueue:(id)queue;	// 0x327ac3ed
// declared property setter: - (void)setShouldAuthenticateIfNecessary:(BOOL)authenticateIfNecessary;	// 0x327ac39d
// declared property getter: - (BOOL)shouldAuthenticateIfNecessary;	// 0x327ac385
@end

