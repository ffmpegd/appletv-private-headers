/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"


@interface NSSQLConstantValueIntermediate : NSSQLIntermediate {
	unsigned _type;	// 8 = 0x8
	id _constantValue;	// 12 = 0xc
}
- (id)initWithConstantValue:(id)constantValue inScope:(id)scope;	// 0x365895c5
- (id)initWithConstantValue:(id)constantValue ofType:(unsigned)type inScope:(id)scope;	// 0x36618509
- (BOOL)_addBindVarForConstId:(id)constId ofType:(unsigned)type inContext:(id)context;	// 0x36589dc5
- (BOOL)_addBindVarForConstVal1:(id)constVal1 inContext:(id)context;	// 0x365896b5
- (void)dealloc;	// 0x36589fd5
- (id)generateSQLStringInContext:(id)context;	// 0x3658962d
- (id)propertyAtEndOfKeyPathExpression:(id)keyPathExpression;	// 0x36589c11
- (unsigned)sqlTypeForProperty:(id)property;	// 0x36589d71
@end
