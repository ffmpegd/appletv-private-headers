/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableSet, NSMapTable;

@interface VMUTraceData : NSObject {
	NSMapTable *pcMap;	// 4 = 0x4
	NSMapTable *threadTraces;	// 8 = 0x8
	NSMapTable *libXrefs;	// 12 = 0xc
	NSMapTable *fnXrefs;	// 16 = 0x10
	NSMutableSet *threadIDnumbers;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	unsigned threadCount;	// 28 = 0x1c
}
@property(readonly, assign) unsigned maxDepth;	// G=0x313dd811; converted property
- (id)init;	// 0x313dcb35
- (id)initWithBacktraces:(id)backtraces forTask:(unsigned)task;	// 0x313dd2f5
- (id)initWithLogRecords:(XXStruct_KGqEpA *)logRecords forTask:(unsigned)task;	// 0x313dd041
- (void)addEvent:(id)event;	// 0x313dce15
- (void)addOrIncrementXref:(id)xref withParent:(id)parent withChild:(id)child withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x313de225
- (void)buildPCMap:(long *)map withNumPages:(unsigned)numPages forTask:(unsigned)task;	// 0x313dcf01
- (void)dealloc;	// 0x313dccd1
- (void)finalize;	// 0x313dcd81
- (void)freeXrefTable:(id)table;	// 0x313dcc6d
- (id)functionXref;	// 0x313de459
- (void)generateXref:(id)xref withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x313de325
- (id)libraryXref;	// 0x313de4f9
// converted property getter: - (unsigned)maxDepth;	// 0x313dd811
- (id)numberForThread:(unsigned)thread;	// 0x313dd7ad
- (void)printXrefs:(id)xrefs toString:(id)string;	// 0x313de599
- (unsigned long long)readAddressFromFile:(FILE *)file has64bitAddresses:(BOOL)addresses needSwap:(BOOL)swap;	// 0x313ddb65
- (BOOL)readFromFile:(FILE *)file;	// 0x313ddbc5
- (id)symbolForPC:(unsigned long long)pc;	// 0x313dd711
- (id)threadIDs;	// 0x313dd74d
- (id)traceForThread:(unsigned)thread;	// 0x313dd76d
- (void)writeToFile:(FILE *)file;	// 0x313dd821
@end

