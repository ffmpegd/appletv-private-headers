/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSTemporaryObjectID.h"

@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
	id _store;	// 16 = 0x10
	_NS128bitWrapper *_uuid128;	// 20 = 0x14
}
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x33def265
- (BOOL)_isPersistentStoreAlive;	// 0x33def50d
- (id)_referenceData;	// 0x33def5d1
- (void)_setPersistentStore:(id)store;	// 0x33def525
- (id)_storeIdentifier;	// 0x33def4dd
- (void)dealloc;	// 0x33def3d5
- (void)finalize;	// 0x33def459
- (unsigned)hash;	// 0x33def45d
- (BOOL)isEqual:(id)equal;	// 0x33def569
- (id)persistentStore;	// 0x33def4fd
@end

