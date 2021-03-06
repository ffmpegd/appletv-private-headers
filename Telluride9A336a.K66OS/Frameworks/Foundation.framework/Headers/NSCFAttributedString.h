/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableAttributedString.h"


__attribute__((visibility("hidden")))
@interface NSCFAttributedString : NSMutableAttributedString {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3374cd2d
- (BOOL)_isDeallocating;	// 0x3374ccdd
- (BOOL)_tryRetain;	// 0x3374ccc9
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x3374d0d5
- (void)addAttributes:(id)attributes range:(NSRange)range;	// 0x3374d0a9
- (void)appendAttributedString:(id)string;	// 0x3374d021
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3374cd41
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x3374cd95
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x3374cd4d
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x3374cd35
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x3374cd79
- (Class)classForCoder;	// 0x3374ce05
- (id)copyWithZone:(NSZone *)zone;	// 0x3374cdcd
- (void)deleteCharactersInRange:(NSRange)range;	// 0x3374d051
- (void)finalize;	// 0x3374cce9
- (void)insertAttributedString:(id)string atIndex:(unsigned)index;	// 0x3374cff9
- (BOOL)isEqual:(id)equal;	// 0x3374ccb1
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x3374cdb5
- (unsigned)length;	// 0x3374cd3d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3374cde9
- (oneway void)release;	// 0x3374cca9
- (void)removeAttribute:(id)attribute range:(NSRange)range;	// 0x3374d115
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x3374cfcd
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3374ce45
- (id)retain;	// 0x3374cc99
- (unsigned)retainCount;	// 0x3374ccad
- (void)setAttributedString:(id)string;	// 0x3374d079
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x3374cfa1
- (id)string;	// 0x3374cd31
@end

