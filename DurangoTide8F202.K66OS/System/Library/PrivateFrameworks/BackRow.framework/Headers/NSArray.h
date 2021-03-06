/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSArray.h> // Unknown library


@interface NSArray (Randomization)
+ (id)randomizedArrayFromArray:(id)array;	// 0x32954e59
@end

@interface NSArray (Serialization)
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x32955211
@end

@interface NSArray (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x32954f99
@end

@interface NSArray (Filter)
- (id)objectsPassingTest:(id)test;	// 0x32955009
@end

@interface NSArray (Map)
- (id)map:(id)map;	// 0x32955031
@end

@interface NSArray (FirstRest)
- (id)first;	// 0x32955195
- (id)firstObject;	// 0x329551a9
- (id)head;	// 0x32955135
- (id)rest;	// 0x32955149
- (id)tail;	// 0x32955121
@end

@interface NSArray (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x328c2fe1
@end

