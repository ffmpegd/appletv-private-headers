/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSMutableAttributedString.h"

@class NSMutableString, NSMutableRLEArray;

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
@private
	NSMutableString *mutableString;	// 4 = 0x4
	NSMutableRLEArray *mutableAttributes;	// 8 = 0x8
	struct {
		unsigned attributeFixingDisabled : 8;
		unsigned  : 24;
	} fields;	// 12 = 0xc
}
+ (Class)_mutableStringClass;	// 0x32025db5
- (id)init;	// 0x32025a0d
- (id)initWithAttributedString:(id)attributedString;	// 0x32025b15
- (id)initWithCoder:(id)coder;	// 0x32028451
- (id)initWithString:(id)string;	// 0x32025a29
- (id)initWithString:(id)string attributes:(id)attributes;	// 0x320e4bc9
- (id)_runArrayHoldingAttributes;	// 0x32027b45
- (void)addAttribute:(id)attribute value:(id)value range:(NSRange)range;	// 0x320e4e85
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x320289e5
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x320e4fb1
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x32028a29
- (Class)classForCoder;	// 0x320e5131
- (void)dealloc;	// 0x32027b99
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x32026101
- (void)finalize;	// 0x320e4d19
- (unsigned)length;	// 0x320289c5
- (void)replaceCharactersInRange:(NSRange)range withAttributedString:(id)attributedString;	// 0x320e4d45
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x32025f39
- (void)setAttributes:(id)attributes range:(NSRange)range;	// 0x32027321
- (id)string;	// 0x32027b35
@end

