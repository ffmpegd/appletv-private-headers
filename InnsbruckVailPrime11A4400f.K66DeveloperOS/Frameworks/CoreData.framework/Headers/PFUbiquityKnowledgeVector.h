/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSCoding.h"
#import </libobjc.A.h>
#import "NSCopying.h"
#import "CoreData-Structs.h"

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying> {
	NSDictionary *_kv;	// 4 = 0x4
	NSDictionary *_storeKVDict;	// 8 = 0x8
	unsigned _hash;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned hash;	// G=0x2d1b0029; @synthesize=_hash
@property(readonly, assign, nonatomic) unsigned length;	// G=0x2d1ae509; 
+ (id)createKnowledgeVectorDictionaryFromString:(id)string;	// 0x2d1aff01
+ (id)createSetOfAllPeerIDsInKnowledgeVectors:(id)knowledgeVectors;	// 0x2d1afe05
- (id)init;	// 0x2d1adb09
- (id)initFromCopy:(id)copy storeKVDict:(id)dict hash:(unsigned)hash;	// 0x2d1ade51
- (id)initWithCoder:(id)coder;	// 0x2d1ae075
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary;	// 0x2d1adc85
- (id)initWithKnowledgeVectorDictionary:(id)knowledgeVectorDictionary andStoreKnowledgeVectorDictionary:(id)dictionary;	// 0x2d1adec9
- (id)initWithKnowledgeVectorString:(id)knowledgeVectorString;	// 0x2d1adb61
- (id)initWithStoreKnowledgeVectorDictionary:(id)storeKnowledgeVectorDictionary;	// 0x2d1adcdd
- (void)_updateHash;	// 0x2d1ae529
- (id)allPeerIDs;	// 0x2d1aee9d
- (BOOL)canMergeWithKnowledgeVector:(id)knowledgeVector;	// 0x2d1af7a1
- (int)compare:(id)compare;	// 0x2d1ae0e1
- (BOOL)conflictsWithKnowledgeVector:(id)knowledgeVector;	// 0x2d1af985
- (id)copyWithZone:(NSZone *)zone;	// 0x2d1adf85
- (id)createAncestorVectorForConflictingVector:(id)conflictingVector;	// 0x2d1af375
- (id)createKnowledgeVectorString;	// 0x2d1aec99
- (id)createSetOfAllPeerIDsWithOtherVector:(id)otherVector;	// 0x2d1aeebd
- (id)createStoreKnowledgeVectorDictionary;	// 0x2d1afb89
- (void)dealloc;	// 0x2d1adf0d
- (void)decrementToMinimumWithKnowledgeVector:(id)knowledgeVector;	// 0x2d1aeb1d
- (id)description;	// 0x2d1adff1
- (void)encodeWithCoder:(id)coder;	// 0x2d1ae0b1
- (BOOL)hasPeerIDInCommonWith:(id)with;	// 0x2d1ae43d
// declared property getter: - (unsigned)hash;	// 0x2d1b0029
- (BOOL)isAncestorOfKnowledgeVector:(id)knowledgeVector;	// 0x2d1ae721
- (BOOL)isDescendantOfKnowledgeVector:(id)knowledgeVector;	// 0x2d1ae585
- (BOOL)isEqual:(id)equal;	// 0x2d1ae26d
- (BOOL)isZeroVector;	// 0x2d1ae8bd
// declared property getter: - (unsigned)length;	// 0x2d1ae509
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)vector;	// 0x2d1aef35
- (id)newKnowledgeVectorByDecrementingPeerWithID:(id)anId;	// 0x2d1af55d
- (id)newKnowledgeVectorByIncrementingPeerWithID:(id)anId;	// 0x2d1af695
- (id)newKnowledgeVectorBySubtractingVector:(id)vector;	// 0x2d1af139
- (id)transactionNumberForPeerID:(id)peerID;	// 0x2d1aee7d
- (void)updateWithKnowledgeVector:(id)knowledgeVector;	// 0x2d1ae99d
@end
