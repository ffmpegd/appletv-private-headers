/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSSQLWhereIntermediate;

__attribute__((visibility("hidden")))
@interface NSSQLHavingIntermediate : NSSQLIntermediate {
@private
	NSSQLWhereIntermediate *_whereClause;	// 8 = 0x8
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x363281a1
- (void)dealloc;	// 0x363283a9
- (id)generateSQLStringInContext:(id)context;	// 0x36328385
- (BOOL)isHavingScoped;	// 0x3632819d
@end

