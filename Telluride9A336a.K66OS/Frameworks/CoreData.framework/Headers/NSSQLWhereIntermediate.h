/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"

@class NSPredicate;

__attribute__((visibility("hidden")))
@interface NSSQLWhereIntermediate : NSSQLIntermediate {
@private
	NSPredicate *_predicate;	// 8 = 0x8
}
@property(readonly, retain) NSPredicate *predicate;	// G=0x323df099; converted property
- (id)initWithPredicate:(id)predicate inScope:(id)scope;	// 0x32310cc5
// converted property getter: - (id)predicate;	// 0x323df099
@end

