/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


@interface NSKnownKeysDictionary : NSMutableDictionary {
}
+ (id)alloc;	// 0x33f30c25
+ (id)allocWithZone:(NSZone *)zone;	// 0x33f9c8d9
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x33fbeda9
- (id)initForKeys:(id)keys;	// 0x33f9ab8d
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x33f9ab89
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x33f8de41
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x33fbedad
- (void)getKeys:(id *)keys;	// 0x33f9aba5
- (void)getObjects:(id *)objects;	// 0x33f9aba9
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x33f9abad
- (const id)mapping;	// 0x33f9ab91
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x33f9ab9d
- (void)setValues:(id *)values;	// 0x33f9aba1
- (id)valueAtIndex:(unsigned)index;	// 0x33f9ab99
- (const id *)values;	// 0x33f9ab95
@end

