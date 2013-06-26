/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSManagedObjectContext;

@interface _NSChildContextPredicateRemapper : NSObject {
	NSManagedObjectContext *_context;	// 4 = 0x4
}
- (id)init;	// 0x30eb8c31
- (id)initWithContext:(id)context;	// 0x30eb8c5d
- (id)createPredicateForFetchFromPredicate:(id)predicate withContext:(id)context;	// 0x30eb8ce9
- (void)dealloc;	// 0x30eb8c9d
- (id)replacementValueForValue:(id)value;	// 0x30eb8d35
- (void)visitPredicate:(id)predicate;	// 0x30eb8d31
- (void)visitPredicateExpression:(id)expression;	// 0x30eb9095
@end
