/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLWhereIntermediate.h"

@class NSMutableArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {
	NSMutableArray *_subclauses;	// 12 = 0xc
}
- (id)initWithPredicate:(id)predicate inScope:(id)scope inContext:(id)context;	// 0x33cdf929
- (id)_generateMulticlauseStringInContext:(id)context;	// 0x33cdff85
- (void)dealloc;	// 0x33ce0215
- (id)generateSQLStringInContext:(id)context;	// 0x33cdfcdd
- (BOOL)isOrScoped;	// 0x33ce0115
@end

