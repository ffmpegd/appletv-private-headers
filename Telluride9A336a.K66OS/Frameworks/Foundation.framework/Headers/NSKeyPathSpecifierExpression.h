/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
@private
	NSString *_value;	// 12 = 0xc
}
- (id)initWithCoder:(id)coder;	// 0x33721041
- (id)initWithObject:(id)object;	// 0x3365fac5
- (id)constantValue;	// 0x33667aed
- (id)copyWithZone:(NSZone *)zone;	// 0x33686361
- (void)dealloc;	// 0x33661481
- (void)encodeWithCoder:(id)coder;	// 0x33720f99
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x336850dd
- (unsigned)hash;	// 0x33721185
- (BOOL)isEqual:(id)equal;	// 0x33721101
- (id)keyPath;	// 0x3365fcbd
- (id)predicateFormat;	// 0x33683441
@end

