/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class BKSProcessAssertion;
@protocol OS_dispatch_queue;

@interface MZProcessAssertion : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	id _expirationBlock;	// 8 = 0x8
	unsigned _identifier;	// 12 = 0xc
	BKSProcessAssertion *_bkProcessAssertion;	// 16 = 0x10
}
@property(retain, nonatomic) BKSProcessAssertion *bkProcessAssertion;	// G=0x34238011; S=0x34237f61; @synthesize=_bkProcessAssertion
@property(readonly, assign, nonatomic) unsigned identifier;	// G=0x34238431; @synthesize=_identifier
- (id)initWithExpirationBlock:(id)expirationBlock debugDescription:(id)description;	// 0x34237a1d
- (void)_expireBackgroundTask;	// 0x342381d5
- (void)_onQueueSetBkProcessAssertion:(id)assertion;	// 0x34237d09
// declared property getter: - (id)bkProcessAssertion;	// 0x34238011
- (void)dealloc;	// 0x34237c99
- (id)description;	// 0x34237c31
// declared property getter: - (unsigned)identifier;	// 0x34238431
- (void)invalidate;	// 0x342383b5
// declared property setter: - (void)setBkProcessAssertion:(id)assertion;	// 0x34237f61
@end
