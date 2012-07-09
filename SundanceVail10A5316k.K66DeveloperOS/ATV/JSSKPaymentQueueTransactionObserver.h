/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "SKPaymentTransactionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SKPaymentQueue, NSMutableSet, ATVJSContext;

__attribute__((visibility("hidden")))
@interface JSSKPaymentQueueTransactionObserver : XXUnknownSuperclass <SKPaymentTransactionObserver> {
	ATVJSContext *_atvContext;	// 4 = 0x4
	NSMutableSet *_jsObservers;	// 8 = 0x8
	SKPaymentQueue *_paymentQueue;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) SKPaymentQueue *paymentQueue;	// G=0x148a55; @synthesize=_paymentQueue
- (id)initWithContext:(id)context thisObject:(OpaqueJSValue *)object;	// 0x1483b5
- (void)_callObserversUsingFunctionName:(id)name withOptionalArgument:(id)optionalArgument;	// 0x148719
- (void)addJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x1484e5
- (void)dealloc;	// 0x14846d
// declared property getter: - (id)paymentQueue;	// 0x148a55
- (void)paymentQueue:(id)queue removedTransactions:(id)transactions;	// 0x14899d
- (void)paymentQueue:(id)queue restoreCompletedTransactionsFailedWithError:(id)error;	// 0x148a1d
- (void)paymentQueue:(id)queue updatedTransactions:(id)transactions;	// 0x14891d
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)finished;	// 0x148a39
- (void)removeJSObserver:(OpaqueJSValue *)observer context:(OpaqueJSContext *)context;	// 0x148601
@end
