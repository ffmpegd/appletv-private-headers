/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "SSXPCCoding.h"

@class SSXPCConnection, NSDictionary, NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

@interface SSEntity : NSObject <SSXPCCoding> {
	SSXPCConnection *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSMutableDictionary *_localExternalValues;	// 12 = 0xc
	NSMutableDictionary *_localValues;	// 16 = 0x10
	long long _pid;	// 20 = 0x14
	NSArray *_dirtyLocalExternalProperties;	// 28 = 0x1c
	NSArray *_dirtyLocalProperties;	// 32 = 0x20
}
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;	// G=0x3586f821; S=0x3586fe35; 
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;	// G=0x3586f9d1; S=0x3586ff15; 
@property(readonly, assign, getter=_isManaged) BOOL _managed;	// G=0x3586fb81; 
@property(readonly, assign) long long _persistentIdentifier;	// G=0x3586fc59; 
@property(readonly, assign) BOOL exists;	// G=0x3586e5ad; 
+ (long long)_existsMessage;	// 0x3586f559
+ (long long)_getExternalValuesMessage;	// 0x3586f561
+ (long long)_getValueMessage;	// 0x3586f569
+ (long long)_setExternalValuesMessage;	// 0x3586f571
+ (long long)_setValuesMessage;	// 0x3586f579
- (id)init;	// 0x3586e41d
- (void)__addCachedExternalValues:(id)values;	// 0x3586fff5
- (void)__addCachedPropertyValues:(id)values;	// 0x35870061
- (void)_addCachedExternalValues:(id)values;	// 0x3586f581
- (void)_addCachedPropertyValues:(id)values;	// 0x3586f631
- (void)_becomeManagedOnConnection:(id)connection;	// 0x3586f72d
- (void)_getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count message:(long long)message;	// 0x358700cd
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x3586e491
// declared property getter: - (BOOL)_isManaged;	// 0x3586fb81
// declared property getter: - (id)_localExternalValues;	// 0x3586f821
// declared property getter: - (id)_localValues;	// 0x3586f9d1
// declared property getter: - (long long)_persistentIdentifier;	// 0x3586fc59
- (void)_resetLocalIVars;	// 0x3586fc71
- (void)_setDirtyCachedExternalProperties:(id)properties;	// 0x3586fc75
- (void)_setDirtyCachedProperties:(id)properties;	// 0x3586fd55
// declared property setter: - (void)_setLocalExternalValues:(id)values;	// 0x3586fe35
// declared property setter: - (void)_setLocalValues:(id)values;	// 0x3586ff15
- (id)copyXPCEncoding;	// 0x35870c6d
- (void)dealloc;	// 0x3586e4f9
- (id)description;	// 0x3586f475
// declared property getter: - (BOOL)exists;	// 0x3586e5ad
- (void)getValues:(id *)values forExternalProperties:(const id *)externalProperties count:(unsigned)count;	// 0x3586ee49
- (void)getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x3586e921
- (unsigned)hash;	// 0x3586f4e5
- (BOOL)isEqual:(id)equal;	// 0x3586f4f5
- (void)resetCachedExternalProperties:(const id *)properties count:(unsigned)count;	// 0x3586ee9d
- (void)resetCachedProperties:(const id *)properties count:(unsigned)count;	// 0x3586ef6d
- (BOOL)setExternalValuesWithDictionary:(id)dictionary;	// 0x3586f03d
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x3586e975
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x3586ea11
- (id)valueForExternalProperty:(id)externalProperty;	// 0x3586f449
- (id)valueForProperty:(id)property;	// 0x3586ee1d
@end

