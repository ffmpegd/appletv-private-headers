/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableCharacterSet.h"
#import "Foundation-Structs.h"


__attribute__((visibility("hidden")))
@interface NSCFCharacterSet : NSMutableCharacterSet {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3065a5e1
- (void)addCharactersInRange:(NSRange)range;	// 0x3065a6b5
- (void)addCharactersInString:(id)string;	// 0x3065a6c5
- (BOOL)allowsWeakReference;	// 0x3065a571
- (id)bitmapRepresentation;	// 0x3065a65d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x3065a61d
- (Class)classForArchiver;	// 0x3065a6f1
- (Class)classForKeyedArchiver;	// 0x3065a731
- (id)copyWithZone:(NSZone *)zone;	// 0x3065a5e5
- (void)encodeWithCoder:(id)coder;	// 0x3065a741
- (void)finalize;	// 0x3065a59d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x3065a6dd
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x3065a6d5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x3065a64d
- (unsigned)hash;	// 0x3065a559
- (void)invert;	// 0x3065a6e5
- (id)invertedSet;	// 0x3065a689
- (BOOL)isEqual:(id)equal;	// 0x3065a541
- (BOOL)isSupersetOfSet:(id)set;	// 0x3065a63d
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x3065a62d
- (void)makeCharacterSetCompact;	// 0x3065a6e9
- (void)makeCharacterSetFast;	// 0x3065a6ed
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3065a601
- (oneway void)release;	// 0x3065a56d
- (void)removeCharactersInRange:(NSRange)range;	// 0x3065a6bd
- (void)removeCharactersInString:(id)string;	// 0x3065a6cd
- (id)retain;	// 0x3065a55d
- (unsigned)retainCount;	// 0x3065a599
- (BOOL)retainWeakReference;	// 0x3065a585
@end

