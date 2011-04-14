/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSExpression.h"
#import "Foundation-Structs.h"


@interface NSConstantValueExpression : NSExpression {
@private
	id constantValue;	// 12 = 0xc
}
@property(readonly, retain) id constantValue;	// G=0x32440d75; converted property
- (id)initWithCoder:(id)coder;	// 0x324cd489
- (id)initWithObject:(id)object;	// 0x32415f21
// converted property getter: - (id)constantValue;	// 0x32440d75
- (id)copyWithZone:(NSZone *)zone;	// 0x32442185
- (void)dealloc;	// 0x32418a39
- (void)encodeWithCoder:(id)coder;	// 0x324cd395
- (id)expressionValueWithObject:(id)object;	// 0x324cd1dd
- (id)expressionValueWithObject:(id)object context:(id)context;	// 0x32416f59
- (unsigned)hash;	// 0x324cd1ed
- (BOOL)isEqual:(id)equal;	// 0x324cd211
- (id)predicateFormat;	// 0x324cd295
@end
