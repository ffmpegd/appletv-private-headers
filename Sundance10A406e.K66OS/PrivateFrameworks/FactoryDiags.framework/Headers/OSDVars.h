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
@property(readonly, assign, nonatomic) NSArray *aliases;	// G=0x37395155; @dynamic
@property(assign, nonatomic) BOOL colorFailures;	// G=0x37395d61; S=0x37395d71; @synthesize=_color
@property(assign, nonatomic) BOOL engineeringMode;	// G=0x37395d41; S=0x37395d51; @synthesize=_engMode
+ (id)sharedVars;	// 0x37395119
- (id)init;	// 0x3739517d
- (unsigned)__iterateList:(void **)list withOMPair:(objMapPair)ompair andBlock:(id)block;	// 0x373948f9
- (BOOL)_addAlias:(id)alias forProperty:(objc_property *)property andObject:(id)object;	// 0x37394ccd
- (unsigned)_addExports:(id)exports toOMPair:(objMapPair)ompair;	// 0x37394ae1
- (void)_addMappedInstance:(id)instance;	// 0x37394329
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair;	// 0x373948d5
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair withName:(id)name;	// 0x37394779
- (unsigned)_addMethods:(objc_method **)methods toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x37394a15
- (unsigned)_addProperties:(objc_property **)properties toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x37394969
- (BOOL)_addProperty:(objc_property *)property toOMPair:(objMapPair)ompair;	// 0x373944f5
- (id)_checkIsQualifiedAndGetComponents:(id)components;	// 0x37393e4d
- (id)_classMapForClassNamed:(id)classNamed create:(BOOL)create;	// 0x3739415d
- (id)_classMapForObject:(id)object create:(BOOL)create;	// 0x373942ad
- (id)_execute:(id)execute;	// 0x37393fb1
- (id)_handlerForType:(const char *)type;	// 0x37393df1
- (void)_interFailure:(id)failure method:(id)method desc:(id)desc;	// 0x37394d5d
- (id)_invocationForAlias:(id)alias;	// 0x37394425
- (id)_invocationForName:(id)name isFullyQualified:(BOOL *)qualified;	// 0x373944b5
- (id)_invocationForQualifiedName:(id)qualifiedName;	// 0x3739444d
- (id)_mappedInstanceForType:(Class)type;	// 0x373943cd
- (id)_mappedProperty:(id)property forClassNamed:(id)classNamed;	// 0x37393f71
- (id)_methodMapForClassNamed:(id)classNamed;	// 0x37394271
- (id)_methodMapForObject:(id)object;	// 0x373942ed
- (BOOL)_objectIsMapped:(id)mapped;	// 0x37393f09
- (BOOL)_typeIsMapped:(id)mapped;	// 0x37393ec5
- (BOOL)_typeIsValid:(const char *)valid;	// 0x37393db1
- (BOOL)addAlias:(id)alias forPropertyNamed:(id)propertyNamed andClassNamed:(id)named;	// 0x3739590d
- (unsigned)addMappedInstance:(id)instance;	// 0x3739572d
- (void)addMapping:(id)mapping;	// 0x373952e5
// declared property getter: - (id)aliases;	// 0x37395155
// declared property getter: - (BOOL)colorFailures;	// 0x37395d61
- (void)dealloc;	// 0x37395249
// declared property getter: - (BOOL)engineeringMode;	// 0x37395d41
- (id)interpolate:(id)interpolate;	// 0x37395a59
- (BOOL)removeMappedInstance:(id)instance;	// 0x373954c1
// declared property setter: - (void)setColorFailures:(BOOL)failures;	// 0x37395d71
// declared property setter: - (void)setEngineeringMode:(BOOL)mode;	// 0x37395d51
@end

