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

__attribute__((visibility("hidden")))
@interface SFURegularExpression : NSObject <NSCopying, NSCoding> {
@private
	NSString *_expressionString;	// 4 = 0x4
	void *_reserved;	// 8 = 0x8
}
@property(readonly, retain) NSString *expressionString;	// G=0x30ec42b5; converted property
+ (void)initialize;	// 0x30ec4431
+ (id)regularExpressionWithString:(id)string;	// 0x30ec43f5
- (id)init;	// 0x30ec42d9
- (id)initWithCoder:(id)coder;	// 0x30ec44e9
- (id)initWithExpressionString:(id)expressionString;	// 0x30ec42c5
- (id)initWithExpressionString:(id)expressionString options:(unsigned)options;	// 0x30ec4771
- (id)copyWithZone:(NSZone *)zone;	// 0x30ec42f5
- (void)dealloc;	// 0x30ec48ed
- (void)encodeWithCoder:(id)coder;	// 0x30ec4471
// converted property getter: - (id)expressionString;	// 0x30ec42b5
- (const char *)getBytesForString:(id)string lossByte:(unsigned char)byte;	// 0x30ec4499
- (unsigned)hash;	// 0x30ec4751
- (BOOL)isEqual:(id)equal;	// 0x30ec4369
- (NSRange)matchedRangeForCString:(const char *)cstring range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x30ec45f9
- (NSRange)matchedRangeForString:(id)string range:(NSRange)range subexpressionRanges:(NSRange *)ranges count:(unsigned)count;	// 0x30ec4585
- (unsigned)numberOfSubexpressions;	// 0x30ec42a1
@end

