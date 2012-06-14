/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSMutableDictionary.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderDictionary : NSMutableDictionary {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3278e6fd
+ (id)immutablePlaceholder;	// 0x326e963d
+ (void)initialize;	// 0x327024ed
+ (id)mutablePlaceholder;	// 0x326f0b6d
- (id)init;	// 0x326f0b7d
- (id)initWithCapacity:(unsigned)capacity;	// 0x326f0bdd
- (id)initWithContentsOfFile:(id)file;	// 0x326f7b61
- (id)initWithContentsOfURL:(id)url;	// 0x327231d5
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned)count;	// 0x326e964d
- (unsigned)count;	// 0x3278e725
- (void)dealloc;	// 0x3278e721
- (id)keyEnumerator;	// 0x3278e8ad
- (id)objectForKey:(id)key;	// 0x3278e7e9
- (oneway void)release;	// 0x3278e715
- (void)removeObjectForKey:(id)key;	// 0x3278ea35
- (id)retain;	// 0x3278e711
- (unsigned)retainCount;	// 0x3278e719
- (void)setObject:(id)object forKey:(id)key;	// 0x3278e971
@end
