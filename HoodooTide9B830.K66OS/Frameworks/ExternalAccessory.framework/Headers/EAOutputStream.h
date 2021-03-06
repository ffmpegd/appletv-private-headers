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
@property(assign) id delegate;	// G=0x31530521; S=0x31530531; converted property
@property(readonly, assign) BOOL hasSpaceAvailable;	// G=0x31530899; converted property
@property(readonly, assign) unsigned streamStatus;	// G=0x315306e5; converted property
- (id)initWithAccessory:(id)accessory forSession:(id)session;	// 0x3152ffd9
- (void)_accessoryDidDisconnect:(id)_accessory;	// 0x31530925
- (void)_performAtEndOfStreamValidation;	// 0x31530935
- (void)_scheduleCallback;	// 0x31530b11
- (void)_streamEventTrigger;	// 0x3153098d
- (void)_writeAvailableThread;	// 0x31530b6d
- (void)close;	// 0x315303d1
- (void)dealloc;	// 0x315300c1
// converted property getter: - (id)delegate;	// 0x31530521
- (void)endStream;	// 0x315308f5
// converted property getter: - (BOOL)hasSpaceAvailable;	// 0x31530899
- (void)open;	// 0x31530141
- (void)openCompleted;	// 0x315308c5
- (id)propertyForKey:(id)key;	// 0x31530555
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31530689
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3153055d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31530531
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31530559
- (id)streamError;	// 0x3153070d
// converted property getter: - (unsigned)streamStatus;	// 0x315306e5
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31530711
@end

