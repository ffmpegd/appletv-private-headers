/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject {
	void *_reserved;	// 4 = 0x4
	void *_reserved1;	// 8 = 0x8
	void *_reserved2;	// 12 = 0xc
	NSMutableArray *_entityMappings;	// 16 = 0x10
	NSMutableDictionary *_entityMappingsByName;	// 20 = 0x14
	modelMappingFlags _modelMappingFlags;	// 24 = 0x18
}
@property(retain) NSMutableArray *entityMappings;	// G=0x33d45a35; S=0x33d45a45; converted property
@property(readonly, retain) NSMutableDictionary *entityMappingsByName;	// G=0x33d45b39; converted property
+ (BOOL)_isInferredMappingModel:(id)model;	// 0x33d45cc9
+ (id)_mappingModelFromPaths:(id)paths forSourceHashes:(id)sourceHashes destinationHashes:(id)hashes;	// 0x33d44d25
+ (id)_modelPathsFromBundles:(id)bundles;	// 0x33d45b69
+ (id)inferredMappingModelForSourceModel:(id)sourceModel destinationModel:(id)model error:(id *)error;	// 0x33d45259
+ (void)initialize;	// 0x33d44b9d
+ (id)mappingModelFromBundles:(id)bundles forSourceModel:(id)sourceModel destinationModel:(id)model;	// 0x33d44fdd
+ (int)migrationDebugLevel;	// 0x33d45b49
+ (void)setMigrationDebugLevel:(int)level;	// 0x33d45b59
- (id)init;	// 0x33d455e9
- (id)initWithCoder:(id)coder;	// 0x33d45779
- (id)initWithContentsOfURL:(id)url;	// 0x33d455fd
- (void)_addEntityMapping:(id)mapping;	// 0x33d45e89
- (void)_createCachesAndOptimizeState;	// 0x33d45fc1
- (id)_destinationEntityVersionHashesByName;	// 0x33d46215
- (id)_initWithEntityMappings:(id)entityMappings;	// 0x33d45dc1
- (void)_setIsEditable:(BOOL)editable;	// 0x33d45fc5
- (id)_sourceEntityVersionHashesByName;	// 0x33d460bd
- (void)_throwIfNotEditable;	// 0x33d4605d
- (id)copyWithZone:(NSZone *)zone;	// 0x33d45819
- (void)dealloc;	// 0x33d4569d
- (id)description;	// 0x33d459d5
- (void)encodeWithCoder:(id)coder;	// 0x33d45715
// converted property getter: - (id)entityMappings;	// 0x33d45a35
// converted property getter: - (id)entityMappingsByName;	// 0x33d45b39
- (BOOL)isEditable;	// 0x33d45fa9
- (BOOL)isEqual:(id)equal;	// 0x33d45955
// converted property setter: - (void)setEntityMappings:(id)mappings;	// 0x33d45a45
@end

