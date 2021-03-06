/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSArray.h> // Unknown library


@interface NSArray (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x33b45725
@end

@interface NSArray (FirstRest)
- (id)first;	// 0x33b458dd
- (id)firstObject;	// 0x33b458a5
- (id)head;	// 0x33b45941
- (id)rest;	// 0x33b458ed
- (id)tail;	// 0x33b45951
@end

@interface NSArray (Map)
- (id)map:(id)map;	// 0x33b45961
@end

@interface NSArray (Filter)
- (id)objectsPassingTest:(id)test;	// 0x33b45a99
@end

@interface NSArray (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x33b45ac9
@end

@interface NSArray (Serialization)
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x33b45b49
@end

@interface NSArray (Randomization)
+ (id)randomizedArrayFromArray:(id)array;	// 0x33b45bed
+ (id)shuffleArray:(id)array;	// 0x33b45bb5
@end

