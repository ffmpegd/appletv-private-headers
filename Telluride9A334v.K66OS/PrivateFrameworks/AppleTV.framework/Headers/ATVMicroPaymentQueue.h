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
+ (BOOL)canMakePayments;	// 0x333781ed
+ (void)setSharedInstance:(id)instance;	// 0x33378125
+ (id)sharedInstance;	// 0x33378179
- (id)init;	// 0x3337806d
- (void)addPurchaseAndPaymentWithInfo:(id)info identity:(id)identity;	// 0x33378211
- (void)dealloc;	// 0x333780d9
- (void)operation:(id)operation failedWithError:(id)error;	// 0x333785e5
- (void)operationFinished:(id)finished;	// 0x33378689
@end

