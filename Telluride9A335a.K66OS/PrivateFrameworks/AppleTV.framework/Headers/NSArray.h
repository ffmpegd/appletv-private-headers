/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSArray.h> // Unknown library


@interface NSArray (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x342a1725
@end

@interface NSArray (FirstRest)
- (id)first;	// 0x342a18dd
- (id)firstObject;	// 0x342a18a5
- (id)head;	// 0x342a1941
- (id)rest;	// 0x342a18ed
- (id)tail;	// 0x342a1951
@end

@interface NSArray (Map)
- (id)map:(id)map;	// 0x342a1961
@end

@interface NSArray (Filter)
- (id)objectsPassingTest:(id)test;	// 0x342a1a99
@end

@interface NSArray (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x342a1ac9
@end

@interface NSArray (Serialization)
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x342a1b49
@end

@interface NSArray (Randomization)
+ (id)randomizedArrayFromArray:(id)array;	// 0x342a1bed
+ (id)shuffleArray:(id)array;	// 0x342a1bb5
@end

