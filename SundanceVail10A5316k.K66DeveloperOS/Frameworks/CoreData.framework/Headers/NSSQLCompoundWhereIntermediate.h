/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
@private
	NSMutableArray *_subclauses;	// 12 = 0xc
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x32d2fa2d
- (id)_generateMulticlauseStringInContext:(id)context;	// 0x32d2ff99
- (void)dealloc;	// 0x32d31e51
- (id)generateSQLStringInContext:(id)context;	// 0x32d2fcf1
- (BOOL)isOrScoped;	// 0x32d30129
@end
