/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSDictionary, NSString;

__attribute__((objc_exception))
@interface NSException : NSObject <NSCopying, NSCoding> {
	NSString *name;	// 4 = 0x4
	NSString *reason;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
	id reserved;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x3565f1a5; converted property
@property(readonly, retain) NSString *reason;	// G=0x3565f1b5; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x3565f1c5; converted property
+ (id)exceptionWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x3565f435
+ (void)raise:(id)raise format:(id)format;	// 0x3565f57d
+ (void)raise:(id)raise format:(id)format arguments:(void *)arguments;	// 0x3565f519
- (id)init;	// 0x3565f3b9
- (id)initWithCoder:(id)coder;	// 0x3565f5e5
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x3565f3d1
- (BOOL)_installStackTraceKeyIfNeeded;	// 0x3565f225
- (id)callStackReturnAddresses;	// 0x3565f1d5
- (id)callStackSymbols;	// 0x3565f1fd
- (id)copyWithZone:(NSZone *)zone;	// 0x3565f509
- (void)dealloc;	// 0x3565f47d
- (id)description;	// 0x3565f38d
- (void)encodeWithCoder:(id)coder;	// 0x3565f5e9
- (unsigned)hash;	// 0x3565f36d
- (BOOL)isEqual:(id)equal;	// 0x3565f30d
// converted property getter: - (id)name;	// 0x3565f1a5
- (void)raise;	// 0x3565f3b1
// converted property getter: - (id)reason;	// 0x3565f1b5
// converted property getter: - (id)userInfo;	// 0x3565f1c5
@end
