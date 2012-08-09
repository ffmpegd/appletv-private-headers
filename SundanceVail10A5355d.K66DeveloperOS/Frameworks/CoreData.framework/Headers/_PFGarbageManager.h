/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableDictionary;

@interface _PFGarbageManager : NSObject {
	NSMutableDictionary *_storeLinksDirs;	// 4 = 0x4
	NSMutableDictionary *_filesToCleanUp;	// 8 = 0x8
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x334ba915
+ (id)defaultInstance;	// 0x334ba925
+ (void)initialize;	// 0x334ba8e1
- (void)_deleteIfNecessary:(id)necessary;	// 0x334ba951
- (void)_doCleanupForDir:(id)dir exceptURLs:(id)urls;	// 0x334ba9c9
- (id)_init__;	// 0x334ba851
- (BOOL)_isDeallocating;	// 0x334ba945
- (BOOL)_tryRetain;	// 0x334ba949
- (id)autorelease;	// 0x334ba94d
- (void)doCleanupForURL:(id)url;	// 0x334bb071
- (BOOL)registerURLForCleanup:(id)cleanup;	// 0x334bac2d
- (void)release;	// 0x334ba941
- (void)removeDirectory:(id)directory;	// 0x334bb02d
- (id)retain;	// 0x334ba935
- (unsigned)retainCount;	// 0x334ba939
- (id)temporaryLinksDirectoryForStore:(id)store;	// 0x334bae19
@end
