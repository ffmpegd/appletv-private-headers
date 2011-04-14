/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library


@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (id)alphanumericCharacterSet;	// 0x3245eee5
+ (id)capitalizedLetterCharacterSet;	// 0x3245eec1
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x3245f6cd
+ (id)characterSetWithCharactersInString:(id)string;	// 0x324469e9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x3245f661
+ (id)characterSetWithRange:(NSRange)range;	// 0x3245f69d
+ (id)controlCharacterSet;	// 0x3245ef15
+ (id)decimalDigitCharacterSet;	// 0x32431099
+ (id)decomposableCharacterSet;	// 0x3245eecd
+ (id)illegalCharacterSet;	// 0x3245eeb5
+ (void)initialize;	// 0x32430bd1
+ (id)letterCharacterSet;	// 0x3245ef09
+ (id)lowercaseLetterCharacterSet;	// 0x3245eefd
+ (id)newlineCharacterSet;	// 0x3244a9a5
+ (id)nonBaseCharacterSet;	// 0x3245eed9
+ (id)punctuationCharacterSet;	// 0x3244ffc5
+ (id)symbolCharacterSet;	// 0x3245eea9
+ (id)uppercaseLetterCharacterSet;	// 0x3245eef1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x32438615
+ (id)whitespaceCharacterSet;	// 0x32430c1d
- (id)init;	// 0x3245173d
- (id)initWithCoder:(id)coder;	// 0x3245f6f1
- (unsigned long)_cfTypeID;	// 0x3245e245
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x3245e20d
- (id)_retainedBitmapRepresentation;	// 0x3245e7f5
- (id)bitmapRepresentation;	// 0x3245e819
- (BOOL)characterIsMember:(unsigned short)member;	// 0x3245edb5
- (id)copyWithZone:(NSZone *)zone;	// 0x3245ea11
- (unsigned)count;	// 0x3245e931
- (void)encodeWithCoder:(id)coder;	// 0x3245ea49
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x3245ed2d
- (unsigned)hash;	// 0x3245ea25
- (id)invertedSet;	// 0x3245e9cd
- (BOOL)isEmpty;	// 0x3245e97d
- (BOOL)isEqual:(id)equal;	// 0x3245e8b5
- (BOOL)isMutable;	// 0x3245e211
- (BOOL)isSupersetOfSet:(id)set;	// 0x3245ed71
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x3245e919
- (void)makeImmutable;	// 0x3245e215
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3245ece9
@end
