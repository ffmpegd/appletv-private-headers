/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import "FactoryDiags-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSArray;

@interface OSDVars : NSObject {
	NSMutableDictionary *_map;	// 4 = 0x4
	NSMutableDictionary *_aliases;	// 8 = 0x8
	NSMutableDictionary *_aliasesToResolve;	// 12 = 0xc
	BOOL _engMode;	// 16 = 0x10
	BOOL _color;	// 17 = 0x11
}
@property(readonly, assign, nonatomic) NSArray *aliases;	// G=0x35116155; @dynamic
@property(assign, nonatomic) BOOL colorFailures;	// G=0x35116d61; S=0x35116d71; @synthesize=_color
@property(assign, nonatomic) BOOL engineeringMode;	// G=0x35116d41; S=0x35116d51; @synthesize=_engMode
+ (id)sharedVars;	// 0x35116119
- (id)init;	// 0x3511617d
- (unsigned)__iterateList:(void **)list withOMPair:(objMapPair)ompair andBlock:(id)block;	// 0x351158f9
- (BOOL)_addAlias:(id)alias forProperty:(objc_property *)property andObject:(id)object;	// 0x35115ccd
- (unsigned)_addExports:(id)exports toOMPair:(objMapPair)ompair;	// 0x35115ae1
- (void)_addMappedInstance:(id)instance;	// 0x35115329
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair;	// 0x351158d5
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair withName:(id)name;	// 0x35115779
- (unsigned)_addMethods:(objc_method **)methods toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x35115a15
- (unsigned)_addProperties:(objc_property **)properties toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x35115969
- (BOOL)_addProperty:(objc_property *)property toOMPair:(objMapPair)ompair;	// 0x351154f5
- (id)_checkIsQualifiedAndGetComponents:(id)components;	// 0x35114e4d
- (id)_classMapForClassNamed:(id)classNamed create:(BOOL)create;	// 0x3511515d
- (id)_classMapForObject:(id)object create:(BOOL)create;	// 0x351152ad
- (id)_execute:(id)execute;	// 0x35114fb1
- (id)_handlerForType:(const char *)type;	// 0x35114df1
- (void)_interFailure:(id)failure method:(id)method desc:(id)desc;	// 0x35115d5d
- (id)_invocationForAlias:(id)alias;	// 0x35115425
- (id)_invocationForName:(id)name isFullyQualified:(BOOL *)qualified;	// 0x351154b5
- (id)_invocationForQualifiedName:(id)qualifiedName;	// 0x3511544d
- (id)_mappedInstanceForType:(Class)type;	// 0x351153cd
- (id)_mappedProperty:(id)property forClassNamed:(id)classNamed;	// 0x35114f71
- (id)_methodMapForClassNamed:(id)classNamed;	// 0x35115271
- (id)_methodMapForObject:(id)object;	// 0x351152ed
- (BOOL)_objectIsMapped:(id)mapped;	// 0x35114f09
- (BOOL)_typeIsMapped:(id)mapped;	// 0x35114ec5
- (BOOL)_typeIsValid:(const char *)valid;	// 0x35114db1
- (BOOL)addAlias:(id)alias forPropertyNamed:(id)propertyNamed andClassNamed:(id)named;	// 0x3511690d
- (unsigned)addMappedInstance:(id)instance;	// 0x3511672d
- (void)addMapping:(id)mapping;	// 0x351162e5
// declared property getter: - (id)aliases;	// 0x35116155
// declared property getter: - (BOOL)colorFailures;	// 0x35116d61
- (void)dealloc;	// 0x35116249
// declared property getter: - (BOOL)engineeringMode;	// 0x35116d41
- (id)interpolate:(id)interpolate;	// 0x35116a59
- (BOOL)removeMappedInstance:(id)instance;	// 0x351164c1
// declared property setter: - (void)setColorFailures:(BOOL)failures;	// 0x35116d71
// declared property setter: - (void)setEngineeringMode:(BOOL)mode;	// 0x35116d51
@end
