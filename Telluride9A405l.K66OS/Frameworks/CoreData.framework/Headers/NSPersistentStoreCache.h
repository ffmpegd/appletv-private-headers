/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSPersistentStoreCache : NSObject {
@private
	id _externalData;	// 4 = 0x4
	unsigned _capacity;	// 8 = 0x8
}
+ (void)initialize;	// 0x33f678f9
- (id)init;	// 0x33f48835
- (void)_growRegistrationCollectionTo:(unsigned)to;	// 0x33fd5b3d
- (void)dealloc;	// 0x33f5fd5d
- (void)decrementRefCountForObjectID:(id)objectID;	// 0x33f5d335
- (id)externalDataForObjectID:(id)objectID timestamp:(double)timestamp;	// 0x33f5ab69
- (id)externalDataForSourceObjectID:(id)sourceObjectID key:(id)key timestamp:(double)timestamp;	// 0x33fd5b41
- (void)forgetAllExternalData;	// 0x33fd5c6d
- (void)forgetExternalDataForObjectID:(id)objectID;	// 0x33f5d399
- (void)incrementRefCountForObjectID:(id)objectID;	// 0x33fd5c41
- (unsigned)optionsForObjectID:(id)objectID;	// 0x33fd5be9
- (int)refCountForObjectID:(id)objectID;	// 0x33fd5c15
- (void)registerExternalData:(id)data forObjectID:(id)objectID options:(unsigned)options;	// 0x33f5597d
- (void)registerExternalData:(id)data forSourceObjectID:(id)sourceObjectID key:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x33fd5ba9
@end
