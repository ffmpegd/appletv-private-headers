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
+ (id)alphanumericCharacterSet;	// 0x31046ee5
+ (id)capitalizedLetterCharacterSet;	// 0x31046ec1
+ (id)characterSetWithBitmapRepresentation:(id)bitmapRepresentation;	// 0x310476cd
+ (id)characterSetWithCharactersInString:(id)string;	// 0x3102e9e9
+ (id)characterSetWithContentsOfFile:(id)file;	// 0x31047661
+ (id)characterSetWithRange:(NSRange)range;	// 0x3104769d
+ (id)controlCharacterSet;	// 0x31046f15
+ (id)decimalDigitCharacterSet;	// 0x31019099
+ (id)decomposableCharacterSet;	// 0x31046ecd
+ (id)illegalCharacterSet;	// 0x31046eb5
+ (void)initialize;	// 0x31018bd1
+ (id)letterCharacterSet;	// 0x31046f09
+ (id)lowercaseLetterCharacterSet;	// 0x31046efd
+ (id)newlineCharacterSet;	// 0x310329a5
+ (id)nonBaseCharacterSet;	// 0x31046ed9
+ (id)punctuationCharacterSet;	// 0x31037fc5
+ (id)symbolCharacterSet;	// 0x31046ea9
+ (id)uppercaseLetterCharacterSet;	// 0x31046ef1
+ (id)whitespaceAndNewlineCharacterSet;	// 0x31020615
+ (id)whitespaceCharacterSet;	// 0x31018c1d
- (id)init;	// 0x3103973d
- (id)initWithCoder:(id)coder;	// 0x310476f1
- (unsigned long)_cfTypeID;	// 0x31046245
- (CFCharacterSetRef)_expandedCFCharacterSet;	// 0x3104620d
- (id)_retainedBitmapRepresentation;	// 0x310467f5
- (id)bitmapRepresentation;	// 0x31046819
- (BOOL)characterIsMember:(unsigned short)member;	// 0x31046db5
- (id)copyWithZone:(NSZone *)zone;	// 0x31046a11
- (unsigned)count;	// 0x31046931
- (void)encodeWithCoder:(id)coder;	// 0x31046a49
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x31046d2d
- (unsigned)hash;	// 0x31046a25
- (id)invertedSet;	// 0x310469cd
- (BOOL)isEmpty;	// 0x3104697d
- (BOOL)isEqual:(id)equal;	// 0x310468b5
- (BOOL)isMutable;	// 0x31046211
- (BOOL)isSupersetOfSet:(id)set;	// 0x31046d71
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x31046919
- (void)makeImmutable;	// 0x31046215
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31046ce9
@end

