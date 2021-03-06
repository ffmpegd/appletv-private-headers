/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library

@class SSXPCConnection, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SSEntity : NSObject <SSXPCCoding> {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	NSMutableDictionary *_localExternalValues;	// 12 = 0xc
	NSMutableDictionary *_localValues;	// 16 = 0x10
	long long _pid;	// 20 = 0x14
}
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;	// G=0x34e722f9; S=0x34e7274d; 
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;	// G=0x34e724a9; S=0x34e7282d; 
@property(readonly, assign, getter=_isManaged) BOOL _managed;	// G=0x34e72659; 
@property(readonly, assign) long long _persistentIdentifier;	// G=0x34e72731; 
@property(readonly, assign) BOOL exists;	// G=0x34e71035; 
+ (long long)_existsMessage;	// 0x34e71fe1
+ (long long)_getExternalValuesMessage;	// 0x34e71fe9
+ (long long)_getValueMessage;	// 0x34e71ff1
+ (long long)_setExternalValuesMessage;	// 0x34e71ff9
+ (long long)_setValuesMessage;	// 0x34e72001
- (id)init;	// 0x34e70ecd
- (void)_addCachedExternalValues:(id)values;	// 0x34e72009
- (void)_addCachedPropertyValues:(id)values;	// 0x34e72105
- (void)_becomeManagedOnConnection:(id)connection;	// 0x34e72201
- (id)_clientValueForProperty:(id)property databaseValue:(id)value;	// 0x34e722f5
- (void)_getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count message:(long long)message;	// 0x34e7290d
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x34e70f41
// declared property getter: - (BOOL)_isManaged;	// 0x34e72659
// declared property getter: - (id)_localExternalValues;	// 0x34e722f9
// declared property getter: - (id)_localValues;	// 0x34e724a9
// declared property getter: - (long long)_persistentIdentifier;	// 0x34e72731
- (void)_resetLocalIVars;	// 0x34e72749
// declared property setter: - (void)_setLocalExternalValues:(id)values;	// 0x34e7274d
// declared property setter: - (void)_setLocalValues:(id)values;	// 0x34e7282d
- (id)copyXPCEncoding;	// 0x34e72e8d
- (void)dealloc;	// 0x34e70fa9
- (id)description;	// 0x34e71efd
// declared property getter: - (BOOL)exists;	// 0x34e71035
- (void)getValues:(id *)values forExternalProperties:(const id *)externalProperties count:(unsigned)count;	// 0x34e718d1
- (void)getValues:(id *)values forProperties:(const id *)properties count:(unsigned)count;	// 0x34e713a9
- (unsigned)hash;	// 0x34e71f6d
- (BOOL)isEqual:(id)equal;	// 0x34e71f7d
- (void)resetCachedExternalProperties:(const id *)properties count:(unsigned)count;	// 0x34e71925
- (void)resetCachedProperties:(const id *)properties count:(unsigned)count;	// 0x34e719f5
- (BOOL)setExternalValuesWithDictionary:(id)dictionary;	// 0x34e71ac5
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x34e713fd
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x34e71499
- (id)valueForExternalProperty:(id)externalProperty;	// 0x34e71ed1
- (id)valueForProperty:(id)property;	// 0x34e718a5
@end

