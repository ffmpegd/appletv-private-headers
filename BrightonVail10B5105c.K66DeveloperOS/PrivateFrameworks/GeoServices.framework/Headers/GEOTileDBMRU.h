/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class GEOTileKeyList, NSLock;

@interface GEOTileDBMRU : NSObject {
	GEOTileKeyList *_mru;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
}
- (id)init;	// 0x33962c91
- (void)addKey:(GEOTileKey *)key;	// 0x33962d8d
- (id)currentList;	// 0x33962de9
- (void)dealloc;	// 0x33962d29
@end
