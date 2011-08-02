/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMUMachOHeader, NSArray;

@interface VMUDyld : NSObject {
	VMUMachOHeader *_dyldMachOHeader;	// 4 = 0x4
	NSArray *_machOHeaders;	// 8 = 0x8
}
@property(readonly, retain) NSArray *machOHeaders;	// G=0x3411ff39; converted property
+ (id)dyldWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x3412005d
+ (id)nativeSharedCachePath;	// 0x34120129
+ (id)nativeSharedCacheTimestamp;	// 0x34120095
- (id)initWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x3411ffdd
- (void)dealloc;	// 0x3411ff49
- (id)findMachOHeadersInMemory:(id)memory;	// 0x341201f1
// converted property getter: - (id)machOHeaders;	// 0x3411ff39
- (id)name;	// 0x3411ffbd
@end
