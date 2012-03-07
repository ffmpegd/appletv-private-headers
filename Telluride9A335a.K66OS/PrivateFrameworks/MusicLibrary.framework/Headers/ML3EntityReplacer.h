/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface ML3EntityReplacer : NSObject {
@private
	CFDictionaryRef _propertyToIndexPair;	// 4 = 0x4
	unsigned _statementCount;	// 8 = 0x8
	sqlite3_stmt **_statements;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isOpen) BOOL open;	// G=0x309b67e1; 
- (id)initWithEntityClass:(Class)entityClass properties:(id)properties databaseHandle:(sqlite3 *)handle;	// 0x309b5da9
- (void)bindDouble:(double)aDouble forProperty:(id)property;	// 0x309b66d5
- (void)bindInt:(int)int forProperty:(id)property;	// 0x309b66b1
- (void)bindNullForProperty:(id)property;	// 0x309b6691
- (void)bindPersistentID:(long long)anId;	// 0x309b67f9
- (void)clearBindings;	// 0x309b68c5
- (void)close;	// 0x309b6915
- (void)dealloc;	// 0x309b5d69
// declared property getter: - (BOOL)isOpen;	// 0x309b67e1
- (BOOL)perform;	// 0x309b66f9
- (void)statementForProperty:(id)property usingBlock:(id)block;	// 0x309b6459
@end
