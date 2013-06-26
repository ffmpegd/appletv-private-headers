/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {
	id mFirst;	// 4 = 0x4
	id mSecond;	// 8 = 0x8
}
+ (id)pair;	// 0x34ae09e5
+ (id)pairWithFirst:(id)first second:(id)second;	// 0x349c8951
+ (id)pairWithPair:(id)pair;	// 0x34ae09a9
- (id)init;	// 0x34ae0a65
- (id)initWithCoder:(id)coder;	// 0x34ae0a79
- (id)initWithFirst:(id)first second:(id)second;	// 0x349c8991
- (id)initWithPair:(id)pair;	// 0x34ae0a1d
- (id)copyWithZone:(NSZone *)zone;	// 0x34ae0c99
- (void)dealloc;	// 0x349c9045
- (id)description;	// 0x34ae0c19
- (void)encodeWithCoder:(id)coder;	// 0x34ae0ac1
- (id)first;	// 0x349c8a79
- (unsigned)hash;	// 0x34ae0bd1
- (BOOL)isEqual:(id)equal;	// 0x34ae0b11
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34ae0d49
- (void)p_SetFirst:(id)first;	// 0x349c89f1
- (void)p_SetSecond:(id)second;	// 0x349c8a35
- (id)second;	// 0x349c8a89
@end
