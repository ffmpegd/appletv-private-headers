/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {
	NSString *_pattern;	// 4 = 0x4
	unsigned _options;	// 8 = 0x8
	void *_internal;	// 12 = 0xc
	id _reserved1;	// 16 = 0x10
	int _checkout;	// 20 = 0x14
	int _reserved2;	// 24 = 0x18
}
@property(readonly, assign) unsigned numberOfCaptureGroups;	// G=0x30351221; 
@property(readonly, assign) unsigned options;	// G=0x30351211; 
@property(readonly, assign) NSString *pattern;	// G=0x303511d9; 
+ (id)escapedPatternForString:(id)string;	// 0x3035124d
+ (id)escapedTemplateForString:(id)string;	// 0x303523a5
+ (void)initialize;	// 0x30296785
+ (id)regularExpressionWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x30350d61
- (id)initWithCoder:(id)coder;	// 0x30350e89
- (id)initWithPattern:(id)pattern options:(unsigned)options error:(id *)error;	// 0x302967c5
- (id)copyWithZone:(NSZone *)zone;	// 0x30350da9
- (void)dealloc;	// 0x303510b1
- (id)description;	// 0x30351161
- (void)encodeWithCoder:(id)coder;	// 0x30350db9
- (void)enumerateMatchesInString:(id)string options:(unsigned)options range:(NSRange)range usingBlock:(id)block;	// 0x30351365
- (void)finalize;	// 0x30351119
- (id)firstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x30351b91
- (unsigned)hash;	// 0x30350fb9
- (BOOL)isEqual:(id)equal;	// 0x30350ff9
- (id)matchesInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x30351989
// declared property getter: - (unsigned)numberOfCaptureGroups;	// 0x30351221
- (unsigned)numberOfMatchesInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x30351a51
// declared property getter: - (unsigned)options;	// 0x30351211
// declared property getter: - (id)pattern;	// 0x303511d9
- (NSRange)rangeOfFirstMatchInString:(id)string options:(unsigned)options range:(NSRange)range;	// 0x30351d1d
- (unsigned)replaceMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;	// 0x30352135
- (id)replacementStringForResult:(id)result inString:(id)string offset:(int)offset template:(id)aTemplate;	// 0x303523b5
- (id)stringByReplacingMatchesInString:(id)string options:(unsigned)options range:(NSRange)range withTemplate:(id)aTemplate;	// 0x30351e6d
@end
