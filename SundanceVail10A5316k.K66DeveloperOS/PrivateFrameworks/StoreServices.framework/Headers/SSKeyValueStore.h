/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;

@interface SSKeyValueStore : NSObject {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
}
- (id)init;	// 0x34e85d75
- (void)dealloc;	// 0x34e85df1
- (void)getValueForDomain:(id)domain key:(id)key usingBlock:(id)block;	// 0x34e85e3d
- (void)getValuesForDomain:(id)domain keys:(const id *)keys count:(unsigned)count usingBlock:(id)block;	// 0x34e85f61
- (void)removeAllValuesForDomain:(id)domain;	// 0x34e8620d
- (void)removeAllValuesForDomain:(id)domain completionBlock:(id)block;	// 0x34e86221
- (void)removeAllValuesWithCompletionBlock:(id)completionBlock;	// 0x34e86359
- (void)setValue:(id)value forDomain:(id)domain key:(id)key;	// 0x34e86479
- (void)setValue:(id)value forDomain:(id)domain key:(id)key completionBlock:(id)block;	// 0x34e8649d
- (void)setValuesWithDictionary:(id)dictionary forDomain:(id)domain;	// 0x34e865a9
- (void)setValuesWithDictionary:(id)dictionary forDomain:(id)domain completionBlock:(id)block;	// 0x34e865cd
@end
