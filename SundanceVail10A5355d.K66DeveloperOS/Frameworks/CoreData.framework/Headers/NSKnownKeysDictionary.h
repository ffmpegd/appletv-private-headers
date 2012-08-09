/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableDictionary.h> // Unknown library
#import "CoreData-Structs.h"


@interface NSKnownKeysDictionary : NSMutableDictionary {
}
+ (id)alloc;	// 0x33473941
+ (id)allocWithZone:(NSZone *)zone;	// 0x334d5959
+ (id)newInstanceWithSearchStrategy:(id)searchStrategy inData:(id)data;	// 0x334d5975
- (id)initForKeys:(id)keys;	// 0x334d597d
- (id)initWithSearchStrategy:(id)searchStrategy;	// 0x334d5979
- (void)_setValues:(id *)values retain:(BOOL)retain;	// 0x334d5995
- (void)getKeys:(id *)keys;	// 0x334d5999
- (void)getObjects:(id *)objects;	// 0x334d599d
- (void)getObjects:(id *)objects andKeys:(id *)keys;	// 0x334d59a1
- (id)mapping;	// 0x334d5981
- (void)setValue:(id)value atIndex:(unsigned)index;	// 0x334d598d
- (void)setValues:(id *)values;	// 0x334d5991
- (id)valueAtIndex:(unsigned)index;	// 0x334d5989
- (const id *)values;	// 0x334d5985
@end
