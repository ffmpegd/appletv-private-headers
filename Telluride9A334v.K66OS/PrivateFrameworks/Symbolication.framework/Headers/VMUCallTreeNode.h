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
@property(readonly, assign) unsigned long long address;	// G=0x35be417d; converted property
@property(readonly, assign) unsigned count;	// G=0x35be414d; converted property
@property(readonly, retain) NSString *name;	// G=0x35be416d; converted property
@property(readonly, assign) unsigned numBytes;	// G=0x35be415d; converted property
@property(readonly, retain) VMUCallTreeNode *parent;	// G=0x35be4195; converted property
@property(readonly, retain) NSArray *sortedChildrenWithPseudoNode;	// G=0x35be59f9; converted property
+ (void)compareChildrenOf:(id)of toChildrenOf:(id)of2 storeDiffIn:(id)anIn;	// 0x35be49f9
+ (id)makeFakeRootForNode:(id)node;	// 0x35be53e1
+ (id)rootForCompare:(id)compare to:(id)to;	// 0x35be4945
+ (id)rootForSampleFile:(FILE *)sampleFile;	// 0x35be4ebd
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator;	// 0x35be5145
+ (id)rootForSamples:(id)samples symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler options:(unsigned)options;	// 0x35be5171
+ (id)rootForTraceData:(id)traceData;	// 0x35be5019
- (void)addStackEntry:(id)entry symbolicator:(CSTypeRef)symbolicator sampler:(id)sampler numBytes:(unsigned)bytes options:(unsigned)options uniqueStrings:(id)strings addressToSymbolNameMap:(id)symbolNameMap threadPortToNameMap:(id)nameMap dispatchQueueSerialNumToNameMap:(id)nameMap9;	// 0x35be6b35
- (char *)addSubTreeFromFile:(FILE *)file withIndent:(int)indent withLine:(char *)line withLen:(unsigned *)len;	// 0x35be69b1
- (void)addTraceEvent:(id)event forTraceData:(id)traceData;	// 0x35be45d9
// converted property getter: - (unsigned long long)address;	// 0x35be417d
- (id)browserName;	// 0x35be4301
- (int)compare:(id)compare;	// 0x35be4781
- (int)compareNames:(id)names;	// 0x35be47f5
- (int)comparePuttingMainThreadFirst:(id)first;	// 0x35be685d
- (id)copyWithZone:(NSZone *)zone;	// 0x35be7329
// converted property getter: - (unsigned)count;	// 0x35be414d
- (void)dealloc;	// 0x35be6fcd
- (id)filterOutSymbols:(id)symbols;	// 0x35be67c5
- (id)filterOutSymbols:(id)symbols required:(id)required;	// 0x35be6141
- (id)filterOutWaiting;	// 0x35be42f5
- (id)findNodeMatching:(id)matching searchForward:(BOOL)forward ignoreCase:(BOOL)aCase wholeWords:(BOOL)words;	// 0x35be42fd
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address;	// 0x35be4571
- (id)findOrAddChildWithName:(id)name address:(unsigned long long)address compareSymbolNames:(BOOL)names;	// 0x35be70a9
- (id)fullOutputWithThreshold:(unsigned)threshold;	// 0x35be55c9
- (id)invertedNode;	// 0x35be6075
- (BOOL)isPseudo;	// 0x35be41a5
- (id)largestTopOfStackPath;	// 0x35be549d
// converted property getter: - (id)name;	// 0x35be416d
- (id)nextNode;	// 0x35be5cf5
// converted property getter: - (unsigned)numBytes;	// 0x35be415d
// converted property getter: - (id)parent;	// 0x35be4195
- (id)prevNode;	// 0x35be42f9
- (id)prune:(unsigned)prune;	// 0x35be5d9d
- (id)pseudoName;	// 0x35be42b9
- (id)pseudoNodeTopOfStackChild;	// 0x35be481d
- (void)release;	// 0x35be4595
- (id)retain;	// 0x35be41b9
- (unsigned)retainCount;	// 0x35be41dd
- (void)setNameToCount:(id)count;	// 0x35be5c0d
- (id)sortedChildrenByNameWithPseudoNode;	// 0x35be591d
// converted property getter: - (id)sortedChildrenWithPseudoNode;	// 0x35be59f9
- (id)sortedChildrenWithPseudoNode:(id)pseudoNode withCompare:(SEL)compare;	// 0x35be5add
- (unsigned)sumOfChildrenCounts;	// 0x35be425d
@end
