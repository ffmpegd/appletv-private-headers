/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSArray, VMUMachOHeader;

@interface VMUDyld : NSObject {
	VMUMachOHeader *_dyldMachOHeader;	// 4 = 0x4
	NSArray *_machOHeaders;	// 8 = 0x8
}
@property(readonly, retain) NSArray *machOHeaders;	// G=0x36dc7119; converted property
+ (id)dyldWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x36dc6471
+ (id)nativeSharedCachePath;	// 0x36dc64b1
+ (id)nativeSharedCacheTimestamp;	// 0x36dc6679
- (id)initWithMachOHeader:(id)machOHeader memory:(id)memory;	// 0x36dc6709
- (void)dealloc;	// 0x36dc7129
- (id)findMachOHeadersInMemory:(id)memory;	// 0x36dc6791
// converted property getter: - (id)machOHeaders;	// 0x36dc7119
- (id)name;	// 0x36dc70f9
@end
