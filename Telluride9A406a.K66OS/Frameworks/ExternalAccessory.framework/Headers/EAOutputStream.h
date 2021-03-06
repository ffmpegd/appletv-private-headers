/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSOutputStream.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSThread, NSCondition, EASession, EAAccessory;

@interface EAOutputStream : NSOutputStream {
	id _delegate;	// 4 = 0x4
	int _outfd;	// 8 = 0x8
	EAAccessory *_accessory;	// 12 = 0xc
	EASession *_session;	// 16 = 0x10
	BOOL _isOpenCompletedEventSent;	// 20 = 0x14
	BOOL _hasSpaceAvailableEventSent;	// 21 = 0x15
	BOOL _hasSpaceAvailable;	// 22 = 0x16
	BOOL _isAtEndEventSent;	// 23 = 0x17
	unsigned _streamStatus;	// 24 = 0x18
	CFRunLoopRef _runLoop;	// 28 = 0x1c
	CFRunLoopSourceRef _runLoopSource;	// 32 = 0x20
	NSThread *_writeAvailableThread;	// 36 = 0x24
	BOOL _isWriteAvailableThreadCancelled;	// 40 = 0x28
	NSCondition *_writeAvailableThreadRunCondition;	// 44 = 0x2c
}
@property(assign) id delegate;	// G=0x33a6e521; S=0x33a6e531; converted property
@property(readonly, assign) BOOL hasSpaceAvailable;	// G=0x33a6e899; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x33a6e6e5; converted property
- (id)initWithAccessory:(id)accessory forSession:(id)session;	// 0x33a6dfd9
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x33a6e925
- (void)_performAtEndOfStreamValidation;	// 0x33a6e935
- (void)_scheduleCallback;	// 0x33a6eb11
- (void)_streamEventTrigger;	// 0x33a6e98d
- (void)_writeAvailableThread;	// 0x33a6eb6d
- (void)close;	// 0x33a6e3d1
- (void)dealloc;	// 0x33a6e0c1
// converted property getter: - (id)delegate;	// 0x33a6e521
- (void)endStream;	// 0x33a6e8f5
// converted property getter: - (BOOL)hasSpaceAvailable;	// 0x33a6e899
- (void)open;	// 0x33a6e141
- (void)openCompleted;	// 0x33a6e8c5
- (id)propertyForKey:(id)key;	// 0x33a6e555
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x33a6e689
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x33a6e55d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x33a6e531
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x33a6e559
- (id)streamError;	// 0x33a6e70d
// converted property getter: - (unsigned)streamStatus;	// 0x33a6e6e5
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x33a6e711
@end

