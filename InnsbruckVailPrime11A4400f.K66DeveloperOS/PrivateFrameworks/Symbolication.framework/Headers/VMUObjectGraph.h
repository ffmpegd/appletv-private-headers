/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMUDirectedGraph.h"


@interface VMUObjectGraph : VMUDirectedGraph {
	VMUObjectGraphEdge *_referenceTable;	// 40 = 0x28
	unsigned _referenceTableCount;	// 44 = 0x2c
	unsigned _referenceTableCapacity;	// 48 = 0x30
	XXStruct_JiVJqB *_internalizedNodes;	// 52 = 0x34
	id _nodeProvider;	// 56 = 0x38
}
- (id)initWithNodes:(unsigned)nodes nodeProvider:(id)provider;	// 0x329372ad
- (unsigned)addEdgeFromNode:(unsigned)node sourceOffset:(unsigned long long)offset withScanType:(int)scanType toNode:(unsigned)node4 destinationOffset:(unsigned long long)offset5;	// 0x329374b1
- (unsigned)addEdgeFromNode:(unsigned)node toNode:(unsigned)node2;	// 0x32937581
- (void)dealloc;	// 0x32937311
- (void)enumerateMarkedObjects:(void *)objects withBlock:(id)block;	// 0x329376e1
- (void)enumerateObjectsWithBlock:(id)block;	// 0x329375b5
- (void)enumerateReferencesOfNode:(unsigned)node withBlock:(id)block;	// 0x32937a61
- (void)enumerateReferencesWithBlock:(id)block;	// 0x329377cd
- (void)internalizeNodes;	// 0x32937389
- (void)invertEdges;	// 0x32937d2d
- (XXStruct_JiVJqB)nodeWithName:(unsigned)name;	// 0x32937c61
- (XXStruct_csWPmB)referenceInfoWithName:(unsigned)name;	// 0x32937cd1
@end

