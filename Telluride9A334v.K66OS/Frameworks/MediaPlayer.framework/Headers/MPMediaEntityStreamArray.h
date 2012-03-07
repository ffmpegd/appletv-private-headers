/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSArray.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSMutableArray, MPMediaQueryCriteria, MPMediaLibrary, MPMediaQuerySectionInfo;

@interface MPMediaEntityStreamArray : NSArray <NSCopying> {
	Class _entityClass;	// 4 = 0x4
	dispatch_queue_s *_queue;	// 8 = 0x8
	MPMediaQueryCriteria *_queryCriteria;	// 12 = 0xc
	MPMediaLibrary *_library;	// 16 = 0x10
	int _containedMediaTypes;	// 20 = 0x14
	NSMutableArray *_entities;	// 24 = 0x18
	CFArrayRef _entitiesSemaphores;	// 28 = 0x1c
	unsigned _entitiesSemaphoreIndex;	// 32 = 0x20
	unsigned _count;	// 36 = 0x24
	MPMediaQuerySectionInfo *_sectionInfo;	// 40 = 0x28
	CFArrayRef _countAndSectionInfoSemaphores;	// 44 = 0x2c
	unsigned _hasCountAndSectionInfo : 1;	// 48 = 0x30
	CFArrayRef _isEmptySemaphores;	// 52 = 0x34
	int _retainCount;	// 56 = 0x38
	unsigned _isEmpty : 1;	// 60 = 0x3c
	unsigned _hasIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingIsEmpty : 1;	// 60 = 0x3c
	unsigned _hasStartedLoadingEntities : 1;	// 60 = 0x3c
}
@property(assign, nonatomic) int containedMediaTypes;	// G=0x34e52399; S=0x34e523a9; @synthesize=_containedMediaTypes
@property(readonly, assign) unsigned count;	// G=0x34e511a9; converted property
@property(readonly, assign, nonatomic) MPMediaLibrary *library;	// G=0x34e518e1; 
@property(readonly, assign, nonatomic) MPMediaQueryCriteria *queryCriteria;	// G=0x34e523b9; @synthesize=_queryCriteria
@property(readonly, assign, nonatomic) MPMediaQuerySectionInfo *sectionInfo;	// G=0x34e51351; 
- (id)init;	// 0x34e50be9
- (id)initWithCoder:(id)coder;	// 0x34e50f85
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;	// 0x34e50c6d
- (BOOL)MPIsEmpty;	// 0x34e50ff9
- (void)_commonInitMPMediaEntityStreamArray;	// 0x34e50c35
- (void)_onQueueAddObject:(id)object;	// 0x34e51bc5
- (void)_onQueueStartLoadingEntities;	// 0x34e52209
- (void)_onQueueStartLoadingIsEmpty;	// 0x34e51f35
- (void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping representativeItemIdentifier:(long long)identifier5;	// 0x34e51dc5
- (void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x34e51c71
// declared property getter: - (int)containedMediaTypes;	// 0x34e52399
- (id)copyWithZone:(NSZone *)zone;	// 0x34e50fe9
// converted property getter: - (unsigned)count;	// 0x34e511a9
- (void)dealloc;	// 0x34e50ea5
// declared property getter: - (id)library;	// 0x34e518e1
- (id)objectAtIndex:(unsigned)index;	// 0x34e515bd
- (id)propertiesToFetch;	// 0x34e518f1
// declared property getter: - (id)queryCriteria;	// 0x34e523b9
// declared property getter: - (id)sectionInfo;	// 0x34e51351
// declared property setter: - (void)setContainedMediaTypes:(int)types;	// 0x34e523a9
- (void)setCount:(unsigned)count sectionInfo:(id)info;	// 0x34e51a8d
- (void)setIsEmpty:(BOOL)empty;	// 0x34e51969
@end

