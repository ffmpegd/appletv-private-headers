/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableData.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFData : NSMutableData {
	unsigned char _cfinfo[4];	// 4 = 0x4
	long _length;	// 8 = 0x8
	long _capacity;	// 12 = 0xc
	CFAllocatorRef _bytesDeallocator;	// 16 = 0x10
	char *_bytes;	// 20 = 0x14
}
@property(assign) unsigned length;	// G=0x34d944fd; S=0x34d94509; converted property
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34d944a5
- (BOOL)allowsWeakReference;	// 0x34d9443d
- (const void *)bytes;	// 0x34d94501
- (id)copyWithZone:(NSZone *)zone;	// 0x34d944a9
- (void)finalize;	// 0x34d94465
- (unsigned)hash;	// 0x34d94425
- (BOOL)isEqual:(id)equal;	// 0x34d9440d
// converted property getter: - (unsigned)length;	// 0x34d944fd
- (void *)mutableBytes;	// 0x34d94505
- (oneway void)release;	// 0x34d94439
- (id)retain;	// 0x34d94429
- (unsigned)retainCount;	// 0x34d94461
- (BOOL)retainWeakReference;	// 0x34d94451
// converted property setter: - (void)setLength:(unsigned)length;	// 0x34d94509
@end

