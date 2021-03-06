/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSVariableExpression : NSExpression {
	NSString *_variable;	// 12 = 0xc
}
@property(readonly, retain) NSString *variable;	// G=0x327f7dfd; converted property
- (id)initWithCoder:(id)coder;	// 0x327f7f21
- (id)initWithObject:(id)object;	// 0x32764489
- (id)_expressionWithSubstitutionVariables:(id)substitutionVariables;	// 0x327f819d
- (id)copyWithZone:(NSZone *)zone;	// 0x327f8065
- (void)dealloc;	// 0x32764cf9
- (void)encodeWithCoder:(id)coder;	// 0x327f7fcd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x327f8099
- (unsigned)hash;	// 0x327f7e0d
- (BOOL)isEqual:(id)equal;	// 0x327f7e31
- (id)predicateFormat;	// 0x327f7eb1
// converted property getter: - (id)variable;	// 0x327f7dfd
@end

