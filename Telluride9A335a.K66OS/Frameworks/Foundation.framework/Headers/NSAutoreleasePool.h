/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSAutoreleasePool : NSObject {
@private
	void *_token;	// 4 = 0x4
	void *_reserved3;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	void *_reserved;	// 16 = 0x10
}
+ (void)addObject:(id)object;	// 0x3205be55
+ (id)allocWithZone:(NSZone *)zone;	// 0x320027e5
+ (BOOL)autoreleasePoolExists;	// 0x3205bfad
+ (unsigned)autoreleasedObjectCount;	// 0x3205bfa5
+ (void)enableFreedObjectCheck:(BOOL)check;	// 0x3205bfb5
+ (void)enableRelease:(BOOL)release;	// 0x3205bfb1
+ (unsigned)poolCountHighWaterMark;	// 0x3205bfb9
+ (unsigned)poolCountHighWaterResolution;	// 0x3205bfc1
+ (void)releaseAllPools;	// 0x3205bfa1
+ (void)resetTotalAutoreleasedObjects;	// 0x3205bfcd
+ (void)setPoolCountHighWaterMark:(unsigned)mark;	// 0x3205bfbd
+ (void)setPoolCountHighWaterResolution:(unsigned)resolution;	// 0x3205bfc5
+ (void)showPools;	// 0x3205bf9d
+ (unsigned)topAutoreleasePoolCount;	// 0x3205bfa9
+ (unsigned)totalAutoreleasedObjects;	// 0x3205bfc9
- (id)init;	// 0x3200285d
- (id)initWithCapacity:(unsigned)capacity;	// 0x3205be5d
- (void)addObject:(id)object;	// 0x3205be91
- (id)autorelease;	// 0x3205bf35
- (void)dealloc;	// 0x3205bf81
- (void)drain;	// 0x3200ba71
- (oneway void)release;	// 0x32004be1
- (id)retain;	// 0x3205bee5
- (unsigned)retainCount;	// 0x3205bf31
@end

