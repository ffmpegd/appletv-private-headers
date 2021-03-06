/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCharacterSet.h"
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"


@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying> {
}
+ (id)alphanumericCharacterSet;	// 0x31d4d251
+ (id)capitalizedLetterCharacterSet;	// 0x31d4d371
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x31d4d449
+ (id)characterSetWithCharactersInString:(id)string;	// 0x31d133f9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x31d4d491
+ (id)characterSetWithRange:(NSRange)range;	// 0x31d4cdf1
+ (id)controlCharacterSet;	// 0x31d4d059
+ (id)decimalDigitCharacterSet;	// 0x31d2c629
+ (id)decomposableCharacterSet;	// 0x31d4d299
+ (id)illegalCharacterSet;	// 0x31d4d2e1
+ (id)letterCharacterSet;	// 0x31d4d131
+ (id)lowercaseLetterCharacterSet;	// 0x31d4d179
+ (id)newlineCharacterSet;	// 0x31d4d401
+ (id)nonBaseCharacterSet;	// 0x31d4d209
+ (id)punctuationCharacterSet;	// 0x31d4d329
+ (id)symbolCharacterSet;	// 0x31d4d3b9
+ (id)uppercaseLetterCharacterSet;	// 0x31d4d1c1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x31d4d0e9
+ (id)whitespaceCharacterSet;	// 0x31d4d0a1
- (id)init;	// 0x31d2bef1
- (id)initWithCoder:(id)coder;	// 0x31d4d4d9
- (void)addCharactersInRange:(NSRange)range;	// 0x31d4ce95
- (void)addCharactersInString:(id)string;	// 0x31d4cf15
- (id)copyWithZone:(NSZone *)zone;	// 0x31d4ce29
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x31d4cfd5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x31d4cf95
- (void)invert;	// 0x31d4d015
- (BOOL)isMutable;	// 0x31d4d055
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31d4ce55
- (void)removeCharactersInRange:(NSRange)range;	// 0x31d4ced5
- (void)removeCharactersInString:(id)string;	// 0x31d4cf55
@end

