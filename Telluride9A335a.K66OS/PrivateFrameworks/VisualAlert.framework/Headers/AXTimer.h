/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "VisualAlert-Structs.h"
#import <NSObject.h> // Unknown library


@interface AXTimer : NSObject {
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	dispatch_source_s *_dispatchTimer;	// 8 = 0x8
}
- (id)init;	// 0x3079e2b1
- (id)initWithTargetSerialQueue:(dispatch_queue_s *)targetSerialQueue;	// 0x3079e2c5
- (void)_reallyCancel;	// 0x3079e625
- (void)afterDelay:(double)delay processBlock:(id)block;	// 0x3079e429
- (void)cancel;	// 0x3079e655
- (void)dealloc;	// 0x3079e3d1
@end

