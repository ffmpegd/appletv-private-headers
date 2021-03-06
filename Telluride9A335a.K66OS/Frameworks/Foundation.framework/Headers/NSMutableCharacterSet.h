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
+ (id)alphanumericCharacterSet;	// 0x32064261
+ (id)capitalizedLetterCharacterSet;	// 0x32064381
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x32064459
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3202a409
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x320644a1
+ (id)characterSetWithRange:(NSRange)range;	// 0x32063e01
+ (id)controlCharacterSet;	// 0x32064069
+ (id)decimalDigitCharacterSet;	// 0x32043639
+ (id)decomposableCharacterSet;	// 0x320642a9
+ (id)illegalCharacterSet;	// 0x320642f1
+ (id)letterCharacterSet;	// 0x32064141
+ (id)lowercaseLetterCharacterSet;	// 0x32064189
+ (id)newlineCharacterSet;	// 0x32064411
+ (id)nonBaseCharacterSet;	// 0x32064219
+ (id)punctuationCharacterSet;	// 0x32064339
+ (id)symbolCharacterSet;	// 0x320643c9
+ (id)uppercaseLetterCharacterSet;	// 0x320641d1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x320640f9
+ (id)whitespaceCharacterSet;	// 0x320640b1
- (id)init;	// 0x32042f01
- (id)initWithCoder:(id)coder;	// 0x320644e9
- (void)addCharactersInRange:(NSRange)range;	// 0x32063ea5
- (void)addCharactersInString:(id)string;	// 0x32063f25
- (id)copyWithZone:(NSZone *)zone;	// 0x32063e39
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x32063fe5
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x32063fa5
- (void)invert;	// 0x32064025
- (BOOL)isMutable;	// 0x32064065
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32063e65
- (void)removeCharactersInRange:(NSRange)range;	// 0x32063ee5
- (void)removeCharactersInString:(id)string;	// 0x32063f65
@end

