/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class _UIAsyncInvocation, NSError, _UIViewServiceSessionEndpoint, BKSProcessAssertion;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : NSObject {
@private
	int _terminationStateLock;	// 4 = 0x4
	NSError *_terminationError;	// 8 = 0x8
	id _terminationHandler;	// 12 = 0xc
	BOOL _isTerminated;	// 16 = 0x10
	_UIAsyncInvocation *_terminateInvocation;	// 20 = 0x14
	_UIViewServiceSessionEndpoint *_serviceSessionEndpoint;	// 24 = 0x18
	BKSProcessAssertion *_serviceProcessAssertion;	// 28 = 0x1c
	int __automatic_invalidation_retainCount;	// 32 = 0x20
	BOOL __automatic_invalidation_invalidated;	// 36 = 0x24
}
+ (id)connectToViewServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;	// 0x30461b0d
- (int)__automatic_invalidation_logic;	// 0x304618a5
- (id)_initWithConnectionInfo:(XXStruct_OzJQfB)connectionInfo serviceBundleIdentifier:(id)identifier;	// 0x30461c29
- (BOOL)_isDeallocating;	// 0x30461ae1
- (void)_terminateUnconditionallyThen:(id)then;	// 0x304620e1
- (id)_terminateWithError:(id)error;	// 0x30462071
- (BOOL)_tryRetain;	// 0x30461a91
- (id)connectToDeputyOfType:(id)type connectionHandler:(id)handler;	// 0x30461ea5
- (void)dealloc;	// 0x3046228d
- (id)disconnect;	// 0x30462239
- (oneway void)release;	// 0x304619bd
- (id)retain;	// 0x30461985
- (unsigned)retainCount;	// 0x30461a7d
- (void)setTerminationHandler:(id)handler;	// 0x304621cd
@end

