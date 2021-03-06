/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x34acaaf9; converted property
+ (void)initialize;	// 0x34aca719
+ (id)regularExpressionWithString:(id)string;	// 0x34aca759
- (id)init;	// 0x34aca9b9
- (id)initWithCoder:(id)coder;	// 0x34acad95
- (id)initWithExpressionString:(id)expressionString;	// 0x34aca80d
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x34aca821
- (id)copyWithZone:(NSZone *)zone;	// 0x34aca9d5
- (void)dealloc;	// 0x34aca795
- (void)encodeWithCoder:(id)coder;	// 0x34acae81
// converted property getter: - (id)expressionString;	// 0x34acaaf9
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x34acae31
- (unsigned)hash;	// 0x34acaad9
- (BOOL)isEqual:(id)equal;	// 0x34acaa51
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x34acab09
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x34acac75
- (unsigned)numberOfSubexpressions;	// 0x34aca9a5
@end

