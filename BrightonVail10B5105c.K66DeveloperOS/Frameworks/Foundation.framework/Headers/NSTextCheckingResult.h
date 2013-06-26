/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign) NSRange range;	// G=0x3616549d; 
@property(readonly, assign) unsigned long long resultType;	// G=0x36165475; 
+ (id)addressCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x36165789
+ (id)correctionCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x3616592d
+ (id)dashCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x36165885
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date;	// 0x361656d5
+ (id)dateCheckingResultWithRange:(NSRange)range date:(id)date timeZone:(id)zone duration:(double)duration;	// 0x36165729
+ (id)grammarCheckingResultWithRange:(NSRange)range details:(id)details;	// 0x36165681
+ (void)initialize;	// 0x360bb8f9
+ (id)linkCheckingResultWithRange:(NSRange)range URL:(id)url;	// 0x361657dd
+ (id)orthographyCheckingResultWithRange:(NSRange)range orthography:(id)orthography;	// 0x361655e1
+ (id)phoneNumberCheckingResultWithRange:(NSRange)range phoneNumber:(id)number;	// 0x36165a01
+ (id)quoteCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x36165831
+ (id)regularExpressionCheckingResultWithRanges:(NSRange *)ranges count:(unsigned)count regularExpression:(id)expression;	// 0x36165981
+ (id)replacementCheckingResultWithRange:(NSRange)range replacementString:(id)string;	// 0x361658d9
+ (id)spellCheckingResultWithRange:(NSRange)range;	// 0x36165635
+ (id)transitInformationCheckingResultWithRange:(NSRange)range components:(id)components;	// 0x36165a55
- (id)initWithCoder:(id)coder;	// 0x36165269
- (id)URL;	// 0x361655cd
- (BOOL)_adjustRangesWithOffset:(int)offset;	// 0x361654ed
- (id)addressComponents;	// 0x361655b9
- (id)components;	// 0x361655c9
- (id)copyWithZone:(NSZone *)zone;	// 0x361651b1
- (id)date;	// 0x36165595
- (NSRange)decodeRangeWithCoder:(id)coder;	// 0x3616533d
- (id)description;	// 0x361651c1
- (double)duration;	// 0x361655a1
- (void)encodeRangeWithCoder:(id)coder;	// 0x3616528d
- (void)encodeWithCoder:(id)coder;	// 0x36165245
- (id)grammarDetails;	// 0x36165591
- (unsigned)numberOfRanges;	// 0x361654f1
- (id)orthography;	// 0x3616558d
- (id)phoneNumber;	// 0x361655d9
// declared property getter: - (NSRange)range;	// 0x3616549d
- (NSRange)rangeAtIndex:(unsigned)index;	// 0x361654f5
- (id)regularExpression;	// 0x361655d5
- (id)replacementString;	// 0x361655d1
- (id)resultByAdjustingRangesWithOffset:(int)offset;	// 0x361654c9
// declared property getter: - (unsigned long long)resultType;	// 0x36165475
- (id)timeZone;	// 0x36165599
- (void *)underlyingResult;	// 0x361655dd
@end
