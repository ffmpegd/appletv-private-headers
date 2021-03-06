/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString, NSArray, VMUCallTreeNode;

@interface VMUCallTreeNode : NSObject {
	unsigned flags;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	unsigned long long address;	// 12 = 0xc
	NSArray *sortedChildrenWithPseudoNode;	// 20 = 0x14
	unsigned numBytes;	// 24 = 0x18
	unsigned count;	// 28 = 0x1c
	union {
		NSString *thePseudoName;
		VMUCallTreeNode *theChild;
		VMUCallTreeNode **theChildren;
	} un;	// 32 = 0x20
	VMUCallTreeNode *parent;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long address;	// G=0x3013217d; converted property
@property(readonly, assign) unsigned count;	// G=0x3013214d; converted property
@property(readonly, retain) NSString *name;	// G=0x3013216d; converted property
@property(readonly, assign) unsigned numBytes;	// G=0x3013215d; converted property
@property(readonly, retain) VMUCallTreeNode *parent;	// G=0x30132195; converted property
@property(readonly, retain) NSArray *sortedChildrenWithPseudoNode;	// G=0x301339f9; converted property
+ (void)compareChildrenOf:(id)of toChildrenOf:(id)of2 storeDiffIn:(id)anIn;	// 0x301329f9
+ (id)makeFakeRootForNode:(id)node;	// 0x301333e1
+ (id)rootForCompare:(id)compare to:(id)to;	// 0x30132945
+ (id)rootForSampleFile:(FILE *)sampleFile;	// 0x30132ebd
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator;	// 0x30133145
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler options:(unsigned)options;	// 0x30133171
+ (id)rootForTraceData:(id)traceData;	// 0x30133019
- (void)addStackEntry:(id)entry symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler numBytes:(unsigned)bytes options:(unsigned)options uniqueStrings:(id)strings addressToSymbolNameMap:(id)symbolNameMap threadPortToNameMap:(id)nameMap dispatchQueueSerialNumToNameMap:(id)nameMap9;	// 0x30134b35
- (char *)addSubTreeFromFile:(FILE *)file withIndent:(int)indent withLine:(char *)line withLen:(unsigned *)len;	// 0x301349b1
- (void)addTraceEvent:(id)event forTraceData:(id)traceData;	// 0x301325d9
// converted property getter: - (unsigned long long)address;	// 0x3013217d
- (id)browserName;	// 0x30132301
- (int)compare:(id)compare;	// 0x30132781
- (int)compareNames:(id)names;	// 0x301327f5
- (int)comparePuttingMainThreadFirst:(id)first;	// 0x3013485d
- (id)copyWithZone:(NSZone *)zone;	// 0x30135329
// converted property getter: - (unsigned)count;	// 0x3013214d
- (void)dealloc;	// 0x30134fcd
- (id)filterOutSymbols:(id)symbols;	// 0x301347c5
- (id)filterOutSymbols:(id)symbols required:(id)required;	// 0x30134141
- (id)filterOutWaiting;	// 0x301322f5
- (id)findNodeMatching:(id)matching searchForward:(BOOL)forward ignoreCase:(BOOL)aCase wholeWords:(BOOL)words;	// 0x301322fd
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address;	// 0x30132571
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address compareSymbolNames:(BOOL)names;	// 0x301350a9
- (id)fullOutputWithThreshold:(unsigned)threshold;	// 0x301335c9
- (id)invertedNode;	// 0x30134075
- (BOOL)isPseudo;	// 0x301321a5
- (id)largestTopOfStackPath;	// 0x3013349d
// converted property getter: - (id)name;	// 0x3013216d
- (id)nextNode;	// 0x30133cf5
// converted property getter: - (unsigned)numBytes;	// 0x3013215d
// converted property getter: - (id)parent;	// 0x30132195
- (id)prevNode;	// 0x301322f9
- (id)prune:(unsigned)prune;	// 0x30133d9d
- (id)pseudoName;	// 0x301322b9
- (id)pseudoNodeTopOfStackChild;	// 0x3013281d
- (void)release;	// 0x30132595
- (id)retain;	// 0x301321b9
- (unsigned)retainCount;	// 0x301321dd
- (void)setNameToCount:(id)count;	// 0x30133c0d
- (id)sortedChildrenByNameWithPseudoNode;	// 0x3013391d
// converted property getter: - (id)sortedChildrenWithPseudoNode;	// 0x301339f9
- (id)sortedChildrenWithPseudoNode:(id)pseudoNode withCompare:(SEL)compare;	// 0x30133add
- (unsigned)sumOfChildrenCounts;	// 0x3013225d
@end

