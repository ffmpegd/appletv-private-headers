/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLIntermediate.h"


@interface NSSQLOffsetIntermediate : NSSQLIntermediate {
	unsigned _offset;	// 8 = 0x8
}
- (id)initWithOffset:(unsigned)offset inScope:(id)scope;	// 0x33543991
- (id)generateSQLStringInContext:(id)context;	// 0x335439d1
@end
