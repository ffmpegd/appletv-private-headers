/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _PFGarbageManager : NSObject {
@private
	NSMutableArray *_urlsToCleanUp;	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3233ffe1
+ (id)defaultInstance;	// 0x3233fff1
+ (void)initialize;	// 0x32340da5
- (id)_init__;	// 0x32340d41
- (BOOL)_isDeallocating;	// 0x32340011
- (BOOL)_tryRetain;	// 0x32340015
- (id)autorelease;	// 0x32340019
- (void)doCleanupForURL:(id)url;	// 0x32340dd9
- (void)registerURLForCleanup:(id)cleanup;	// 0x32340eb5
- (void)release;	// 0x3234000d
- (void)removeDirectory:(id)directory;	// 0x32340849
- (id)retain;	// 0x32340001
- (unsigned)retainCount;	// 0x32340005
- (id)temporaryLinksDirectoryForStore:(id)store;	// 0x323407e9
@end

