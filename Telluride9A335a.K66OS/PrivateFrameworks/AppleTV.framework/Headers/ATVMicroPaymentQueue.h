/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "ISOperationDelegate.h"
#import <NSObject.h> // Unknown library

@class MicroPaymentQueue;

__attribute__((visibility("hidden")))
@interface ATVMicroPaymentQueue : NSObject <ISOperationDelegate, ISSingleton> {
@private
	MicroPaymentQueue *_mpQueue;	// 4 = 0x4
}
+ (BOOL)canMakePayments;	// 0x343591ed
+ (void)setSharedInstance:(id)instance;	// 0x34359125
+ (id)sharedInstance;	// 0x34359179
- (id)init;	// 0x3435906d
- (void)addPurchaseAndPaymentWithInfo:(id)info identity:(id)identity;	// 0x34359211
- (void)dealloc;	// 0x343590d9
- (void)operation:(id)operation failedWithError:(id)error;	// 0x343595e5
- (void)operationFinished:(id)finished;	// 0x34359689
@end
