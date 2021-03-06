/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSOperationQueue, NSMutableArray;

@interface OSDRawCompassDevice : NSObject {
	NSOperationQueue *_operationQueue;	// 4 = 0x4
	IOHIDEventSystemClientRef _HIDSystemClient;	// 8 = 0x8
	IOHIDServiceClientRef _CompassPlugin;	// 12 = 0xc
	NSMutableArray *_samples;	// 16 = 0x10
	SEL _registeredCallback;	// 20 = 0x14
	id _registeredDelegate;	// 24 = 0x18
}
@property(assign) IOHIDServiceClientRef _CompassPlugin;	// G=0x34eeec7d; S=0x34eeec91; @synthesize
- (id)init;	// 0x34eee3ed
// declared property getter: - (IOHIDServiceClientRef)_CompassPlugin;	// 0x34eeec7d
- (void)dealloc;	// 0x34eee471
- (void)enqueueCallback:(id)callback;	// 0x34eee6c1
- (IOHIDServiceClientRef)getCompassPlugin;	// 0x34eeea8d
- (IOHIDEventSystemClientRef)getHIDSystem;	// 0x34eeea05
- (int)registerCompassCallback:(SEL)callback delegate:(id)delegate operationQueue:(id)queue sampleInterval:(float)interval;	// 0x34eee4c1
- (int)registerCompassCallbackIOKit:(float)kit;	// 0x34eee879
- (id)sampleForDuration:(float)duration sampleInterval:(float)interval;	// 0x34eee5e5
- (void)sampleForDurationCallback:(id)durationCallback;	// 0x34eee6a1
// declared property setter: - (void)set_CompassPlugin:(IOHIDServiceClientRef)plugin;	// 0x34eeec91
- (void)unregisterCompassCallback;	// 0x34eee571
- (void)unregisterCompassCallbackIOKit;	// 0x34eee9a5
@end

