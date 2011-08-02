/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCopying.h"
#import <NSArray.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPMediaQueryCriteria, NSMutableArray, MPMediaQuerySectionInfo, MPMediaLibrary;

@interface MPMediaEntityStreamArray : NSArray <NSCopying> {
	int _entityType;	// 4 = 0x4
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
@property(assign, nonatomic) int containedMediaTypes;	// G=0x3379c85d; S=0x3379c86d; @synthesize=_containedMediaTypes
@property(readonly, assign) unsigned count;	// G=0x337a23e9; converted property
@property(readonly, assign, nonatomic) MPMediaLibrary *library;	// G=0x3379c83d; 
@property(readonly, assign, nonatomic) MPMediaQueryCriteria *queryCriteria;	// G=0x3379c84d; @synthesize=_queryCriteria
@property(readonly, copy, nonatomic) MPMediaQuerySectionInfo *sectionInfo;	// G=0x337a22f9; 
- (id)init;	// 0x3379cf79
- (id)initWithCoder:(id)coder;	// 0x3379cf1d
- (id)initWithEntityType:(int)entityType queryCriteria:(id)criteria library:(id)library;	// 0x3379f0d1
- (BOOL)MPIsEmpty;	// 0x337a1555
- (void)_commonInitMPMediaEntityStreamArray;	// 0x337a12ad
- (void)_onQueueAddObject:(id)object;	// 0x337a197d
- (void)_onQueueStartLoadingEntities;	// 0x337a1ae5
- (void)_onQueueStartLoadingIsEmpty;	// 0x337a1bbd
- (void)addCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria grouping:(int)grouping;	// 0x337a13a9
- (void)addItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x337a14c1
// declared property getter: - (int)containedMediaTypes;	// 0x3379c85d
- (id)copyWithZone:(NSZone *)zone;	// 0x3379cf09
// converted property getter: - (unsigned)count;	// 0x337a23e9
- (void)dealloc;	// 0x337a12e1
// declared property getter: - (id)library;	// 0x3379c83d
- (id)objectAtIndex:(unsigned)index;	// 0x337a2201
- (id)propertiesToFetch;	// 0x3379cec1
// declared property getter: - (id)queryCriteria;	// 0x3379c84d
// declared property getter: - (id)sectionInfo;	// 0x337a22f9
// declared property setter: - (void)setContainedMediaTypes:(int)types;	// 0x3379c86d
- (void)setCount:(unsigned)count sectionInfo:(id)info;	// 0x337a1871
- (void)setIsEmpty:(BOOL)empty;	// 0x337a18c1
@end
