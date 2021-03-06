/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSExpression.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSymbolicExpression : NSExpression {
	NSString *_token;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x319931a9
- (id)initWithString:(id)string;	// 0x31993055
- (id)constantValue;	// 0x319932f5
- (id)copyWithZone:(NSZone *)zone;	// 0x3199325d
- (void)dealloc;	// 0x31993299
- (void)encodeWithCoder:(id)coder;	// 0x31993101
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x3199338d
- (unsigned)hash;	// 0x3199336d
- (BOOL)isEqual:(id)equal;	// 0x31993305
- (id)predicateFormat;	// 0x319932e5
@end

