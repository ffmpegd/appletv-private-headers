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
@property(readonly, assign, nonatomic) NSArray *aliases;	// G=0x33ef18d5; @dynamic
@property(assign, nonatomic) BOOL colorFailures;	// G=0x33ef24e1; S=0x33ef24f1; @synthesize=_color
@property(assign, nonatomic) BOOL engineeringMode;	// G=0x33ef24c1; S=0x33ef24d1; @synthesize=_engMode
+ (id)sharedVars;	// 0x33ef1899
- (id)init;	// 0x33ef18fd
- (unsigned)__iterateList:(void **)list withOMPair:(objMapPair)ompair andBlock:(id)block;	// 0x33ef1079
- (BOOL)_addAlias:(id)alias forProperty:(objc_property *)property andObject:(id)object;	// 0x33ef144d
- (unsigned)_addExports:(id)exports toOMPair:(objMapPair)ompair;	// 0x33ef1261
- (void)_addMappedInstance:(id)instance;	// 0x33ef0aa9
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair;	// 0x33ef1055
- (BOOL)_addMethod:(SEL)method toOMPair:(objMapPair)ompair withName:(id)name;	// 0x33ef0ef9
- (unsigned)_addMethods:(objc_method **)methods toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x33ef1195
- (unsigned)_addProperties:(objc_property **)properties toOMPair:(objMapPair)ompair freeList:(BOOL)list;	// 0x33ef10e9
- (BOOL)_addProperty:(objc_property *)property toOMPair:(objMapPair)ompair;	// 0x33ef0c75
- (id)_checkIsQualifiedAndGetComponents:(id)components;	// 0x33ef05cd
- (id)_classMapForClassNamed:(id)classNamed create:(BOOL)create;	// 0x33ef08dd
- (id)_classMapForObject:(id)object create:(BOOL)create;	// 0x33ef0a2d
- (id)_execute:(id)execute;	// 0x33ef0731
- (id)_handlerForType:(const char *)type;	// 0x33ef0571
- (void)_interFailure:(id)failure method:(id)method desc:(id)desc;	// 0x33ef14dd
- (id)_invocationForAlias:(id)alias;	// 0x33ef0ba5
- (id)_invocationForName:(id)name isFullyQualified:(BOOL *)qualified;	// 0x33ef0c35
- (id)_invocationForQualifiedName:(id)qualifiedName;	// 0x33ef0bcd
- (id)_mappedInstanceForType:(Class)type;	// 0x33ef0b4d
- (id)_mappedProperty:(id)property forClassNamed:(id)classNamed;	// 0x33ef06f1
- (id)_methodMapForClassNamed:(id)classNamed;	// 0x33ef09f1
- (id)_methodMapForObject:(id)object;	// 0x33ef0a6d
- (BOOL)_objectIsMapped:(id)mapped;	// 0x33ef0689
- (BOOL)_typeIsMapped:(id)mapped;	// 0x33ef0645
- (BOOL)_typeIsValid:(const char *)valid;	// 0x33ef0531
- (BOOL)addAlias:(id)alias forPropertyNamed:(id)propertyNamed andClassNamed:(id)named;	// 0x33ef208d
- (unsigned)addMappedInstance:(id)instance;	// 0x33ef1ead
- (void)addMapping:(id)mapping;	// 0x33ef1a65
// declared property getter: - (id)aliases;	// 0x33ef18d5
// declared property getter: - (BOOL)colorFailures;	// 0x33ef24e1
- (void)dealloc;	// 0x33ef19c9
// declared property getter: - (BOOL)engineeringMode;	// 0x33ef24c1
- (id)interpolate:(id)interpolate;	// 0x33ef21d9
- (BOOL)removeMappedInstance:(id)instance;	// 0x33ef1c41
// declared property setter: - (void)setColorFailures:(BOOL)failures;	// 0x33ef24f1
// declared property setter: - (void)setEngineeringMode:(BOOL)mode;	// 0x33ef24d1
@end

