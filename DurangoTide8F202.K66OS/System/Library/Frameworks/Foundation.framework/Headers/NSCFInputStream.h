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
@property(assign) id delegate;	// G=0x324996b1; S=0x324996e5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x324997ed
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x324990a5
- (id)initWithData:(id)data;	// 0x32499a5d
- (id)initWithFileAtPath:(id)path;	// 0x324995b1
- (id)initWithURL:(id)url;	// 0x32499a79
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x32499725
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x324996d1
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x3249975d
- (void)close;	// 0x324996a5
// converted property getter: - (id)delegate;	// 0x324996b1
- (void)finalize;	// 0x32499381
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x324997b1
- (BOOL)hasBytesAvailable;	// 0x324997d5
- (unsigned)hash;	// 0x324992e9
- (BOOL)isEqual:(id)equal;	// 0x324992c9
- (void)open;	// 0x32499699
- (id)propertyForKey:(id)key;	// 0x32499a99
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x324997a1
- (oneway void)release;	// 0x32499321
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3249976d
- (id)retain;	// 0x32499305
- (unsigned)retainCount;	// 0x32499339
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x32499735
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x324996e5
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x32499715
- (id)streamError;	// 0x32499ab9
- (unsigned)streamStatus;	// 0x32499795
@end
