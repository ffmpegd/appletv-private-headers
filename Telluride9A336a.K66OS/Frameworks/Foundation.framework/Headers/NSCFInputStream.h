/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSInputStream.h> // Unknown library
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFInputStream : NSInputStream {
}
@property(assign) id delegate;	// G=0x336e6aa9; S=0x336e6aad; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x336e69ed
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x336e69e9
- (id)initWithData:(id)data;	// 0x336e69f5
- (id)initWithFileAtPath:(id)path;	// 0x336e6a15
- (id)initWithURL:(id)url;	// 0x336e6a7d
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x336e6c3d
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x336e6c25
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x336e6c45
- (BOOL)allowsWeakReference;	// 0x336e6979
- (void)close;	// 0x336e6aa5
// converted property getter: - (id)delegate;	// 0x336e6aa9
- (void)finalize;	// 0x336e69a5
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x336e6bf5
- (BOOL)hasBytesAvailable;	// 0x336e6c19
- (unsigned)hash;	// 0x336e6961
- (BOOL)isEqual:(id)equal;	// 0x336e6949
- (void)open;	// 0x336e6aa1
- (id)propertyForKey:(id)key;	// 0x336e6b29
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x336e6bed
- (oneway void)release;	// 0x336e6975
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x336e6b91
- (id)retain;	// 0x336e6965
- (unsigned)retainCount;	// 0x336e69a1
- (BOOL)retainWeakReference;	// 0x336e698d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x336e6b65
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x336e6aad
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x336e6b55
- (id)streamError;	// 0x336e6bc1
- (unsigned)streamStatus;	// 0x336e6bbd
@end

