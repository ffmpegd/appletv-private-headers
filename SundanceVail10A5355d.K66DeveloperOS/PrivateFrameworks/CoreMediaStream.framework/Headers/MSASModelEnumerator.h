/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSEnumerator.h> // Unknown library


@interface MSASModelEnumerator : NSEnumerator {
	sqlite3 *_db;	// 4 = 0x4
	sqlite3_stmt *_stmt;	// 8 = 0x8
	id _stepBlock;	// 12 = 0xc
}
@property(assign, nonatomic) sqlite3 *db;	// G=0x338eb029; S=0x338eb039; @synthesize=_db
@property(copy, nonatomic) id stepBlock;	// G=0x338eb069; S=0x338eb07d; @synthesize=_stepBlock
@property(assign, nonatomic) sqlite3_stmt *stmt;	// G=0x338eb049; S=0x338eb059; @synthesize=_stmt
+ (id)enumeratorWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x338eaca5
- (id)init;	// 0x338ead19
- (id)initWithDatabase:(sqlite3 *)database query:(id)query stepBlock:(id)block;	// 0x338ead41
- (void).cxx_destruct;	// 0x338eb08d
// declared property getter: - (sqlite3 *)db;	// 0x338eb029
- (void)dealloc;	// 0x338eae95
- (id)nextObject;	// 0x338eaee5
// declared property setter: - (void)setDb:(sqlite3 *)db;	// 0x338eb039
// declared property setter: - (void)setStepBlock:(id)block;	// 0x338eb07d
// declared property setter: - (void)setStmt:(sqlite3_stmt *)stmt;	// 0x338eb059
// declared property getter: - (id)stepBlock;	// 0x338eb069
// declared property getter: - (sqlite3_stmt *)stmt;	// 0x338eb049
@end

