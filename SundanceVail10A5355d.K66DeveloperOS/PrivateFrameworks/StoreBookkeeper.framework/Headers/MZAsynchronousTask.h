/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray, MZTaskAssertion, NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MZAsynchronousTask : NSObject {
	NSObject<OS_dispatch_queue> *_handlerQueue;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
	NSObject<OS_dispatch_source> *_timeoutTimer;	// 12 = 0xc
	double _timeout;	// 16 = 0x10
	int _cancelType;	// 24 = 0x18
	id _result;	// 28 = 0x1c
	NSError *_error;	// 32 = 0x20
	id _expirationHandler;	// 36 = 0x24
	id _finishedHandler;	// 40 = 0x28
	NSString *_debugDescription;	// 44 = 0x2c
	NSMutableArray *_completions;	// 48 = 0x30
	MZTaskAssertion *_taskAssertion;	// 52 = 0x34
}
@property(assign, nonatomic) int cancelType;	// G=0x3423ddf9; S=0x3423dd51; @synthesize=_cancelType
@property(retain, nonatomic) NSMutableArray *completions;	// G=0x3423ebf5; S=0x3423ec05; @synthesize=_completions
@property(copy, nonatomic) NSString *debugDescription;	// G=0x3423ebd1; S=0x3423ebe5; @synthesize=_debugDescription
@property(retain, nonatomic) NSError *error;	// G=0x3423e24d; S=0x3423e16d; @synthesize=_error
@property(copy, nonatomic) id expirationHandler;	// G=0x3423d84d; S=0x3423d76d; @synthesize=_expirationHandler
@property(copy, nonatomic) id finishedHandler;	// G=0x3423daf1; S=0x3423da11; @synthesize=_finishedHandler
@property(retain, nonatomic) id result;	// G=0x3423dfa9; S=0x3423dec9; @synthesize=_result
@property(retain, nonatomic) MZTaskAssertion *taskAssertion;	// G=0x3423ec15; S=0x3423ec25; @synthesize=_taskAssertion
- (id)initWithHandlerQueue:(id)handlerQueue timeout:(double)timeout debugDescription:(id)description;	// 0x3423d3a9
- (void)_invalidateTimer;	// 0x3423d665
- (void)_onQueueFireExpirationHandlerIfNecesary;	// 0x3423dca1
- (void)addTaskCompletionBlock:(id)block;	// 0x3423e955
- (void)beginTaskOperation;	// 0x3423e3fd
// declared property getter: - (int)cancelType;	// 0x3423ddf9
// declared property getter: - (id)completions;	// 0x3423ebf5
- (void)dealloc;	// 0x3423d569
// declared property getter: - (id)debugDescription;	// 0x3423ebd1
- (id)description;	// 0x3423d6fd
- (void)endTaskOperation;	// 0x3423e739
// declared property getter: - (id)error;	// 0x3423e24d
// declared property getter: - (id)expirationHandler;	// 0x3423d84d
- (void)finishTaskOperationWithResult:(id)result error:(id)error;	// 0x3423e65d
// declared property getter: - (id)finishedHandler;	// 0x3423daf1
- (void)invalidate;	// 0x3423e76d
- (void)invokeTaskCompletionBlocksWithBlock:(id)block;	// 0x3423e9ad
// declared property getter: - (id)result;	// 0x3423dfa9
// declared property setter: - (void)setCancelType:(int)type;	// 0x3423dd51
// declared property setter: - (void)setCompletions:(id)completions;	// 0x3423ec05
// declared property setter: - (void)setDebugDescription:(id)description;	// 0x3423ebe5
// declared property setter: - (void)setError:(id)error;	// 0x3423e16d
// declared property setter: - (void)setExpirationHandler:(id)handler;	// 0x3423d76d
// declared property setter: - (void)setFinishedHandler:(id)handler;	// 0x3423da11
// declared property setter: - (void)setResult:(id)result;	// 0x3423dec9
// declared property setter: - (void)setTaskAssertion:(id)assertion;	// 0x3423ec25
// declared property getter: - (id)taskAssertion;	// 0x3423ec15
@end

