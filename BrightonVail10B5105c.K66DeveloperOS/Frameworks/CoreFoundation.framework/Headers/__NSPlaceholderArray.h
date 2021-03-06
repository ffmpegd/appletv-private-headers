/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableArray.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderArray : NSMutableArray {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x35730671
+ (id)immutablePlaceholder;	// 0x35687b11
+ (void)initialize;	// 0x356b4531
+ (id)mutablePlaceholder;	// 0x35687299
- (id)init;	// 0x3569447d
- (id)initWithCapacity:(unsigned)capacity;	// 0x35693c1d
- (id)initWithContentsOfFile:(id)file;	// 0x356dbb49
- (id)initWithContentsOfURL:(id)url;	// 0x35730595
- (id)initWithObjects:(const id *)objects count:(unsigned)count;	// 0x356872a9
- (unsigned)count;	// 0x357306a9
- (void)dealloc;	// 0x35730695
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x35730839
- (id)objectAtIndex:(unsigned)index;	// 0x35730771
- (oneway void)release;	// 0x35730689
- (void)removeObjectAtIndex:(unsigned)index;	// 0x35730901
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x357309c9
- (id)retain;	// 0x35730685
- (unsigned)retainCount;	// 0x3573068d
@end

