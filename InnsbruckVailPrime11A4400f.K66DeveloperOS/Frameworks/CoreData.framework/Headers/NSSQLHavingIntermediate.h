/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLWhereIntermediate;

@interface NSSQLHavingIntermediate : NSSQLIntermediate {
	NSSQLWhereIntermediate *_whereClause;	// 8 = 0x8
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x2d14e119
- (void)dealloc;	// 0x2d14e2d5
- (id)generateSQLStringInContext:(id)context;	// 0x2d14e329
- (BOOL)isHavingScoped;	// 0x2d14e325
@end

