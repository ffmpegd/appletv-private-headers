/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSOutputStream.h"


__attribute__((visibility("hidden")))
@interface __NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x334d576d; S=0x334d5771; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x334d5629
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x334d5625
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x334d5665
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x334d5695
- (id)initToMemory;	// 0x334d562d
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x334d5709
- (BOOL)_isDeallocating;	// 0x334d55d1
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x334d58dd
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x334d58c5
- (BOOL)_tryRetain;	// 0x334d55bd
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x334d58e5
- (void)close;	// 0x334d5769
// converted property getter: - (id)delegate;	// 0x334d576d
- (void)finalize;	// 0x334d55e1
- (BOOL)hasSpaceAvailable;	// 0x334d58b9
- (unsigned)hash;	// 0x334d55a5
- (BOOL)isEqual:(id)equal;	// 0x334d558d
- (void)open;	// 0x334d5765
- (id)propertyForKey:(id)key;	// 0x334d57ed
- (oneway void)release;	// 0x334d55b9
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x334d5855
- (id)retain;	// 0x334d55a9
- (unsigned)retainCount;	// 0x334d55dd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x334d5829
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x334d5771
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x334d5819
- (id)streamError;	// 0x334d5885
- (unsigned)streamStatus;	// 0x334d5881
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x334d58b1
@end
