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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x302b15e1
- (void)addCharactersInRange:(NSRange)range;	// 0x302b16b5
- (void)addCharactersInString:(id)string;	// 0x302b16c5
- (BOOL)allowsWeakReference;	// 0x302b1571
- (id)bitmapRepresentation;	// 0x302b165d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x302b161d
- (Class)classForArchiver;	// 0x302b16f1
- (Class)classForKeyedArchiver;	// 0x302b1731
- (id)copyWithZone:(NSZone *)zone;	// 0x302b15e5
- (void)encodeWithCoder:(id)coder;	// 0x302b1741
- (void)finalize;	// 0x302b159d
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x302b16dd
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x302b16d5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x302b164d
- (unsigned)hash;	// 0x302b1559
- (void)invert;	// 0x302b16e5
- (id)invertedSet;	// 0x302b1689
- (BOOL)isEqual:(id)equal;	// 0x302b1541
- (BOOL)isSupersetOfSet:(id)set;	// 0x302b163d
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x302b162d
- (void)makeCharacterSetCompact;	// 0x302b16e9
- (void)makeCharacterSetFast;	// 0x302b16ed
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x302b1601
- (oneway void)release;	// 0x302b156d
- (void)removeCharactersInRange:(NSRange)range;	// 0x302b16bd
- (void)removeCharactersInString:(id)string;	// 0x302b16cd
- (id)retain;	// 0x302b155d
- (unsigned)retainCount;	// 0x302b1599
- (BOOL)retainWeakReference;	// 0x302b1585
@end
