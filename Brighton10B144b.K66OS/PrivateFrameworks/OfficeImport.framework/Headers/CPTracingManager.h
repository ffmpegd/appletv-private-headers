/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class TSMTraceBuffer;

@interface CPTracingManager : NSObject {
	TSMTraceBuffer *mBuffer;	// 4 = 0x4
	unsigned mCount;	// 8 = 0x8
}
+ (id)_singletonAlloc;	// 0x34b070b9
+ (id)allocWithZone:(NSZone *)zone;	// 0x34b0726d
+ (id)sharedManager;	// 0x34b070e9
- (id)autorelease;	// 0x34b072f9
- (id)copyWithZone:(NSZone *)zone;	// 0x34b072fd
- (void)dealloc;	// 0x34b07301
- (oneway void)release;	// 0x34b072f5
- (id)retain;	// 0x34b072e9
- (unsigned)retainCount;	// 0x34b072ed
- (void)setup;	// 0x34b07341
- (void)teardown;	// 0x34b07345
@end

