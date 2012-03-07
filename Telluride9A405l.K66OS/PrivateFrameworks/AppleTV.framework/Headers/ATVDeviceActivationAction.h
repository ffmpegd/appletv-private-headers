/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@protocol ATVDeviceActivationDelegate;

@interface ATVDeviceActivationAction : NSObject {
@private
	id<ATVDeviceActivationDelegate> _delegate;	// 4 = 0x4
}
- (id)initWithDelegate:(id)delegate;	// 0x35f31bed
- (void)_activationFailedWithReason:(int)reason error:(id)error;	// 0x35f320b1
- (void)_activationRequestLoaded:(id)loaded;	// 0x35f31f19
- (void)_activationSucceeded;	// 0x35f32045
- (void)_bagRequestLoaded:(id)loaded;	// 0x35f31da1
- (void)dealloc;	// 0x35f31c35
- (void)start;	// 0x35f31c91
@end

