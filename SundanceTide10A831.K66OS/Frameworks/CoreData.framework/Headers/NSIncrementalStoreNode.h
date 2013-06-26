/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {
	NSManagedObjectID *_objectID;	// 4 = 0x4
	unsigned long long _versionNumber;	// 8 = 0x8
	id _propertyCache;	// 16 = 0x10
	void *_reserved1;	// 20 = 0x14
}
@property(readonly, retain) NSManagedObjectID *objectID;	// G=0x33e10319; converted property
+ (void)initialize;	// 0x33e0fdad
- (id)initWithObjectID:(id)objectID withValues:(id)values version:(unsigned long long)version;	// 0x33e0fdc9
- (id)_propertyCache;	// 0x33e10429
- (id)_snapshot_;	// 0x33e10361
- (unsigned)_versionNumber;	// 0x33e10365
- (void)dealloc;	// 0x33e1007d
- (const id *)knownKeyValuesPointer;	// 0x33e10341
// converted property getter: - (id)objectID;	// 0x33e10319
- (void)updateWithValues:(id)values version:(unsigned long long)version;	// 0x33e100f5
- (id)valueForPropertyDescription:(id)propertyDescription;	// 0x33e10375
- (unsigned long long)version;	// 0x33e10329
@end
